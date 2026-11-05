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

// Function: sub_0018A648
// Address: 0x18a648 - 0x18a8d0
void sub_0018A648_0x18a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A648_0x18a648");
#endif

    switch (ctx->pc) {
        case 0x18a68cu: goto label_18a68c;
        case 0x18a6f8u: goto label_18a6f8;
        case 0x18a83cu: goto label_18a83c;
        case 0x18a864u: goto label_18a864;
        case 0x18a8b4u: goto label_18a8b4;
        default: break;
    }

    ctx->pc = 0x18a648u;

    // 0x18a648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a64c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x18a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18a650: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18a650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x18a654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a658: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x18a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18a65c: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x18a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x18a660: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x18a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x18a664: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x18a664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x18a668: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18a668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a66c: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x18a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x18a670: 0x8c710150  lw          $s1, 0x150($v1)
    ctx->pc = 0x18a670u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x18a674: 0x1224008f  beq         $s1, $a0, . + 4 + (0x8F << 2)
    ctx->pc = 0x18A674u;
    {
        const bool branch_taken_0x18a674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x18A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A674u;
        // 0x18a678: 0x8c72014c  lw          $s2, 0x14C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a674) {
            ctx->pc = 0x18A8B4u;
            goto label_18a8b4;
        }
    }
    ctx->pc = 0x18A67Cu;
    // 0x18a67c: 0x5244008e  beql        $s2, $a0, . + 4 + (0x8E << 2)
    ctx->pc = 0x18A67Cu;
    {
        const bool branch_taken_0x18a67c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x18a67c) {
            ctx->pc = 0x18A680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A67Cu;
            // 0x18a680: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A8B8u;
            goto label_18a8b8;
        }
    }
    ctx->pc = 0x18A684u;
    // 0x18a684: 0xc061a26  jal         func_186898
    ctx->pc = 0x18A684u;
    SET_GPR_U32(ctx, 31, 0x18A68Cu);
    ctx->pc = 0x18A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A684u;
    // 0x18a688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x18A684u, 0x18A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A68Cu;
label_18a68c:
    // 0x18a68c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a690: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18a690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18a694: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x18a694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18a698: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A698u;
    {
        const bool branch_taken_0x18a698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A698u;
        // 0x18a69c: 0x2622ffce  addiu       $v0, $s1, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a698) {
            ctx->pc = 0x18A6B8u;
            goto label_18a6b8;
        }
    }
    ctx->pc = 0x18A6A0u;
    // 0x18a6a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a6a4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x18a6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18a6a8: 0x8c430418  lw          $v1, 0x418($v0)
    ctx->pc = 0x18a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1048)));
    // 0x18a6ac: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x18A6ACu;
    {
        const bool branch_taken_0x18a6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x18a6ac) {
            ctx->pc = 0x18A6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A6ACu;
            // 0x18a6b0: 0xae000144  sw          $zero, 0x144($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A6B4u;
            goto label_18a6b4;
        }
    }
    ctx->pc = 0x18A6B4u;
label_18a6b4:
    // 0x18a6b4: 0x2622ffce  addiu       $v0, $s1, -0x32
    ctx->pc = 0x18a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967246));
label_18a6b8:
    // 0x18a6b8: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x18a6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18a6bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A6BCu;
    {
        const bool branch_taken_0x18a6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a6bc) {
            ctx->pc = 0x18A6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A6BCu;
            // 0x18a6c0: 0x8e020144  lw          $v0, 0x144($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A6D8u;
            goto label_18a6d8;
        }
    }
    ctx->pc = 0x18A6C4u;
    // 0x18a6c4: 0x2642ffcf  addiu       $v0, $s2, -0x31
    ctx->pc = 0x18a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967247));
    // 0x18a6c8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x18a6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x18a6cc: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x18A6CCu;
    {
        const bool branch_taken_0x18a6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a6cc) {
            ctx->pc = 0x18A8A4u;
            goto label_18a8a4;
        }
    }
    ctx->pc = 0x18A6D4u;
    // 0x18a6d4: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x18a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_18a6d8:
    // 0x18a6d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18A6D8u;
    {
        const bool branch_taken_0x18a6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6D8u;
        // 0x18a6dc: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6d8) {
            ctx->pc = 0x18A70Cu;
            goto label_18a70c;
        }
    }
    ctx->pc = 0x18A6E0u;
    // 0x18a6e0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A6E0u;
    {
        const bool branch_taken_0x18a6e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x18A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6E0u;
        // 0x18a6e4: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6e0) {
            ctx->pc = 0x18A700u;
            goto label_18a700;
        }
    }
    ctx->pc = 0x18A6E8u;
    // 0x18a6e8: 0x3c05ffdb  lui         $a1, 0xFFDB
    ctx->pc = 0x18a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65499 << 16));
    // 0x18a6ec: 0x34a5fdef  ori         $a1, $a1, 0xFDEF
    ctx->pc = 0x18a6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65007);
    // 0x18a6f0: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x18A6F0u;
    SET_GPR_U32(ctx, 31, 0x18A6F8u);
    ctx->pc = 0x18A6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A6F0u;
    // 0x18a6f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x18A6F0u, 0x18A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6F8u;
label_18a6f8:
    // 0x18a6f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18A6F8u;
    {
        const bool branch_taken_0x18a6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a6f8) {
            ctx->pc = 0x18A6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A6F8u;
            // 0x18a6fc: 0xae000144  sw          $zero, 0x144($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A700u;
            goto label_18a700;
        }
    }
    ctx->pc = 0x18A700u;
label_18a700:
    // 0x18a700: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x18a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x18a704: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A704u;
    {
        const bool branch_taken_0x18a704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a704) {
            ctx->pc = 0x18A708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A704u;
            // 0x18a708: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A724u;
            goto label_18a724;
        }
    }
    ctx->pc = 0x18A70Cu;
label_18a70c:
    // 0x18a70c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x18a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x18a710: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A710u;
    {
        const bool branch_taken_0x18a710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a710) {
            ctx->pc = 0x18A714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A710u;
            // 0x18a714: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A724u;
            goto label_18a724;
        }
    }
    ctx->pc = 0x18A718u;
    // 0x18a718: 0x1642001f  bne         $s2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x18A718u;
    {
        const bool branch_taken_0x18a718 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A718u;
        // 0x18a71c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a718) {
            ctx->pc = 0x18A798u;
            goto label_18a798;
        }
    }
    ctx->pc = 0x18A720u;
    // 0x18a720: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18a720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a724:
    // 0x18a724: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a728: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x18a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x18a72c: 0x8c450334  lw          $a1, 0x334($v0)
    ctx->pc = 0x18a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x18a730: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x18a730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x18a734: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A734u;
    {
        const bool branch_taken_0x18a734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A734u;
        // 0x18a738: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a734) {
            ctx->pc = 0x18A75Cu;
            goto label_18a75c;
        }
    }
    ctx->pc = 0x18A73Cu;
    // 0x18a73c: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x18a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x18a740: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18a744: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x18a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a748: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x18a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a74c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18a74cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a750: 0x0  nop
    ctx->pc = 0x18a750u;
    // NOP
    // 0x18a754: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18A754u;
    {
        const bool branch_taken_0x18a754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a754) {
            ctx->pc = 0x18A758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A754u;
            // 0x18a758: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A75Cu;
            goto label_18a75c;
        }
    }
    ctx->pc = 0x18A75Cu;
label_18a75c:
    // 0x18a75c: 0x54e00022  bnel        $a3, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x18A75Cu;
    {
        const bool branch_taken_0x18a75c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a75c) {
            ctx->pc = 0x18A760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A75Cu;
            // 0x18a760: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A7E8u;
            goto label_18a7e8;
        }
    }
    ctx->pc = 0x18A764u;
    // 0x18a764: 0x8cc4036c  lw          $a0, 0x36C($a2)
    ctx->pc = 0x18a764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 876)));
    // 0x18a768: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18a768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18a76c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x18a76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18a770: 0x10430050  beq         $v0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x18A770u;
    {
        const bool branch_taken_0x18a770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A770u;
        // 0x18a774: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a770) {
            ctx->pc = 0x18A8B4u;
            goto label_18a8b4;
        }
    }
    ctx->pc = 0x18A778u;
    // 0x18a778: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x18a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18a77c: 0x1043004d  beq         $v0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x18A77Cu;
    {
        const bool branch_taken_0x18a77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A77Cu;
        // 0x18a780: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a77c) {
            ctx->pc = 0x18A8B4u;
            goto label_18a8b4;
        }
    }
    ctx->pc = 0x18A784u;
    // 0x18a784: 0x8cc30418  lw          $v1, 0x418($a2)
    ctx->pc = 0x18a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1048)));
    // 0x18a788: 0x5062004b  beql        $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x18A788u;
    {
        const bool branch_taken_0x18a788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a788) {
            ctx->pc = 0x18A78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A788u;
            // 0x18a78c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A8B8u;
            goto label_18a8b8;
        }
    }
    ctx->pc = 0x18A790u;
    // 0x18a790: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18A790u;
    {
        const bool branch_taken_0x18a790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A790u;
        // 0x18a794: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a790) {
            ctx->pc = 0x18A7E8u;
            goto label_18a7e8;
        }
    }
    ctx->pc = 0x18A798u;
label_18a798:
    // 0x18a798: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A798u;
    {
        const bool branch_taken_0x18a798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a798) {
            ctx->pc = 0x18A79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A798u;
            // 0x18a79c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A7BCu;
            goto label_18a7bc;
        }
    }
    ctx->pc = 0x18A7A0u;
    // 0x18a7a0: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A7A0u;
    {
        const bool branch_taken_0x18a7a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7A0u;
        // 0x18a7a4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7a0) {
            ctx->pc = 0x18A7B8u;
            goto label_18a7b8;
        }
    }
    ctx->pc = 0x18A7A8u;
    // 0x18a7a8: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A7A8u;
    {
        const bool branch_taken_0x18a7a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a7a8) {
            ctx->pc = 0x18A7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A7A8u;
            // 0x18a7ac: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A7BCu;
            goto label_18a7bc;
        }
    }
    ctx->pc = 0x18A7B0u;
    // 0x18a7b0: 0x5642000d  bnel        $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18A7B0u;
    {
        const bool branch_taken_0x18a7b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a7b0) {
            ctx->pc = 0x18A7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A7B0u;
            // 0x18a7b4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A7E8u;
            goto label_18a7e8;
        }
    }
    ctx->pc = 0x18A7B8u;
label_18a7b8:
    // 0x18a7b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x18a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_18a7bc:
    // 0x18a7bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a7c0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x18a7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a7c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x18a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x18a7c8: 0xe46104fc  swc1        $f1, 0x4FC($v1)
    ctx->pc = 0x18a7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1276), bits); }
    // 0x18a7cc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x18a7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a7d0: 0xe4600500  swc1        $f0, 0x500($v1)
    ctx->pc = 0x18a7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1280), bits); }
    // 0x18a7d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a7d8: 0x8c43041c  lw          $v1, 0x41C($v0)
    ctx->pc = 0x18a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1052)));
    // 0x18a7dc: 0xac40041c  sw          $zero, 0x41C($v0)
    ctx->pc = 0x18a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1052), GPR_U32(ctx, 0));
    // 0x18a7e0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x18A7E0u;
    {
        const bool branch_taken_0x18a7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7E0u;
        // 0x18a7e4: 0xac430420  sw          $v1, 0x420($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1056), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7e0) {
            ctx->pc = 0x18A8B4u;
            goto label_18a8b4;
        }
    }
    ctx->pc = 0x18A7E8u;
label_18a7e8:
    // 0x18a7e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7ec: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x18a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x18a7f0: 0x8c450334  lw          $a1, 0x334($v0)
    ctx->pc = 0x18a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x18a7f4: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x18a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x18a7f8: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A7F8u;
    {
        const bool branch_taken_0x18a7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7F8u;
        // 0x18a7fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7f8) {
            ctx->pc = 0x18A820u;
            goto label_18a820;
        }
    }
    ctx->pc = 0x18A800u;
    // 0x18a800: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x18a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x18a804: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18a808: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x18a808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a80c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x18a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a810: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18a810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a814: 0x0  nop
    ctx->pc = 0x18a814u;
    // NOP
    // 0x18a818: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18A818u;
    {
        const bool branch_taken_0x18a818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a818) {
            ctx->pc = 0x18A81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A818u;
            // 0x18a81c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A820u;
            goto label_18a820;
        }
    }
    ctx->pc = 0x18A820u;
label_18a820:
    // 0x18a820: 0x14e0000e  bnez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x18A820u;
    {
        const bool branch_taken_0x18a820 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A820u;
        // 0x18a824: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a820) {
            ctx->pc = 0x18A85Cu;
            goto label_18a85c;
        }
    }
    ctx->pc = 0x18A828u;
    // 0x18a828: 0x8cc30418  lw          $v1, 0x418($a2)
    ctx->pc = 0x18a828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1048)));
    // 0x18a82c: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18A82Cu;
    {
        const bool branch_taken_0x18a82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a82c) {
            ctx->pc = 0x18A830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A82Cu;
            // 0x18a830: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A86Cu;
            goto label_18a86c;
        }
    }
    ctx->pc = 0x18A834u;
    // 0x18a834: 0xc061a26  jal         func_186898
    ctx->pc = 0x18A834u;
    SET_GPR_U32(ctx, 31, 0x18A83Cu);
    ctx->pc = 0x18A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A834u;
    // 0x18a838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x18A834u, 0x18A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A83Cu;
label_18a83c:
    // 0x18a83c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x18a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a840: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x18a840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x18a844: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18a844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a848: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18a848u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x18a84c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18a84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a850: 0x0  nop
    ctx->pc = 0x18a850u;
    // NOP
    // 0x18a854: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x18A854u;
    {
        const bool branch_taken_0x18a854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a854) {
            ctx->pc = 0x18A858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A854u;
            // 0x18a858: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A86Cu;
            goto label_18a86c;
        }
    }
    ctx->pc = 0x18A85Cu;
label_18a85c:
    // 0x18a85c: 0xc09550c  jal         func_255430
    ctx->pc = 0x18A85Cu;
    SET_GPR_U32(ctx, 31, 0x18A864u);
    ctx->pc = 0x18A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A85Cu;
    // 0x18a860: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255430u, 0x18A85Cu, 0x18A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A864u;
label_18a864:
    // 0x18a864: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18A864u;
    {
        const bool branch_taken_0x18a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A864u;
        // 0x18a868: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a864) {
            ctx->pc = 0x18A8B8u;
            goto label_18a8b8;
        }
    }
    ctx->pc = 0x18A86Cu;
label_18a86c:
    // 0x18a86c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a870: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18a870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18a874: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a878: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18a878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a87c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x18a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a880: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x18a880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18a884: 0xe46104fc  swc1        $f1, 0x4FC($v1)
    ctx->pc = 0x18a884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1276), bits); }
    // 0x18a888: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x18a888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a88c: 0xe4600500  swc1        $f0, 0x500($v1)
    ctx->pc = 0x18a88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1280), bits); }
    // 0x18a890: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a894: 0x8c43041c  lw          $v1, 0x41C($v0)
    ctx->pc = 0x18a894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1052)));
    // 0x18a898: 0xac44041c  sw          $a0, 0x41C($v0)
    ctx->pc = 0x18a898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1052), GPR_U32(ctx, 4));
    // 0x18a89c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A89Cu;
    {
        const bool branch_taken_0x18a89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A89Cu;
        // 0x18a8a0: 0xac430420  sw          $v1, 0x420($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1056), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a89c) {
            ctx->pc = 0x18A8B4u;
            goto label_18a8b4;
        }
    }
    ctx->pc = 0x18A8A4u;
label_18a8a4:
    // 0x18a8a4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x18a8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x18a8a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18a8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18a8ac: 0xc062a34  jal         func_18A8D0
    ctx->pc = 0x18A8ACu;
    SET_GPR_U32(ctx, 31, 0x18A8B4u);
    ctx->pc = 0x18A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8ACu;
    // 0x18a8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A8D0u, 0x18A8ACu, 0x18A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8B4u;
label_18a8b4:
    // 0x18a8b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x18a8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18a8b8:
    // 0x18a8b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x18a8b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18a8bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18a8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a8c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x18a8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18a8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8C4u;
        // 0x18a8c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A8CCu;
    // 0x18a8cc: 0x0  nop
    ctx->pc = 0x18a8ccu;
    // NOP
    ctx->pc = 0x18a8d0u;
}
