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

// Function: sub_001B1E98
// Address: 0x1b1e98 - 0x1b1f58
void sub_001B1E98_0x1b1e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1E98_0x1b1e98");
#endif

    switch (ctx->pc) {
        case 0x1b1eb0u: goto label_1b1eb0;
        case 0x1b1ed0u: goto label_1b1ed0;
        case 0x1b1efcu: goto label_1b1efc;
        default: break;
    }

    ctx->pc = 0x1b1e98u;

    // 0x1b1e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1e9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1ea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1ea8: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B1EA8u;
    SET_GPR_U32(ctx, 31, 0x1B1EB0u);
    ctx->pc = 0x1B1EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EA8u;
    // 0x1b1eac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B1EA8u, 0x1B1EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EB0u;
label_1b1eb0:
    // 0x1b1eb0: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1b1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b1eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ec0: 0x9450002a  lhu         $s0, 0x2A($v0)
    ctx->pc = 0x1b1ec0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x1b1ec4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1b1ec4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1b1ec8: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B1EC8u;
    SET_GPR_U32(ctx, 31, 0x1B1ED0u);
    ctx->pc = 0x1B1ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EC8u;
    // 0x1b1ecc: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B1EC8u, 0x1B1ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1ED0u;
label_1b1ed0:
    // 0x1b1ed0: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B1ED0u;
    {
        const bool branch_taken_0x1b1ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ed0) {
            ctx->pc = 0x1B1ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1ED0u;
            // 0x1b1ed4: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1F00u;
            goto label_1b1f00;
        }
    }
    ctx->pc = 0x1B1ED8u;
    // 0x1b1ed8: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1b1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1b1edc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1b1ee0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b1ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b1ee4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1EE4u;
    {
        const bool branch_taken_0x1b1ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ee4) {
            ctx->pc = 0x1B1EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1EE4u;
            // 0x1b1ee8: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1F00u;
            goto label_1b1f00;
        }
    }
    ctx->pc = 0x1B1EECu;
    // 0x1b1eec: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1b1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1b1ef0: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x1b1ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b1ef4: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1B1EF4u;
    SET_GPR_U32(ctx, 31, 0x1B1EFCu);
    ctx->pc = 0x1B1EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EF4u;
    // 0x1b1ef8: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1B1EF4u, 0x1B1EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EFCu;
label_1b1efc:
    // 0x1b1efc: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1b1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1b1f00:
    // 0x1b1f00: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1b1f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1b1f04: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b1f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1b1f08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b1f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1f0c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b1f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b1f10: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1b1f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f14: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1b1f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1f18: 0x0  nop
    ctx->pc = 0x1b1f18u;
    // NOP
    // 0x1b1f1c: 0x0  nop
    ctx->pc = 0x1b1f1cu;
    // NOP
    // 0x1b1f20: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b1f20u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b1f24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b1f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1f28: 0x0  nop
    ctx->pc = 0x1b1f28u;
    // NOP
    // 0x1b1f2c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1F2Cu;
    {
        const bool branch_taken_0x1b1f2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F2Cu;
        // 0x1b1f30: 0xe62000b8  swc1        $f0, 0xB8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f2c) {
            ctx->pc = 0x1B1F44u;
            goto label_1b1f44;
        }
    }
    ctx->pc = 0x1B1F34u;
    // 0x1b1f34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1f38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1f3c: 0x0  nop
    ctx->pc = 0x1b1f3cu;
    // NOP
    // 0x1b1f40: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x1b1f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
label_1b1f44:
    // 0x1b1f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1f4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F50u;
        // 0x1b1f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1F58u;
}
