#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C4F8
// Address: 0x10c4f8 - 0x10ca70
void sub_0010C4F8_0x10c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C4F8_0x10c4f8");
#endif

    switch (ctx->pc) {
        case 0x10c578u: goto label_10c578;
        case 0x10c57cu: goto label_10c57c;
        case 0x10c5a8u: goto label_10c5a8;
        case 0x10c62cu: goto label_10c62c;
        case 0x10c640u: goto label_10c640;
        case 0x10c67cu: goto label_10c67c;
        case 0x10c698u: goto label_10c698;
        case 0x10c6c4u: goto label_10c6c4;
        case 0x10c6d4u: goto label_10c6d4;
        case 0x10c718u: goto label_10c718;
        case 0x10c728u: goto label_10c728;
        case 0x10c7a0u: goto label_10c7a0;
        case 0x10c7b0u: goto label_10c7b0;
        case 0x10c814u: goto label_10c814;
        case 0x10c830u: goto label_10c830;
        case 0x10c840u: goto label_10c840;
        case 0x10c8f8u: goto label_10c8f8;
        case 0x10c944u: goto label_10c944;
        case 0x10c94cu: goto label_10c94c;
        case 0x10c960u: goto label_10c960;
        case 0x10c9b0u: goto label_10c9b0;
        case 0x10c9c4u: goto label_10c9c4;
        case 0x10c9d8u: goto label_10c9d8;
        default: break;
    }

    ctx->pc = 0x10c4f8u;

    // 0x10c4f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10c4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10c4fc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10c500: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10c500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10c504: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10c508: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x10c508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x10c50c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10c510: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x10c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x10c514: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10c518: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x10c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x10c51c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x10c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x10c520: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x10c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x10c524: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x10c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x10c528: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x10c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x10c52c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10c530: 0x8c440214  lw          $a0, 0x214($v0)
    ctx->pc = 0x10c530u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x489C1Cu));
    // 0x10c534: 0x10800143  beqz        $a0, . + 4 + (0x143 << 2)
    ctx->pc = 0x10C534u;
    {
        const bool branch_taken_0x10c534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C534u;
        // 0x10c538: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c534) {
            ctx->pc = 0x10CA44u;
            goto label_10ca44;
        }
    }
    ctx->pc = 0x10C53Cu;
    // 0x10c53c: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x10c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x10c540: 0x10600140  beqz        $v1, . + 4 + (0x140 << 2)
    ctx->pc = 0x10C540u;
    {
        const bool branch_taken_0x10c540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C540u;
        // 0x10c544: 0x24450108  addiu       $a1, $v0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c540) {
            ctx->pc = 0x10CA44u;
            goto label_10ca44;
        }
    }
    ctx->pc = 0x10C548u;
    // 0x10c548: 0x8c620ff8  lw          $v0, 0xFF8($v1)
    ctx->pc = 0x10c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x10c54c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c550: 0x460013d  bltz        $v1, . + 4 + (0x13D << 2)
    ctx->pc = 0x10C550u;
    {
        const bool branch_taken_0x10c550 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C550u;
        // 0x10c554: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c550) {
            ctx->pc = 0x10CA48u;
            goto label_10ca48;
        }
    }
    ctx->pc = 0x10C558u;
    // 0x10c558: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10c55c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10c560: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10c560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10c564: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c568: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C568u;
    {
        const bool branch_taken_0x10c568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c568) {
            ctx->pc = 0x10C56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C568u;
            // 0x10c56c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C588u;
            goto label_10c588;
        }
    }
    ctx->pc = 0x10C570u;
    // 0x10c570: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10C570u;
    {
        const bool branch_taken_0x10c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C570u;
        // 0x10c574: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c570) {
            ctx->pc = 0x10C594u;
            goto label_10c594;
        }
    }
    ctx->pc = 0x10C578u;
label_10c578:
    // 0x10c578: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x10c578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_10c57c:
    // 0x10c57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c580: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x10C580u;
    {
        const bool branch_taken_0x10c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C580u;
        // 0x10c584: 0xac62a4a8  sw          $v0, -0x5B58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c580) {
            ctx->pc = 0x10CA40u;
            goto label_10ca40;
        }
    }
    ctx->pc = 0x10C588u;
label_10c588:
    // 0x10c588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c58c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x10c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x10c590: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x10c590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_10c594:
    // 0x10c594: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10c594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c598: 0x906200cc  lbu         $v0, 0xCC($v1)
    ctx->pc = 0x10c598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x10c59c: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x10C59Cu;
    {
        const bool branch_taken_0x10c59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C59Cu;
        // 0x10c5a0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c59c) {
            ctx->pc = 0x10CA40u;
            goto label_10ca40;
        }
    }
    ctx->pc = 0x10C5A4u;
    // 0x10c5a4: 0x0  nop
    ctx->pc = 0x10c5a4u;
    // NOP
label_10c5a8:
    // 0x10c5a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x10c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10c5ac: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x10c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c5b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x10c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10c5b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10c5b8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10c5bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c5c0: 0x8c72001c  lw          $s2, 0x1C($v1)
    ctx->pc = 0x10c5c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10c5c4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x10c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10c5c8: 0x50620118  beql        $v1, $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x10C5C8u;
    {
        const bool branch_taken_0x10c5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10c5c8) {
            ctx->pc = 0x10C5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C5C8u;
            // 0x10c5cc: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA2Cu;
            goto label_10ca2c;
        }
    }
    ctx->pc = 0x10C5D0u;
    // 0x10c5d0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x10c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x10c5d4: 0x50400115  beql        $v0, $zero, . + 4 + (0x115 << 2)
    ctx->pc = 0x10C5D4u;
    {
        const bool branch_taken_0x10c5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c5d4) {
            ctx->pc = 0x10C5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C5D4u;
            // 0x10c5d8: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA2Cu;
            goto label_10ca2c;
        }
    }
    ctx->pc = 0x10C5DCu;
    // 0x10c5dc: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x10c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x10c5e0: 0x54400112  bnel        $v0, $zero, . + 4 + (0x112 << 2)
    ctx->pc = 0x10C5E0u;
    {
        const bool branch_taken_0x10c5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c5e0) {
            ctx->pc = 0x10C5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C5E0u;
            // 0x10c5e4: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA2Cu;
            goto label_10ca2c;
        }
    }
    ctx->pc = 0x10C5E8u;
    // 0x10c5e8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x10c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x10c5ec: 0x5440010f  bnel        $v0, $zero, . + 4 + (0x10F << 2)
    ctx->pc = 0x10C5ECu;
    {
        const bool branch_taken_0x10c5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c5ec) {
            ctx->pc = 0x10C5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C5ECu;
            // 0x10c5f0: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA2Cu;
            goto label_10ca2c;
        }
    }
    ctx->pc = 0x10C5F4u;
    // 0x10c5f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10c5f8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x10c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x10c5fc: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x10c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x10c600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10c604: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x10c604u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c608: 0x12800105  beqz        $s4, . + 4 + (0x105 << 2)
    ctx->pc = 0x10C608u;
    {
        const bool branch_taken_0x10c608 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C608u;
        // 0x10c60c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c608) {
            ctx->pc = 0x10CA20u;
            goto label_10ca20;
        }
    }
    ctx->pc = 0x10C610u;
    // 0x10c610: 0x8e950ff8  lw          $s5, 0xFF8($s4)
    ctx->pc = 0x10c610u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4088)));
    // 0x10c614: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x10c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x10c618: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10c618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10c61c: 0x10440102  beq         $v0, $a0, . + 4 + (0x102 << 2)
    ctx->pc = 0x10C61Cu;
    {
        const bool branch_taken_0x10c61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x10C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C61Cu;
        // 0x10c620: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c61c) {
            ctx->pc = 0x10CA28u;
            goto label_10ca28;
        }
    }
    ctx->pc = 0x10C624u;
    // 0x10c624: 0xc043e1e  jal         func_10F878
    ctx->pc = 0x10C624u;
    SET_GPR_U32(ctx, 31, 0x10C62Cu);
    ctx->pc = 0x10C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C624u;
    // 0x10c628: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F878u, 0x10C624u, 0x10C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C62Cu;
label_10c62c:
    // 0x10c62c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x10c62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x10c630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10c630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c634: 0x2c560001  sltiu       $s6, $v0, 0x1
    ctx->pc = 0x10c634u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10c638: 0xc0952de  jal         func_254B78
    ctx->pc = 0x10C638u;
    SET_GPR_U32(ctx, 31, 0x10C640u);
    ctx->pc = 0x10C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C638u;
    // 0x10c63c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B78u, 0x10C638u, 0x10C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C640u;
label_10c640:
    // 0x10c640: 0x52c00004  beql        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C640u;
    {
        const bool branch_taken_0x10c640 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c640) {
            ctx->pc = 0x10C644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C640u;
            // 0x10c644: 0x8e5000b0  lw          $s0, 0xB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C654u;
            goto label_10c654;
        }
    }
    ctx->pc = 0x10C648u;
    // 0x10c648: 0x144000f6  bnez        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x10C648u;
    {
        const bool branch_taken_0x10c648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C648u;
        // 0x10c64c: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c648) {
            ctx->pc = 0x10CA24u;
            goto label_10ca24;
        }
    }
    ctx->pc = 0x10C650u;
    // 0x10c650: 0x8e5000b0  lw          $s0, 0xB0($s2)
    ctx->pc = 0x10c650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_10c654:
    // 0x10c654: 0x241e0009  addiu       $fp, $zero, 0x9
    ctx->pc = 0x10c654u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10c658: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x10c658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x10c65c: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x10C65Cu;
    {
        const bool branch_taken_0x10c65c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C65Cu;
        // 0x10c660: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c65c) {
            ctx->pc = 0x10C6D4u;
            goto label_10c6d4;
        }
    }
    ctx->pc = 0x10C664u;
    // 0x10c664: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10c664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10c668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c66c: 0x2451b060  addiu       $s1, $v0, -0x4FA0
    ctx->pc = 0x10c66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x10c670: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10c670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c674: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x10C674u;
    SET_GPR_U32(ctx, 31, 0x10C67Cu);
    ctx->pc = 0x10C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C674u;
    // 0x10c678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x10C674u, 0x10C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C67Cu;
label_10c67c:
    // 0x10c67c: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x10C67Cu;
    {
        const bool branch_taken_0x10c67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C67Cu;
        // 0x10c680: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c67c) {
            ctx->pc = 0x10CA20u;
            goto label_10ca20;
        }
    }
    ctx->pc = 0x10C684u;
    // 0x10c684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c68c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10c68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c690: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x10C690u;
    SET_GPR_U32(ctx, 31, 0x10C698u);
    ctx->pc = 0x10C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C690u;
    // 0x10c694: 0x24478738  addiu       $a3, $v0, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x10C690u, 0x10C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C698u;
label_10c698:
    // 0x10c698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c69c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10C69Cu;
    {
        const bool branch_taken_0x10c69c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c69c) {
            ctx->pc = 0x10C6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C69Cu;
            // 0x10c6a0: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C6D8u;
            goto label_10c6d8;
        }
    }
    ctx->pc = 0x10C6A4u;
    // 0x10c6a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6ac: 0x8e1e0004  lw          $fp, 0x4($s0)
    ctx->pc = 0x10c6acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10c6b0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x10c6b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x10c6b4: 0x8e130018  lw          $s3, 0x18($s0)
    ctx->pc = 0x10c6b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10c6b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10c6bc: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x10C6BCu;
    SET_GPR_U32(ctx, 31, 0x10C6C4u);
    ctx->pc = 0x10C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C6BCu;
    // 0x10c6c0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x10C6BCu, 0x10C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C6C4u;
label_10c6c4:
    // 0x10c6c4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10c6c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6cc: 0xc042128  jal         func_1084A0
    ctx->pc = 0x10C6CCu;
    SET_GPR_U32(ctx, 31, 0x10C6D4u);
    ctx->pc = 0x10C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C6CCu;
    // 0x10c6d0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x10C6CCu, 0x10C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C6D4u;
label_10c6d4:
    // 0x10c6d4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x10c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_10c6d8:
    // 0x10c6d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10C6D8u;
    {
        const bool branch_taken_0x10c6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6D8u;
        // 0x10c6dc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6d8) {
            ctx->pc = 0x10C70Cu;
            goto label_10c70c;
        }
    }
    ctx->pc = 0x10C6E0u;
    // 0x10c6e0: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x10c6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10c6e4: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x10c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x10c6e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10c6ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10c6f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c6f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C6F4u;
    {
        const bool branch_taken_0x10c6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6F4u;
        // 0x10c6f8: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6f4) {
            ctx->pc = 0x10C70Cu;
            goto label_10c70c;
        }
    }
    ctx->pc = 0x10C6FCu;
    // 0x10c6fc: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x10c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x10c700: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10c700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10c704: 0x104400c7  beq         $v0, $a0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x10C704u;
    {
        const bool branch_taken_0x10c704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x10C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C704u;
        // 0x10c708: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c704) {
            ctx->pc = 0x10CA24u;
            goto label_10ca24;
        }
    }
    ctx->pc = 0x10C70Cu;
label_10c70c:
    // 0x10c70c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c710: 0xc04446a  jal         func_1111A8
    ctx->pc = 0x10C710u;
    SET_GPR_U32(ctx, 31, 0x10C718u);
    ctx->pc = 0x10C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C710u;
    // 0x10c714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1111A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1111A8u, 0x10C710u, 0x10C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C718u;
label_10c718:
    // 0x10c718: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x10C718u;
    {
        const bool branch_taken_0x10c718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C718u;
        // 0x10c71c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c718) {
            ctx->pc = 0x10CA20u;
            goto label_10ca20;
        }
    }
    ctx->pc = 0x10C720u;
    // 0x10c720: 0xc044234  jal         func_1108D0
    ctx->pc = 0x10C720u;
    SET_GPR_U32(ctx, 31, 0x10C728u);
    ctx->pc = 0x10C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C720u;
    // 0x10c724: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x10C720u, 0x10C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C728u;
label_10c728:
    // 0x10c728: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x10c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x10c72c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x10c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x10c730: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x10c730u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10c734: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x10c734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x10c738: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C738u;
    {
        const bool branch_taken_0x10c738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C738u;
        // 0x10c73c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c738) {
            ctx->pc = 0x10C74Cu;
            goto label_10c74c;
        }
    }
    ctx->pc = 0x10C740u;
    // 0x10c740: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x10c740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x10c744: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C744u;
    {
        const bool branch_taken_0x10c744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c744) {
            ctx->pc = 0x10C750u;
            goto label_10c750;
        }
    }
    ctx->pc = 0x10C74Cu;
label_10c74c:
    // 0x10c74c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x10c74cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c750:
    // 0x10c750: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C750u;
    {
        const bool branch_taken_0x10c750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c750) {
            ctx->pc = 0x10C768u;
            goto label_10c768;
        }
    }
    ctx->pc = 0x10C758u;
    // 0x10c758: 0x12e00013  beqz        $s7, . + 4 + (0x13 << 2)
    ctx->pc = 0x10C758u;
    {
        const bool branch_taken_0x10c758 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C758u;
        // 0x10c75c: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c758) {
            ctx->pc = 0x10C7A8u;
            goto label_10c7a8;
        }
    }
    ctx->pc = 0x10C760u;
    // 0x10c760: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x10C760u;
    {
        const bool branch_taken_0x10c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C760u;
        // 0x10c764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c760) {
            ctx->pc = 0x10C930u;
            goto label_10c930;
        }
    }
    ctx->pc = 0x10C768u;
label_10c768:
    // 0x10c768: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x10C768u;
    {
        const bool branch_taken_0x10c768 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C768u;
        // 0x10c76c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c768) {
            ctx->pc = 0x10C7A8u;
            goto label_10c7a8;
        }
    }
    ctx->pc = 0x10C770u;
    // 0x10c770: 0x13c2000d  beq         $fp, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10C770u;
    {
        const bool branch_taken_0x10c770 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x10c770) {
            ctx->pc = 0x10C7A8u;
            goto label_10c7a8;
        }
    }
    ctx->pc = 0x10C778u;
    // 0x10c778: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x10C778u;
    {
        const bool branch_taken_0x10c778 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C778u;
        // 0x10c77c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c778) {
            ctx->pc = 0x10C7A8u;
            goto label_10c7a8;
        }
    }
    ctx->pc = 0x10C780u;
    // 0x10c780: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x10c780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x10c784: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x10c784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x10c788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10c78c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c790: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C790u;
    {
        const bool branch_taken_0x10c790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c790) {
            ctx->pc = 0x10C7A8u;
            goto label_10c7a8;
        }
    }
    ctx->pc = 0x10C798u;
    // 0x10c798: 0xc0952de  jal         func_254B78
    ctx->pc = 0x10C798u;
    SET_GPR_U32(ctx, 31, 0x10C7A0u);
    ctx->pc = 0x10C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C798u;
    // 0x10c79c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B78u, 0x10C798u, 0x10C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C7A0u;
label_10c7a0:
    // 0x10c7a0: 0x1040ff76  beqz        $v0, . + 4 + (-0x8A << 2)
    ctx->pc = 0x10C7A0u;
    {
        const bool branch_taken_0x10c7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7A0u;
        // 0x10c7a4: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7a0) {
            ctx->pc = 0x10C57Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c57c;
        }
    }
    ctx->pc = 0x10C7A8u;
label_10c7a8:
    // 0x10c7a8: 0xc0443e2  jal         func_110F88
    ctx->pc = 0x10C7A8u;
    SET_GPR_U32(ctx, 31, 0x10C7B0u);
    ctx->pc = 0x10C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C7A8u;
    // 0x10c7ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F88u, 0x10C7A8u, 0x10C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C7B0u;
label_10c7b0:
    // 0x10c7b0: 0x5040009c  beql        $v0, $zero, . + 4 + (0x9C << 2)
    ctx->pc = 0x10C7B0u;
    {
        const bool branch_taken_0x10c7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c7b0) {
            ctx->pc = 0x10C7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C7B0u;
            // 0x10c7b4: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA24u;
            goto label_10ca24;
        }
    }
    ctx->pc = 0x10C7B8u;
    // 0x10c7b8: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x10c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x10c7bc: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
    ctx->pc = 0x10C7BCu;
    {
        const bool branch_taken_0x10c7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7BCu;
        // 0x10c7c0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7bc) {
            ctx->pc = 0x10C578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c578;
        }
    }
    ctx->pc = 0x10C7C4u;
    // 0x10c7c4: 0x13c20018  beq         $fp, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10C7C4u;
    {
        const bool branch_taken_0x10c7c4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7C4u;
        // 0x10c7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7c4) {
            ctx->pc = 0x10C828u;
            goto label_10c828;
        }
    }
    ctx->pc = 0x10C7CCu;
    // 0x10c7cc: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x10C7CCu;
    {
        const bool branch_taken_0x10c7cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7CCu;
        // 0x10c7d0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7cc) {
            ctx->pc = 0x10C824u;
            goto label_10c824;
        }
    }
    ctx->pc = 0x10C7D4u;
    // 0x10c7d4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x10c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x10c7d8: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x10c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x10c7dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c7e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c7e4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10C7E4u;
    {
        const bool branch_taken_0x10c7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7E4u;
        // 0x10c7e8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7e4) {
            ctx->pc = 0x10C824u;
            goto label_10c824;
        }
    }
    ctx->pc = 0x10C7ECu;
    // 0x10c7ec: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x10c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x10c7f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c7f4: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x10c7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10c7f8: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C7F8u;
    {
        const bool branch_taken_0x10c7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7F8u;
        // 0x10c7fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7f8) {
            ctx->pc = 0x10C808u;
            goto label_10c808;
        }
    }
    ctx->pc = 0x10C800u;
    // 0x10c800: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C800u;
    {
        const bool branch_taken_0x10c800 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10c800) {
            ctx->pc = 0x10C80Cu;
            goto label_10c80c;
        }
    }
    ctx->pc = 0x10C808u;
label_10c808:
    // 0x10c808: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10c808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c80c:
    // 0x10c80c: 0xc0952de  jal         func_254B78
    ctx->pc = 0x10C80Cu;
    SET_GPR_U32(ctx, 31, 0x10C814u);
    ctx->pc = 0x10C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C80Cu;
    // 0x10c810: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B78u, 0x10C80Cu, 0x10C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C814u;
label_10c814:
    // 0x10c814: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C814u;
    {
        const bool branch_taken_0x10c814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C814u;
        // 0x10c818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c814) {
            ctx->pc = 0x10C828u;
            goto label_10c828;
        }
    }
    ctx->pc = 0x10C81Cu;
    // 0x10c81c: 0x1040ff57  beqz        $v0, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x10C81Cu;
    {
        const bool branch_taken_0x10c81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C81Cu;
        // 0x10c820: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c81c) {
            ctx->pc = 0x10C57Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c57c;
        }
    }
    ctx->pc = 0x10C824u;
label_10c824:
    // 0x10c824: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10c828:
    // 0x10c828: 0xc043996  jal         func_10E658
    ctx->pc = 0x10C828u;
    SET_GPR_U32(ctx, 31, 0x10C830u);
    ctx->pc = 0x10C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C828u;
    // 0x10c82c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x10C828u, 0x10C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C830u;
label_10c830:
    // 0x10c830: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C830u;
    {
        const bool branch_taken_0x10c830 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C830u;
        // 0x10c834: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c830) {
            ctx->pc = 0x10C844u;
            goto label_10c844;
        }
    }
    ctx->pc = 0x10C838u;
    // 0x10c838: 0xc09526c  jal         func_2549B0
    ctx->pc = 0x10C838u;
    SET_GPR_U32(ctx, 31, 0x10C840u);
    ctx->pc = 0x10C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C838u;
    // 0x10c83c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2549B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2549B0u, 0x10C838u, 0x10C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C840u;
label_10c840:
    // 0x10c840: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x10c840u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c844:
    // 0x10c844: 0x16600013  bnez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x10C844u;
    {
        const bool branch_taken_0x10c844 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C844u;
        // 0x10c848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c844) {
            ctx->pc = 0x10C894u;
            goto label_10c894;
        }
    }
    ctx->pc = 0x10C84Cu;
    // 0x10c84c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x10c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x10c850: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10c850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c854: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x10c854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x10c858: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C858u;
    {
        const bool branch_taken_0x10c858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C858u;
        // 0x10c85c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c858) {
            ctx->pc = 0x10C878u;
            goto label_10c878;
        }
    }
    ctx->pc = 0x10C860u;
    // 0x10c860: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x10c860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x10c864: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C864u;
    {
        const bool branch_taken_0x10c864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c864) {
            ctx->pc = 0x10C868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C864u;
            // 0x10c868: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C87Cu;
            goto label_10c87c;
        }
    }
    ctx->pc = 0x10C86Cu;
    // 0x10c86c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x10c86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x10c870: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C870u;
    {
        const bool branch_taken_0x10c870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c870) {
            ctx->pc = 0x10C87Cu;
            goto label_10c87c;
        }
    }
    ctx->pc = 0x10C878u;
label_10c878:
    // 0x10c878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10c878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c87c:
    // 0x10c87c: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C87Cu;
    {
        const bool branch_taken_0x10c87c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c87c) {
            ctx->pc = 0x10C880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C87Cu;
            // 0x10c880: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C894u;
            goto label_10c894;
        }
    }
    ctx->pc = 0x10C884u;
    // 0x10c884: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x10c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x10c888: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x10c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x10c88c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10C88Cu;
    {
        const bool branch_taken_0x10c88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c88c) {
            ctx->pc = 0x10C890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C88Cu;
            // 0x10c890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C894u;
            goto label_10c894;
        }
    }
    ctx->pc = 0x10C894u;
label_10c894:
    // 0x10c894: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C894u;
    {
        const bool branch_taken_0x10c894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c894) {
            ctx->pc = 0x10C898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C894u;
            // 0x10c898: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C8A8u;
            goto label_10c8a8;
        }
    }
    ctx->pc = 0x10C89Cu;
    // 0x10c89c: 0x16c0ff37  bnez        $s6, . + 4 + (-0xC9 << 2)
    ctx->pc = 0x10C89Cu;
    {
        const bool branch_taken_0x10c89c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C89Cu;
        // 0x10c8a0: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c89c) {
            ctx->pc = 0x10C57Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c57c;
        }
    }
    ctx->pc = 0x10C8A4u;
    // 0x10c8a4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_10c8a8:
    // 0x10c8a8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x10c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x10c8ac: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x10c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x10c8b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10c8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10c8b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c8bc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C8BCu;
    {
        const bool branch_taken_0x10c8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c8bc) {
            ctx->pc = 0x10C8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C8BCu;
            // 0x10c8c0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C8CCu;
            goto label_10c8cc;
        }
    }
    ctx->pc = 0x10C8C4u;
    // 0x10c8c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C8C4u;
    {
        const bool branch_taken_0x10c8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8C4u;
        // 0x10c8c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8c4) {
            ctx->pc = 0x10C8D4u;
            goto label_10c8d4;
        }
    }
    ctx->pc = 0x10C8CCu;
label_10c8cc:
    // 0x10c8cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c8d0: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x10c8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_10c8d4:
    // 0x10c8d4: 0x12c0002f  beqz        $s6, . + 4 + (0x2F << 2)
    ctx->pc = 0x10C8D4u;
    {
        const bool branch_taken_0x10c8d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8D4u;
        // 0x10c8d8: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8d4) {
            ctx->pc = 0x10C994u;
            goto label_10c994;
        }
    }
    ctx->pc = 0x10C8DCu;
    // 0x10c8dc: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x10C8DCu;
    {
        const bool branch_taken_0x10c8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c8dc) {
            ctx->pc = 0x10C994u;
            goto label_10c994;
        }
    }
    ctx->pc = 0x10C8E4u;
    // 0x10c8e4: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x10C8E4u;
    {
        const bool branch_taken_0x10c8e4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8E4u;
        // 0x10c8e8: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8e4) {
            ctx->pc = 0x10C93Cu;
            goto label_10c93c;
        }
    }
    ctx->pc = 0x10C8ECu;
    // 0x10c8ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10c8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c8f0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x10C8F0u;
    SET_GPR_U32(ctx, 31, 0x10C8F8u);
    ctx->pc = 0x10C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C8F0u;
    // 0x10c8f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x10C8F0u, 0x10C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C8F8u;
label_10c8f8:
    // 0x10c8f8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x10c8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10c8fc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x10c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10c900: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x10c900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10c904: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x10c904u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x10c908: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x10c908u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x10c90c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x10c90cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x10c910: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x10c910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x10c914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c918: 0x0  nop
    ctx->pc = 0x10c918u;
    // NOP
    // 0x10c91c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10c91cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c920: 0x0  nop
    ctx->pc = 0x10c920u;
    // NOP
    // 0x10c924: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x10C924u;
    {
        const bool branch_taken_0x10c924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C924u;
        // 0x10c928: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c924) {
            ctx->pc = 0x10C994u;
            goto label_10c994;
        }
    }
    ctx->pc = 0x10C92Cu;
    // 0x10c92c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c930:
    // 0x10c930: 0x24a5a080  addiu       $a1, $a1, -0x5F80
    ctx->pc = 0x10c930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942848));
    // 0x10c934: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x10C934u;
    {
        const bool branch_taken_0x10c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C934u;
        // 0x10c938: 0xaca20428  sw          $v0, 0x428($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c934) {
            ctx->pc = 0x10CA40u;
            goto label_10ca40;
        }
    }
    ctx->pc = 0x10C93Cu;
label_10c93c:
    // 0x10c93c: 0xc061fbe  jal         func_187EF8
    ctx->pc = 0x10C93Cu;
    SET_GPR_U32(ctx, 31, 0x10C944u);
    ctx->pc = 0x10C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C93Cu;
    // 0x10c940: 0x8e840fe4  lw          $a0, 0xFE4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EF8u, 0x10C93Cu, 0x10C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C944u;
label_10c944:
    // 0x10c944: 0xc0679e4  jal         func_19E790
    ctx->pc = 0x10C944u;
    SET_GPR_U32(ctx, 31, 0x10C94Cu);
    ctx->pc = 0x10C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C944u;
    // 0x10c948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E790u, 0x10C944u, 0x10C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C94Cu;
label_10c94c:
    // 0x10c94c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C94Cu;
    {
        const bool branch_taken_0x10c94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C94Cu;
        // 0x10c950: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c94c) {
            ctx->pc = 0x10C994u;
            goto label_10c994;
        }
    }
    ctx->pc = 0x10C954u;
    // 0x10c954: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10c954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c958: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x10C958u;
    SET_GPR_U32(ctx, 31, 0x10C960u);
    ctx->pc = 0x10C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C958u;
    // 0x10c95c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x10C958u, 0x10C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C960u;
label_10c960:
    // 0x10c960: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x10c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10c964: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x10c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10c968: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x10c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10c96c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x10c96cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x10c970: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x10c970u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x10c974: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x10c974u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x10c978: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x10c978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x10c97c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c980: 0x0  nop
    ctx->pc = 0x10c980u;
    // NOP
    // 0x10c984: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10c984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c988: 0x0  nop
    ctx->pc = 0x10c988u;
    // NOP
    // 0x10c98c: 0x4501fefb  bc1t        . + 4 + (-0x105 << 2)
    ctx->pc = 0x10C98Cu;
    {
        const bool branch_taken_0x10c98c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C98Cu;
        // 0x10c990: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c98c) {
            ctx->pc = 0x10C57Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c57c;
        }
    }
    ctx->pc = 0x10C994u;
label_10c994:
    // 0x10c994: 0x17c0001f  bnez        $fp, . + 4 + (0x1F << 2)
    ctx->pc = 0x10C994u;
    {
        const bool branch_taken_0x10c994 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C994u;
        // 0x10c998: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c994) {
            ctx->pc = 0x10CA14u;
            goto label_10ca14;
        }
    }
    ctx->pc = 0x10C99Cu;
    // 0x10c99c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x10c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x10c9a0: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x10C9A0u;
    {
        const bool branch_taken_0x10c9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c9a0) {
            ctx->pc = 0x10C9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C9A0u;
            // 0x10c9a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA18u;
            goto label_10ca18;
        }
    }
    ctx->pc = 0x10C9A8u;
    // 0x10c9a8: 0xc044262  jal         func_110988
    ctx->pc = 0x10C9A8u;
    SET_GPR_U32(ctx, 31, 0x10C9B0u);
    ctx->pc = 0x10C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9A8u;
    // 0x10c9ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110988u, 0x10C9A8u, 0x10C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9B0u;
label_10c9b0:
    // 0x10c9b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c9b4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10c9b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10c9b8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x10c9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x10c9bc: 0xc04366e  jal         func_10D9B8
    ctx->pc = 0x10C9BCu;
    SET_GPR_U32(ctx, 31, 0x10C9C4u);
    ctx->pc = 0x10C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9BCu;
    // 0x10c9c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D9B8u, 0x10C9BCu, 0x10C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9C4u;
label_10c9c4:
    // 0x10c9c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10C9C4u;
    {
        const bool branch_taken_0x10c9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9C4u;
        // 0x10c9c8: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9c4) {
            ctx->pc = 0x10CA18u;
            goto label_10ca18;
        }
    }
    ctx->pc = 0x10C9CCu;
    // 0x10c9cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10c9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9d0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x10C9D0u;
    SET_GPR_U32(ctx, 31, 0x10C9D8u);
    ctx->pc = 0x10C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9D0u;
    // 0x10c9d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x10C9D0u, 0x10C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9D8u;
label_10c9d8:
    // 0x10c9d8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x10c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10c9dc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x10c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10c9e0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x10c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10c9e4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x10c9e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x10c9e8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x10c9e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x10c9ec: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x10c9ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x10c9f0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x10c9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x10c9f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c9f8: 0x0  nop
    ctx->pc = 0x10c9f8u;
    // NOP
    // 0x10c9fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10c9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ca00: 0x0  nop
    ctx->pc = 0x10ca00u;
    // NOP
    // 0x10ca04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x10CA04u;
    {
        const bool branch_taken_0x10ca04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ca04) {
            ctx->pc = 0x10CA18u;
            goto label_10ca18;
        }
    }
    ctx->pc = 0x10CA0Cu;
    // 0x10ca0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10CA0Cu;
    {
        const bool branch_taken_0x10ca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA0Cu;
        // 0x10ca10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca0c) {
            ctx->pc = 0x10CA18u;
            goto label_10ca18;
        }
    }
    ctx->pc = 0x10CA14u;
label_10ca14:
    // 0x10ca14: 0x13800a  movz        $s0, $zero, $s3
    ctx->pc = 0x10ca14u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_10ca18:
    // 0x10ca18: 0x1600fed8  bnez        $s0, . + 4 + (-0x128 << 2)
    ctx->pc = 0x10CA18u;
    {
        const bool branch_taken_0x10ca18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA18u;
        // 0x10ca1c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca18) {
            ctx->pc = 0x10C57Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c57c;
        }
    }
    ctx->pc = 0x10CA20u;
label_10ca20:
    // 0x10ca20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x10ca20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_10ca24:
    // 0x10ca24: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x10ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10ca28:
    // 0x10ca28: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x10ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10ca2c:
    // 0x10ca2c: 0x90a200cc  lbu         $v0, 0xCC($a1)
    ctx->pc = 0x10ca2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x10ca30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x10ca30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10ca34: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x10ca34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10ca38: 0x1440fedb  bnez        $v0, . + 4 + (-0x125 << 2)
    ctx->pc = 0x10CA38u;
    {
        const bool branch_taken_0x10ca38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA38u;
        // 0x10ca3c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca38) {
            ctx->pc = 0x10C5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c5a8;
        }
    }
    ctx->pc = 0x10CA40u;
label_10ca40:
    // 0x10ca40: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10ca40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10ca44:
    // 0x10ca44: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x10ca44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_10ca48:
    // 0x10ca48: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10ca48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ca4c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x10ca4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10ca50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10ca50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ca54: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x10ca54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10ca58: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x10ca58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ca5c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x10ca5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10ca60: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x10ca60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10ca64: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x10ca64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10ca68: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA68u;
        // 0x10ca6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CA70u;
}
