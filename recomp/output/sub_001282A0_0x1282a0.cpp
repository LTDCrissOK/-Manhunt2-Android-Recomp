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

// Function: sub_001282A0
// Address: 0x1282a0 - 0x128350
void sub_001282A0_0x1282a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001282A0_0x1282a0");
#endif

    switch (ctx->pc) {
        case 0x1282d4u: goto label_1282d4;
        case 0x128334u: goto label_128334;
        default: break;
    }

    ctx->pc = 0x1282a0u;

    // 0x1282a0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1282a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1282a4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1282a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1282a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1282a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1282ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1282acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1282b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1282b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1282b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1282b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1282b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1282b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282bc: 0x24500a90  addiu       $s0, $v0, 0xA90
    ctx->pc = 0x1282bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2704));
    // 0x1282c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1282c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1282c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1282c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1282c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282cc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1282CCu;
    SET_GPR_U32(ctx, 31, 0x1282D4u);
    ctx->pc = 0x1282D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282CCu;
    // 0x1282d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1282CCu, 0x1282D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282D4u;
label_1282d4:
    // 0x1282d4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1282d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1282d8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1282d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1282dc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1282dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1282e0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1282e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1282e4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1282e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1282e8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1282e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1282ec: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1282ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1282f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1282f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1282f4: 0x0  nop
    ctx->pc = 0x1282f4u;
    // NOP
    // 0x1282f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1282f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1282fc: 0x0  nop
    ctx->pc = 0x1282fcu;
    // NOP
    // 0x128300: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x128300u;
    {
        const bool branch_taken_0x128300 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x128304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128300u;
        // 0x128304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128300) {
            ctx->pc = 0x128338u;
            goto label_128338;
        }
    }
    ctx->pc = 0x128308u;
    // 0x128308: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x128308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x12830c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12830cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128310: 0x0  nop
    ctx->pc = 0x128310u;
    // NOP
    // 0x128314: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128318: 0x0  nop
    ctx->pc = 0x128318u;
    // NOP
    // 0x12831c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x12831Cu;
    {
        const bool branch_taken_0x12831c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12831c) {
            ctx->pc = 0x128320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12831Cu;
            // 0x128320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128338u;
            goto label_128338;
        }
    }
    ctx->pc = 0x128324u;
    // 0x128324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128328: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x128328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12832c: 0xc041032  jal         func_1040C8
    ctx->pc = 0x12832Cu;
    SET_GPR_U32(ctx, 31, 0x128334u);
    ctx->pc = 0x128330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12832Cu;
    // 0x128330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x12832Cu, 0x128334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128334u;
label_128334:
    // 0x128334: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x128334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_128338:
    // 0x128338: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x128338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12833c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12833cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x128340: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x128340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128344: 0x3e00008  jr          $ra
    ctx->pc = 0x128344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128344u;
        // 0x128348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12834Cu;
    // 0x12834c: 0x0  nop
    ctx->pc = 0x12834cu;
    // NOP
    ctx->pc = 0x128350u;
}
