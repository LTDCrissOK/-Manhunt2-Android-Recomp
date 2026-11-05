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

// Function: sub_00254018
// Address: 0x254018 - 0x254090
void sub_00254018_0x254018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254018_0x254018");
#endif

    switch (ctx->pc) {
        case 0x254048u: goto label_254048;
        case 0x254068u: goto label_254068;
        default: break;
    }

    ctx->pc = 0x254018u;

    // 0x254018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25401c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25401cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x254020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x254024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25402c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x25402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x254030: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x254030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x254034: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x254034u;
    {
        const bool branch_taken_0x254034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254034u;
        // 0x254038: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254034) {
            ctx->pc = 0x254070u;
            goto label_254070;
        }
    }
    ctx->pc = 0x25403Cu;
    // 0x25403c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x25403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x254040: 0xc0944da  jal         func_251368
    ctx->pc = 0x254040u;
    SET_GPR_U32(ctx, 31, 0x254048u);
    ctx->pc = 0x254044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254040u;
    // 0x254044: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x254040u, 0x254048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254048u;
label_254048:
    // 0x254048: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x254048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x25404c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254054: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x254054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254058: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x254058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x25405c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25405cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254060: 0xc061dba  jal         func_1876E8
    ctx->pc = 0x254060u;
    SET_GPR_U32(ctx, 31, 0x254068u);
    ctx->pc = 0x254064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254060u;
    // 0x254064: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876E8u, 0x254060u, 0x254068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254068u;
label_254068:
    // 0x254068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254068u;
    {
        const bool branch_taken_0x254068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254068u;
        // 0x25406c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254068) {
            ctx->pc = 0x254074u;
            goto label_254074;
        }
    }
    ctx->pc = 0x254070u;
label_254070:
    // 0x254070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254074:
    // 0x254074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x254078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25407c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25407cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254080: 0x3e00008  jr          $ra
    ctx->pc = 0x254080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254080u;
        // 0x254084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254088u;
    // 0x254088: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25408c: 0x0  nop
    ctx->pc = 0x25408cu;
    // NOP
    ctx->pc = 0x254090u;
}
