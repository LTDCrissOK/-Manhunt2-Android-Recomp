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

// Function: sub_00193588
// Address: 0x193588 - 0x193670
void sub_00193588_0x193588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193588_0x193588");
#endif

    ctx->pc = 0x193588u;

    // 0x193588: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x193588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x19358c: 0x8c850ff8  lw          $a1, 0xFF8($a0)
    ctx->pc = 0x19358cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x193590: 0x8c660ff8  lw          $a2, 0xFF8($v1)
    ctx->pc = 0x193590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x193594: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x193594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x193598: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x193598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x19359c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19359Cu;
    {
        const bool branch_taken_0x19359c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1935A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19359Cu;
        // 0x1935a0: 0x24a40110  addiu       $a0, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19359c) {
            ctx->pc = 0x1935D8u;
            goto label_1935d8;
        }
    }
    ctx->pc = 0x1935A4u;
    // 0x1935a4: 0x8ca20110  lw          $v0, 0x110($a1)
    ctx->pc = 0x1935a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x1935a8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1935a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1935ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1935acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1935b0: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1935B0u;
    {
        const bool branch_taken_0x1935b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1935b0) {
            ctx->pc = 0x1935B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1935B0u;
            // 0x1935b4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1935DCu;
            goto label_1935dc;
        }
    }
    ctx->pc = 0x1935B8u;
    // 0x1935b8: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x1935b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1935bc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1935bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1935c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1935c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1935c4: 0x0  nop
    ctx->pc = 0x1935c4u;
    // NOP
    // 0x1935c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1935c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1935cc: 0x0  nop
    ctx->pc = 0x1935ccu;
    // NOP
    // 0x1935d0: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1935D0u;
    {
        const bool branch_taken_0x1935d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1935d0) {
            ctx->pc = 0x19361Cu;
            goto label_19361c;
        }
    }
    ctx->pc = 0x1935D8u;
label_1935d8:
    // 0x1935d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1935d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1935dc:
    // 0x1935dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1935dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935e0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1935e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1935e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1935E4u;
    {
        const bool branch_taken_0x1935e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1935E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1935E4u;
        // 0x1935e8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935e4) {
            ctx->pc = 0x193624u;
            goto label_193624;
        }
    }
    ctx->pc = 0x1935ECu;
    // 0x1935ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1935ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1935f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1935f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1935f4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1935F4u;
    {
        const bool branch_taken_0x1935f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1935F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1935F4u;
        // 0x1935f8: 0x30a20200  andi        $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935f4) {
            ctx->pc = 0x193628u;
            goto label_193628;
        }
    }
    ctx->pc = 0x1935FCu;
    // 0x1935fc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1935fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193600: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x193600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x193604: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193608: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x193608u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x19360c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19360cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193610: 0x0  nop
    ctx->pc = 0x193610u;
    // NOP
    // 0x193614: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x193614u;
    {
        const bool branch_taken_0x193614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193614) {
            ctx->pc = 0x193628u;
            goto label_193628;
        }
    }
    ctx->pc = 0x19361Cu;
label_19361c:
    // 0x19361c: 0x3e00008  jr          $ra
    ctx->pc = 0x19361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19361Cu;
        // 0x193620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193624u;
label_193624:
    // 0x193624: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x193624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
label_193628:
    // 0x193628: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x193628u;
    {
        const bool branch_taken_0x193628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193628u;
        // 0x19362c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193628) {
            ctx->pc = 0x193664u;
            goto label_193664;
        }
    }
    ctx->pc = 0x193630u;
    // 0x193630: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x193630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x193634: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x193634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x193638: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x193638u;
    {
        const bool branch_taken_0x193638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193638u;
        // 0x19363c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193638) {
            ctx->pc = 0x193664u;
            goto label_193664;
        }
    }
    ctx->pc = 0x193640u;
    // 0x193640: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x193640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193644: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x193644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x193648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19364c: 0x0  nop
    ctx->pc = 0x19364cu;
    // NOP
    // 0x193650: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193654: 0x0  nop
    ctx->pc = 0x193654u;
    // NOP
    // 0x193658: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x193658u;
    {
        const bool branch_taken_0x193658 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193658u;
        // 0x19365c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193658) {
            ctx->pc = 0x193664u;
            goto label_193664;
        }
    }
    ctx->pc = 0x193660u;
    // 0x193660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193664:
    // 0x193664: 0x3e00008  jr          $ra
    ctx->pc = 0x193664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19366Cu;
    // 0x19366c: 0x0  nop
    ctx->pc = 0x19366cu;
    // NOP
    ctx->pc = 0x193670u;
}
