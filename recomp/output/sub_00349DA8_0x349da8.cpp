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

// Function: sub_00349DA8
// Address: 0x349da8 - 0x349e40
void sub_00349DA8_0x349da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349DA8_0x349da8");
#endif

    switch (ctx->pc) {
        case 0x349dfcu: goto label_349dfc;
        case 0x349e18u: goto label_349e18;
        case 0x349e28u: goto label_349e28;
        default: break;
    }

    ctx->pc = 0x349da8u;

    // 0x349da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349dac: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x349dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x349db0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x349db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x349db4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x349db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349db8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x349db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x349dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x349dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349dc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x349dc4: 0x24514f20  addiu       $s1, $v0, 0x4F20
    ctx->pc = 0x349dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
    // 0x349dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349dcc: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x349dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x349dd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x349dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349dd4: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x349dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349dd8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x349dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x349ddc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x349ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x349de0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x349de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349de4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x349de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x349de8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x349de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349dec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x349decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x349df0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x349df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349df4: 0xc0b0b82  jal         func_2C2E08
    ctx->pc = 0x349DF4u;
    SET_GPR_U32(ctx, 31, 0x349DFCu);
    ctx->pc = 0x349DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349DF4u;
    // 0x349df8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E08u, 0x349DF4u, 0x349DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DFCu;
label_349dfc:
    // 0x349dfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x349DFCu;
    {
        const bool branch_taken_0x349dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349DFCu;
        // 0x349e00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349dfc) {
            ctx->pc = 0x349E28u;
            goto label_349e28;
        }
    }
    ctx->pc = 0x349E04u;
    // 0x349e04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x349e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x349e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e10: 0xc0b0a7a  jal         func_2C29E8
    ctx->pc = 0x349E10u;
    SET_GPR_U32(ctx, 31, 0x349E18u);
    ctx->pc = 0x349E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E10u;
    // 0x349e14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29E8u, 0x349E10u, 0x349E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E18u;
label_349e18:
    // 0x349e18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349E18u;
    {
        const bool branch_taken_0x349e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E18u;
        // 0x349e1c: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e18) {
            ctx->pc = 0x349E28u;
            goto label_349e28;
        }
    }
    ctx->pc = 0x349E20u;
    // 0x349e20: 0xc0b0eaa  jal         func_2C3AA8
    ctx->pc = 0x349E20u;
    SET_GPR_U32(ctx, 31, 0x349E28u);
    ctx->pc = 0x349E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E20u;
    // 0x349e24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3AA8u, 0x349E20u, 0x349E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E28u;
label_349e28:
    // 0x349e28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x349e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349e2c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x349e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x349e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349e34: 0x3e00008  jr          $ra
    ctx->pc = 0x349E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E34u;
        // 0x349e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349E3Cu;
    // 0x349e3c: 0x0  nop
    ctx->pc = 0x349e3cu;
    // NOP
    ctx->pc = 0x349e40u;
}
