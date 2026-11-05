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

// Function: sub_00307EA0
// Address: 0x307ea0 - 0x307f48
void sub_00307EA0_0x307ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307EA0_0x307ea0");
#endif

    switch (ctx->pc) {
        case 0x307eb8u: goto label_307eb8;
        case 0x307ec0u: goto label_307ec0;
        case 0x307ed8u: goto label_307ed8;
        case 0x307f08u: goto label_307f08;
        case 0x307f30u: goto label_307f30;
        default: break;
    }

    ctx->pc = 0x307ea0u;

    // 0x307ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307ea8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x307ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x307eac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x307eb0: 0xc090eca  jal         func_243B28
    ctx->pc = 0x307EB0u;
    SET_GPR_U32(ctx, 31, 0x307EB8u);
    ctx->pc = 0x307EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EB0u;
    // 0x307eb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243B28u, 0x307EB0u, 0x307EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EB8u;
label_307eb8:
    // 0x307eb8: 0xc08dada  jal         func_236B68
    ctx->pc = 0x307EB8u;
    SET_GPR_U32(ctx, 31, 0x307EC0u);
    ctx->pc = 0x307EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EB8u;
    // 0x307ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x307EB8u, 0x307EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EC0u;
label_307ec0:
    // 0x307ec0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x307EC0u;
    {
        const bool branch_taken_0x307ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EC0u;
        // 0x307ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ec0) {
            ctx->pc = 0x307F30u;
            goto label_307f30;
        }
    }
    ctx->pc = 0x307EC8u;
    // 0x307ec8: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x307ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x307ecc: 0x8e1100b8  lw          $s1, 0xB8($s0)
    ctx->pc = 0x307eccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x307ed0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x307ED0u;
    SET_GPR_U32(ctx, 31, 0x307ED8u);
    ctx->pc = 0x307ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307ED0u;
    // 0x307ed4: 0x8c5000a0  lw          $s0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x307ED0u, 0x307ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307ED8u;
label_307ed8:
    // 0x307ed8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x307ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307edc: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x307edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x307ee0: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x307ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x307ee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x307ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307ee8: 0x0  nop
    ctx->pc = 0x307ee8u;
    // NOP
    // 0x307eec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x307eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307ef0: 0x0  nop
    ctx->pc = 0x307ef0u;
    // NOP
    // 0x307ef4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x307EF4u;
    {
        const bool branch_taken_0x307ef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x307EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EF4u;
        // 0x307ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ef4) {
            ctx->pc = 0x307F10u;
            goto label_307f10;
        }
    }
    ctx->pc = 0x307EFCu;
    // 0x307efc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x307efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307f00: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x307F00u;
    SET_GPR_U32(ctx, 31, 0x307F08u);
    ctx->pc = 0x307F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F00u;
    // 0x307f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x307F00u, 0x307F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F08u;
label_307f08:
    // 0x307f08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x307F08u;
    {
        const bool branch_taken_0x307f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F08u;
        // 0x307f0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f08) {
            ctx->pc = 0x307F34u;
            goto label_307f34;
        }
    }
    ctx->pc = 0x307F10u;
label_307f10:
    // 0x307f10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x307f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x307f14: 0xc6201510  lwc1        $f0, 0x1510($s1)
    ctx->pc = 0x307f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307f18: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x307f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x307f1c: 0x0  nop
    ctx->pc = 0x307f1cu;
    // NOP
    // 0x307f20: 0x0  nop
    ctx->pc = 0x307f20u;
    // NOP
    // 0x307f24: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x307f24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x307f28: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x307F28u;
    SET_GPR_U32(ctx, 31, 0x307F30u);
    ctx->pc = 0x307F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F28u;
    // 0x307f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x307F28u, 0x307F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F30u;
label_307f30:
    // 0x307f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x307f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307f34:
    // 0x307f34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x307f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x307f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x307F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F3Cu;
        // 0x307f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307F44u;
    // 0x307f44: 0x0  nop
    ctx->pc = 0x307f44u;
    // NOP
    ctx->pc = 0x307f48u;
}
