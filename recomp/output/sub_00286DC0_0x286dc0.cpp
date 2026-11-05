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

// Function: sub_00286DC0
// Address: 0x286dc0 - 0x286e28
void sub_00286DC0_0x286dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286DC0_0x286dc0");
#endif

    switch (ctx->pc) {
        case 0x286df8u: goto label_286df8;
        case 0x286e0cu: goto label_286e0c;
        default: break;
    }

    ctx->pc = 0x286dc0u;

    // 0x286dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286dc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x286dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x286dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x286dd8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x286dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ddc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x286ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x286de0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x286de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x286de4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x286de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x286de8: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x286de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x286dec: 0x24a5aa90  addiu       $a1, $a1, -0x5570
    ctx->pc = 0x286decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945424));
    // 0x286df0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x286DF0u;
    SET_GPR_U32(ctx, 31, 0x286DF8u);
    ctx->pc = 0x286DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286DF0u;
    // 0x286df4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x286DF0u, 0x286DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DF8u;
label_286df8:
    // 0x286df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e00: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x286e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e04: 0xc0a1b8a  jal         func_286E28
    ctx->pc = 0x286E04u;
    SET_GPR_U32(ctx, 31, 0x286E0Cu);
    ctx->pc = 0x286E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E04u;
    // 0x286e08: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E28u, 0x286E04u, 0x286E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E0Cu;
label_286e0c:
    // 0x286e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286e10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286e14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286e14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286e18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x286e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x286E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E1Cu;
        // 0x286e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286E24u;
    // 0x286e24: 0x0  nop
    ctx->pc = 0x286e24u;
    // NOP
    ctx->pc = 0x286e28u;
}
