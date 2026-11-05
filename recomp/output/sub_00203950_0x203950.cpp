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

// Function: sub_00203950
// Address: 0x203950 - 0x2039a8
void sub_00203950_0x203950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203950_0x203950");
#endif

    switch (ctx->pc) {
        case 0x203978u: goto label_203978;
        case 0x20398cu: goto label_20398c;
        default: break;
    }

    ctx->pc = 0x203950u;

    // 0x203950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203954: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x203954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203958: 0x3c11004a  lui         $s1, 0x4A
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)74 << 16));
    // 0x20395c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203960: 0x8e22bcc0  lw          $v0, -0x4340($s1)
    ctx->pc = 0x203960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x49BCC0u));
    // 0x203964: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x203964u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x203968: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x203968u;
    {
        const bool branch_taken_0x203968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203968u;
        // 0x20396c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203968) {
            ctx->pc = 0x20398Cu;
            goto label_20398c;
        }
    }
    ctx->pc = 0x203970u;
    // 0x203970: 0xc080e6a  jal         func_2039A8
    ctx->pc = 0x203970u;
    SET_GPR_U32(ctx, 31, 0x203978u);
    ctx->pc = 0x203974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203970u;
    // 0x203974: 0x2604a0e0  addiu       $a0, $s0, -0x5F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039A8u, 0x203970u, 0x203978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203978u;
label_203978:
    // 0x203978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20397c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x20397cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x203980: 0xae22bcc0  sw          $v0, -0x4340($s1)
    ctx->pc = 0x203980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950080), GPR_U32(ctx, 2));
    // 0x203984: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x203984u;
    SET_GPR_U32(ctx, 31, 0x20398Cu);
    ctx->pc = 0x203988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203984u;
    // 0x203988: 0x24843928  addiu       $a0, $a0, 0x3928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x203984u, 0x20398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20398Cu;
label_20398c:
    // 0x20398c: 0x2602a0e0  addiu       $v0, $s0, -0x5F20
    ctx->pc = 0x20398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942944));
    // 0x203990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20399c: 0x3e00008  jr          $ra
    ctx->pc = 0x20399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2039A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20399Cu;
        // 0x2039a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20399Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2039A4u;
    // 0x2039a4: 0x0  nop
    ctx->pc = 0x2039a4u;
    // NOP
    ctx->pc = 0x2039a8u;
}
