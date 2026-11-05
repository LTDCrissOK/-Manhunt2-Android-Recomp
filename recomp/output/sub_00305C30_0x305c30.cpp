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

// Function: sub_00305C30
// Address: 0x305c30 - 0x305cd0
void sub_00305C30_0x305c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305C30_0x305c30");
#endif

    switch (ctx->pc) {
        case 0x305c48u: goto label_305c48;
        case 0x305c88u: goto label_305c88;
        case 0x305cbcu: goto label_305cbc;
        default: break;
    }

    ctx->pc = 0x305c30u;

    // 0x305c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x305c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305c38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x305c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x305c3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x305c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x305c40: 0xc0902ea  jal         func_240BA8
    ctx->pc = 0x305C40u;
    SET_GPR_U32(ctx, 31, 0x305C48u);
    ctx->pc = 0x305C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C40u;
    // 0x305c44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BA8u, 0x305C40u, 0x305C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C48u;
label_305c48:
    // 0x305c48: 0xc6000378  lwc1        $f0, 0x378($s0)
    ctx->pc = 0x305c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305c4c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x305c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x305c50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x305c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x305c54: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x305c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x305c58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x305c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x305c5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x305c5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x305c60: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x305c60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305c64: 0x0  nop
    ctx->pc = 0x305c64u;
    // NOP
    // 0x305c68: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x305C68u;
    {
        const bool branch_taken_0x305c68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x305C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C68u;
        // 0x305c6c: 0x3c110080  lui         $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c68) {
            ctx->pc = 0x305C98u;
            goto label_305c98;
        }
    }
    ctx->pc = 0x305C70u;
    // 0x305c70: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x305c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x305c74: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x305c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x305c78: 0x1051000c  beq         $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x305C78u;
    {
        const bool branch_taken_0x305c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x305c78) {
            ctx->pc = 0x305CACu;
            goto label_305cac;
        }
    }
    ctx->pc = 0x305C80u;
    // 0x305c80: 0xc0c56f4  jal         func_315BD0
    ctx->pc = 0x305C80u;
    SET_GPR_U32(ctx, 31, 0x305C88u);
    ctx->pc = 0x305C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C80u;
    // 0x305c84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315BD0u, 0x305C80u, 0x305C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C88u;
label_305c88:
    // 0x305c88: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x305c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x305c8c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x305c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x305c90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x305C90u;
    {
        const bool branch_taken_0x305c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C90u;
        // 0x305c94: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c90) {
            ctx->pc = 0x305CACu;
            goto label_305cac;
        }
    }
    ctx->pc = 0x305C98u;
label_305c98:
    // 0x305c98: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x305c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x305c9c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x305c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x305ca0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x305ca4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x305ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x305ca8: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x305ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_305cac:
    // 0x305cac: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x305cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x305cb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x305cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305cb4: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x305CB4u;
    SET_GPR_U32(ctx, 31, 0x305CBCu);
    ctx->pc = 0x305CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CB4u;
    // 0x305cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x305CB4u, 0x305CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CBCu;
label_305cbc:
    // 0x305cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305cc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x305cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305cc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x305cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x305CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CC8u;
        // 0x305ccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305CD0u;
}
