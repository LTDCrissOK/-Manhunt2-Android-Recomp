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

// Function: sub_001405D8
// Address: 0x1405d8 - 0x140678
void sub_001405D8_0x1405d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001405D8_0x1405d8");
#endif

    switch (ctx->pc) {
        case 0x140634u: goto label_140634;
        default: break;
    }

    ctx->pc = 0x1405d8u;

    // 0x1405d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1405d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1405dc: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1405dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x1405e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1405e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1405e4: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x1405e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x1405e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1405e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1405ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1405ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1405f0: 0x8e030620  lw          $v1, 0x620($s0)
    ctx->pc = 0x1405f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x1405f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1405f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1405f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1405f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1405fc: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x1405fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x140600: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x140600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x140604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140608: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x140608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14060c: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x14060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x140610: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x140610u;
    {
        const bool branch_taken_0x140610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140610) {
            ctx->pc = 0x140614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140610u;
            // 0x140614: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140620u;
            goto label_140620;
        }
    }
    ctx->pc = 0x140618u;
    // 0x140618: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140618u;
    {
        const bool branch_taken_0x140618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140618u;
        // 0x14061c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140618) {
            ctx->pc = 0x140628u;
            goto label_140628;
        }
    }
    ctx->pc = 0x140620u;
label_140620:
    // 0x140620: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140624: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x140624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_140628:
    // 0x140628: 0x8e060624  lw          $a2, 0x624($s0)
    ctx->pc = 0x140628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x14062c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14062Cu;
    SET_GPR_U32(ctx, 31, 0x140634u);
    ctx->pc = 0x140630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14062Cu;
    // 0x140630: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14062Cu, 0x140634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140634u;
label_140634:
    // 0x140634: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x140634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140638: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x140638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14063c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x14063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x140640: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x140640u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x140644: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x140644u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x140648: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x140648u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x14064c: 0xc6000628  lwc1        $f0, 0x628($s0)
    ctx->pc = 0x14064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140650: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x140650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140654: 0x0  nop
    ctx->pc = 0x140654u;
    // NOP
    // 0x140658: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x140658u;
    {
        const bool branch_taken_0x140658 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140658u;
        // 0x14065c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140658) {
            ctx->pc = 0x140664u;
            goto label_140664;
        }
    }
    ctx->pc = 0x140660u;
    // 0x140660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x140660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140664:
    // 0x140664: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x140664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140668: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x140668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14066c: 0x3e00008  jr          $ra
    ctx->pc = 0x14066Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14066Cu;
        // 0x140670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14066Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140674u;
    // 0x140674: 0x0  nop
    ctx->pc = 0x140674u;
    // NOP
    ctx->pc = 0x140678u;
}
