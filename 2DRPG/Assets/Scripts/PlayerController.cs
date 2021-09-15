using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float speed;
    float h;
    float v;
    bool isHorizonmove;
    Vector3 dirVec;
    GameObject scanObject;
    public GameManager gameManager;

    Animator anim;

    Rigidbody2D rigid;
    void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
    }

     void Update()
     {
        //Move Value
         h = gameManager.isAction ? 0 : Input.GetAxisRaw("Horizontal");
         v = gameManager.isAction ? 0 : Input.GetAxisRaw("Vertical");

        //Check Button Down & Up
        bool hDown = gameManager.isAction ? false : Input.GetButtonDown("Horizontal"); 
        bool vDown = gameManager.isAction ? false : Input.GetButtonDown("Vertical");
        bool hUp = gameManager.isAction ? false : Input.GetButtonUp("Horizontal");
        bool vUp = gameManager.isAction ? false : Input.GetButtonUp("Vertical");

        //check Horzontal Move
        if (hDown)
            isHorizonmove = true;
        else if (vDown)
            isHorizonmove = false;
        else if (hUp || vUp)
            isHorizonmove = h != 0;


        //Animation
        if (anim.GetInteger("hAxisRaw") != h)
        {
            anim.SetBool("isChange", true);
            anim.SetInteger("hAxisRaw", (int)h);
        }
        else if(anim.GetInteger("vAxisRaw") != v)
        {
            anim.SetBool("isChange", true);
            anim.SetInteger("vAxisRaw", (int)v);
        }
        else
            anim.SetBool("isChange", false);


        //Direction
        if (vDown && v == 1)
            dirVec = Vector3.up;
        else if(vDown && v != 1)
            dirVec = Vector3.down;
        else if (hDown && h == 1)
            dirVec = Vector3.right;
        else if (hDown && h != 1)
            dirVec = Vector3.left;

        //Scan Object
        if (Input.GetButtonDown("Jump") && scanObject != null)
            gameManager.Action(scanObject);

     }
        
        
    void FixedUpdate()
    {
        //Move
        Vector2 moveVec = isHorizonmove ? new Vector2(h, 0)  : new Vector2(0, v) ;
        rigid.velocity = moveVec * speed;

        //Ray
        //Debug.DrawRay(rigid.position, dirVec * 0.7f, new Color(0, 1, 0));
        RaycastHit2D rayHit = Physics2D.Raycast(rigid.position, dirVec, 0.7f, LayerMask.GetMask("Object"));


        if (rayHit.collider != null)
        {
            scanObject = rayHit.collider.gameObject;
        }
        else
            scanObject = null;
    }

    
   
}
