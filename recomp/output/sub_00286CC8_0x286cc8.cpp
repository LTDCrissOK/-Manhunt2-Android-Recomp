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

// Function: sub_00286CC8
// Address: 0x286cc8 - 0x286d38
void sub_00286CC8_0x286cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286CC8_0x286cc8");
#endif

    switch (ctx->pc) {
        case 0x286cfcu: goto label_286cfc;
        case 0x286d10u: goto label_286d10;
        case 0x286d18u: goto label_286d18;
        default: break;
    }

    ctx->pc = 0x286cc8u;

    // 0x286cc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286ccc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x286cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x286cd0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x286cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x286cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286cd8: 0x8e42a46c  lw          $v0, -0x5B94($s2)
    ctx->pc = 0x286cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA46Cu));
    // 0x286cdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286ce0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x286CE0u;
    {
        const bool branch_taken_0x286ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CE0u;
        // 0x286ce4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ce0) {
            ctx->pc = 0x286D1Cu;
            goto label_286d1c;
        }
    }
    ctx->pc = 0x286CE8u;
    // 0x286ce8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x286ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x286cec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x286cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286cf0: 0x24509b10  addiu       $s0, $v0, -0x64F0
    ctx->pc = 0x286cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x286cf4: 0xc07f6a6  jal         func_1FDA98
    ctx->pc = 0x286CF4u;
    SET_GPR_U32(ctx, 31, 0x286CFCu);
    ctx->pc = 0x286CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CF4u;
    // 0x286cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA98u, 0x286CF4u, 0x286CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CFCu;
label_286cfc:
    // 0x286cfc: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x286CFCu;
    {
        const bool branch_taken_0x286cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x286cfc) {
            ctx->pc = 0x286D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286CFCu;
            // 0x286d00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286D20u;
            goto label_286d20;
        }
    }
    ctx->pc = 0x286D04u;
    // 0x286d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d08: 0xc07f69c  jal         func_1FDA70
    ctx->pc = 0x286D08u;
    SET_GPR_U32(ctx, 31, 0x286D10u);
    ctx->pc = 0x286D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D08u;
    // 0x286d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA70u, 0x286D08u, 0x286D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D10u;
label_286d10:
    // 0x286d10: 0xc07f684  jal         func_1FDA10
    ctx->pc = 0x286D10u;
    SET_GPR_U32(ctx, 31, 0x286D18u);
    ctx->pc = 0x286D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D10u;
    // 0x286d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA10u, 0x286D10u, 0x286D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D18u;
label_286d18:
    // 0x286d18: 0xae51a46c  sw          $s1, -0x5B94($s2)
    ctx->pc = 0x286d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943852), GPR_U32(ctx, 17));
label_286d1c:
    // 0x286d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286d20:
    // 0x286d20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286d24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286d28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x286d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x286D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D2Cu;
        // 0x286d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286D34u;
    // 0x286d34: 0x0  nop
    ctx->pc = 0x286d34u;
    // NOP
    ctx->pc = 0x286d38u;
}
