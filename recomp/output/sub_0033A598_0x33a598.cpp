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

// Function: sub_0033A598
// Address: 0x33a598 - 0x33a7e8
void sub_0033A598_0x33a598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A598_0x33a598");
#endif

    switch (ctx->pc) {
        case 0x33a5b8u: goto label_33a5b8;
        case 0x33a6c8u: goto label_33a6c8;
        case 0x33a748u: goto label_33a748;
        default: break;
    }

    ctx->pc = 0x33a598u;

    // 0x33a598: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x33a598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x33a59c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33a59cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a5a0: 0x10e0008e  beqz        $a3, . + 4 + (0x8E << 2)
    ctx->pc = 0x33A5A0u;
    {
        const bool branch_taken_0x33a5a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5A0u;
        // 0x33a5a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5a0) {
            ctx->pc = 0x33A7DCu;
            goto label_33a7dc;
        }
    }
    ctx->pc = 0x33A5A8u;
    // 0x33a5a8: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x33a5a8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x33a5ac: 0x358cfffc  ori         $t4, $t4, 0xFFFC
    ctx->pc = 0x33a5acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65532);
    // 0x33a5b0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x33a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33a5b4: 0x0  nop
    ctx->pc = 0x33a5b4u;
    // NOP
label_33a5b8:
    // 0x33a5b8: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x33a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x33a5bc: 0x22602  srl         $a0, $v0, 24
    ctx->pc = 0x33a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x33a5c0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x33a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x33a5c4: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x33A5C4u;
    {
        const bool branch_taken_0x33a5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5C4u;
        // 0x33a5c8: 0x304900ff  andi        $t1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5c4) {
            ctx->pc = 0x33A668u;
            goto label_33a668;
        }
    }
    ctx->pc = 0x33A5CCu;
    // 0x33a5cc: 0x2882006d  slti        $v0, $a0, 0x6D
    ctx->pc = 0x33a5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)109) ? 1 : 0);
    // 0x33a5d0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33A5D0u;
    {
        const bool branch_taken_0x33a5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5D0u;
        // 0x33a5d4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5d0) {
            ctx->pc = 0x33A614u;
            goto label_33a614;
        }
    }
    ctx->pc = 0x33A5D8u;
    // 0x33a5d8: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x33A5D8u;
    {
        const bool branch_taken_0x33a5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5D8u;
        // 0x33a5dc: 0x28820021  slti        $v0, $a0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5d8) {
            ctx->pc = 0x33A658u;
            goto label_33a658;
        }
    }
    ctx->pc = 0x33A5E0u;
    // 0x33a5e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A5E0u;
    {
        const bool branch_taken_0x33a5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5E0u;
        // 0x33a5e4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5e0) {
            ctx->pc = 0x33A5F8u;
            goto label_33a5f8;
        }
    }
    ctx->pc = 0x33A5E8u;
    // 0x33a5e8: 0x50820075  beql        $a0, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x33A5E8u;
    {
        const bool branch_taken_0x33a5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a5e8) {
            ctx->pc = 0x33A5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A5E8u;
            // 0x33a5ec: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A7C0u;
            goto label_33a7c0;
        }
    }
    ctx->pc = 0x33A5F0u;
    // 0x33a5f0: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x33A5F0u;
    {
        const bool branch_taken_0x33a5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a5f0) {
            ctx->pc = 0x33A7D4u;
            goto label_33a7d4;
        }
    }
    ctx->pc = 0x33A5F8u;
label_33a5f8:
    // 0x33a5f8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x33a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33a5fc: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x33A5FCu;
    {
        const bool branch_taken_0x33a5fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5FCu;
        // 0x33a600: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5fc) {
            ctx->pc = 0x33A660u;
            goto label_33a660;
        }
    }
    ctx->pc = 0x33A604u;
    // 0x33a604: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x33A604u;
    {
        const bool branch_taken_0x33a604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A604u;
        // 0x33a608: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a604) {
            ctx->pc = 0x33A67Cu;
            goto label_33a67c;
        }
    }
    ctx->pc = 0x33A60Cu;
    // 0x33a60c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x33A60Cu;
    {
        const bool branch_taken_0x33a60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a60c) {
            ctx->pc = 0x33A7D4u;
            goto label_33a7d4;
        }
    }
    ctx->pc = 0x33A614u;
label_33a614:
    // 0x33a614: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x33a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x33a618: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x33A618u;
    {
        const bool branch_taken_0x33a618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A618u;
        // 0x33a61c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a618) {
            ctx->pc = 0x33A670u;
            goto label_33a670;
        }
    }
    ctx->pc = 0x33A620u;
    // 0x33a620: 0x28820070  slti        $v0, $a0, 0x70
    ctx->pc = 0x33a620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x33a624: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A624u;
    {
        const bool branch_taken_0x33a624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A624u;
        // 0x33a628: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a624) {
            ctx->pc = 0x33A63Cu;
            goto label_33a63c;
        }
    }
    ctx->pc = 0x33A62Cu;
    // 0x33a62c: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33A62Cu;
    {
        const bool branch_taken_0x33a62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A62Cu;
        // 0x33a630: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a62c) {
            ctx->pc = 0x33A698u;
            goto label_33a698;
        }
    }
    ctx->pc = 0x33A634u;
    // 0x33a634: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x33A634u;
    {
        const bool branch_taken_0x33a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a634) {
            ctx->pc = 0x33A7D4u;
            goto label_33a7d4;
        }
    }
    ctx->pc = 0x33A63Cu;
label_33a63c:
    // 0x33a63c: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x33a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x33a640: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x33A640u;
    {
        const bool branch_taken_0x33a640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A640u;
        // 0x33a644: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a640) {
            ctx->pc = 0x33A6A4u;
            goto label_33a6a4;
        }
    }
    ctx->pc = 0x33A648u;
    // 0x33a648: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x33A648u;
    {
        const bool branch_taken_0x33a648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a648) {
            ctx->pc = 0x33A728u;
            goto label_33a728;
        }
    }
    ctx->pc = 0x33A650u;
    // 0x33a650: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x33A650u;
    {
        const bool branch_taken_0x33a650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a650) {
            ctx->pc = 0x33A7D4u;
            goto label_33a7d4;
        }
    }
    ctx->pc = 0x33A658u;
label_33a658:
    // 0x33a658: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x33A658u;
    {
        const bool branch_taken_0x33a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A658u;
        // 0x33a65c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a658) {
            ctx->pc = 0x33A7D4u;
            goto label_33a7d4;
        }
    }
    ctx->pc = 0x33A660u;
label_33a660:
    // 0x33a660: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x33A660u;
    {
        const bool branch_taken_0x33a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A660u;
        // 0x33a664: 0x25080014  addiu       $t0, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a660) {
            ctx->pc = 0x33A7D4u;
            goto label_33a7d4;
        }
    }
    ctx->pc = 0x33A668u;
label_33a668:
    // 0x33a668: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33A668u;
    {
        const bool branch_taken_0x33a668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A668u;
        // 0x33a66c: 0x91100  sll         $v0, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a668) {
            ctx->pc = 0x33A698u;
            goto label_33a698;
        }
    }
    ctx->pc = 0x33A670u;
label_33a670:
    // 0x33a670: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x33a670u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x33a674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33A674u;
    {
        const bool branch_taken_0x33a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A674u;
        // 0x33a678: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a674) {
            ctx->pc = 0x33A698u;
            goto label_33a698;
        }
    }
    ctx->pc = 0x33A67Cu;
label_33a67c:
    // 0x33a67c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a680: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x33a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x33a684: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x33a684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x33a688: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x33a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x33a68c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x33a68cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33a690: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x33a690u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x33a694: 0x304207fc  andi        $v0, $v0, 0x7FC
    ctx->pc = 0x33a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2044);
label_33a698:
    // 0x33a698: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33a698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x33a69c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x33A69Cu;
    {
        const bool branch_taken_0x33a69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A69Cu;
        // 0x33a6a0: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a69c) {
            ctx->pc = 0x33A7D4u;
            goto label_33a7d4;
        }
    }
    ctx->pc = 0x33A6A4u;
label_33a6a4:
    // 0x33a6a4: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x33a6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x33a6a8: 0x1120001c  beqz        $t1, . + 4 + (0x1C << 2)
    ctx->pc = 0x33A6A8u;
    {
        const bool branch_taken_0x33a6a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6A8u;
        // 0x33a6ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6a8) {
            ctx->pc = 0x33A71Cu;
            goto label_33a71c;
        }
    }
    ctx->pc = 0x33A6B0u;
    // 0x33a6b0: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x33a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x33a6b4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x33a6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x33a6b8: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x33a6b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x33a6bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33a6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33a6c0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x33a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33a6c4: 0x0  nop
    ctx->pc = 0x33a6c4u;
    // NOP
label_33a6c8:
    // 0x33a6c8: 0x50c0000f  beql        $a2, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x33A6C8u;
    {
        const bool branch_taken_0x33a6c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a6c8) {
            ctx->pc = 0x33A6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A6C8u;
            // 0x33a6cc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A708u;
            goto label_33a708;
        }
    }
    ctx->pc = 0x33A6D0u;
    // 0x33a6d0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x33a6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a6d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33a6d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33a6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33a6dc: 0x0  nop
    ctx->pc = 0x33a6dcu;
    // NOP
    // 0x33a6e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33a6e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33a6e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33a6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33a6e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33a6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33a6ec: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x33a6ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a6f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33a6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33a6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33a6f8: 0x0  nop
    ctx->pc = 0x33a6f8u;
    // NOP
    // 0x33a6fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33a6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33a700: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33a700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33a704: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x33a704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_33a708:
    // 0x33a708: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x33a708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a70c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33a70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33a710: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x33a710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x33a714: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x33A714u;
    {
        const bool branch_taken_0x33a714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A714u;
        // 0x33a718: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a714) {
            ctx->pc = 0x33A6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a6c8;
        }
    }
    ctx->pc = 0x33A71Cu;
label_33a71c:
    // 0x33a71c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x33a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x33a720: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x33A720u;
    {
        const bool branch_taken_0x33a720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A720u;
        // 0x33a724: 0x4c4024  and         $t0, $v0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a720) {
            ctx->pc = 0x33A7D4u;
            goto label_33a7d4;
        }
    }
    ctx->pc = 0x33A728u;
label_33a728:
    // 0x33a728: 0x11200021  beqz        $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x33A728u;
    {
        const bool branch_taken_0x33a728 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A728u;
        // 0x33a72c: 0x25040004  addiu       $a0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a728) {
            ctx->pc = 0x33A7B0u;
            goto label_33a7b0;
        }
    }
    ctx->pc = 0x33A730u;
    // 0x33a730: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x33a730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x33a734: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x33a734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x33a738: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33a738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33a73c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x33a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33a740: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x33a740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a744: 0x0  nop
    ctx->pc = 0x33a744u;
    // NOP
label_33a748:
    // 0x33a748: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x33A748u;
    {
        const bool branch_taken_0x33a748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a748) {
            ctx->pc = 0x33A74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A748u;
            // 0x33a74c: 0x24840006  addiu       $a0, $a0, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A7A4u;
            goto label_33a7a4;
        }
    }
    ctx->pc = 0x33A750u;
    // 0x33a750: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x33a750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a754: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x33a754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x33a758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33a758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33a75c: 0x0  nop
    ctx->pc = 0x33a75cu;
    // NOP
    // 0x33a760: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33a760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33a764: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33a764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33a768: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33a768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33a76c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x33a76cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a770: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x33a770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x33a774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33a774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33a778: 0x0  nop
    ctx->pc = 0x33a778u;
    // NOP
    // 0x33a77c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33a77cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33a780: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33a780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33a784: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x33a784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33a788: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x33a788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a78c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x33a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x33a790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33a790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33a794: 0x0  nop
    ctx->pc = 0x33a794u;
    // NOP
    // 0x33a798: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33a798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33a79c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33a79cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33a7a0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x33a7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_33a7a4:
    // 0x33a7a4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x33a7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x33a7a8: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x33A7A8u;
    {
        const bool branch_taken_0x33a7a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7A8u;
        // 0x33a7ac: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7a8) {
            ctx->pc = 0x33A748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a748;
        }
    }
    ctx->pc = 0x33A7B0u;
label_33a7b0:
    // 0x33a7b0: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x33a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x33a7b4: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x33a7b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33A7B8u;
    {
        const bool branch_taken_0x33a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7B8u;
        // 0x33a7bc: 0x4c4024  and         $t0, $v0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7b8) {
            ctx->pc = 0x33A7D4u;
            goto label_33a7d4;
        }
    }
    ctx->pc = 0x33A7C0u;
label_33a7c0:
    // 0x33a7c0: 0xea3823  subu        $a3, $a3, $t2
    ctx->pc = 0x33a7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x33a7c4: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A7C4u;
    {
        const bool branch_taken_0x33a7c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7C4u;
        // 0x33a7c8: 0x16a5821  addu        $t3, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7c4) {
            ctx->pc = 0x33A7DCu;
            goto label_33a7dc;
        }
    }
    ctx->pc = 0x33A7CCu;
    // 0x33a7cc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x33a7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x33a7d0: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x33a7d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_33a7d4:
    // 0x33a7d4: 0x54e0ff78  bnel        $a3, $zero, . + 4 + (-0x88 << 2)
    ctx->pc = 0x33A7D4u;
    {
        const bool branch_taken_0x33a7d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a7d4) {
            ctx->pc = 0x33A7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A7D4u;
            // 0x33a7d8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a5b8;
        }
    }
    ctx->pc = 0x33A7DCu;
label_33a7dc:
    // 0x33a7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x33A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A7E4u;
    // 0x33a7e4: 0x0  nop
    ctx->pc = 0x33a7e4u;
    // NOP
    ctx->pc = 0x33a7e8u;
}
