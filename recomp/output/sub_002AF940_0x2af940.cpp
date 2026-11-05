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

// Function: sub_002AF940
// Address: 0x2af940 - 0x2af9c8
void sub_002AF940_0x2af940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF940_0x2af940");
#endif

    switch (ctx->pc) {
        case 0x2af974u: goto label_2af974;
        case 0x2af98cu: goto label_2af98c;
        case 0x2af998u: goto label_2af998;
        case 0x2af9a4u: goto label_2af9a4;
        default: break;
    }

    ctx->pc = 0x2af940u;

    // 0x2af940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af944: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2af944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2af948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af94c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2af94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2af950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2af950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2af954: 0x14a20016  bne         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AF954u;
    {
        const bool branch_taken_0x2af954 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF954u;
        // 0x2af958: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af954) {
            ctx->pc = 0x2AF9B0u;
            goto label_2af9b0;
        }
    }
    ctx->pc = 0x2AF95Cu;
    // 0x2af95c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AF95Cu;
    {
        const bool branch_taken_0x2af95c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF95Cu;
        // 0x2af960: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af95c) {
            ctx->pc = 0x2AF9B0u;
            goto label_2af9b0;
        }
    }
    ctx->pc = 0x2AF964u;
    // 0x2af964: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x2af964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2af968: 0x24842450  addiu       $a0, $a0, 0x2450
    ctx->pc = 0x2af968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    // 0x2af96c: 0xc0abe2c  jal         func_2AF8B0
    ctx->pc = 0x2AF96Cu;
    SET_GPR_U32(ctx, 31, 0x2AF974u);
    ctx->pc = 0x2AF970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF96Cu;
    // 0x2af970: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF8B0u, 0x2AF96Cu, 0x2AF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF974u;
label_2af974:
    // 0x2af974: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2af974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2af978: 0x24622470  addiu       $v0, $v1, 0x2470
    ctx->pc = 0x2af978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9328));
    // 0x2af97c: 0xac602470  sw          $zero, 0x2470($v1)
    ctx->pc = 0x2af97cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2470u, _value); } while (0);
    // 0x2af980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af984: 0xc0f8f76  jal         func_3E3DD8
    ctx->pc = 0x2AF984u;
    SET_GPR_U32(ctx, 31, 0x2AF98Cu);
    ctx->pc = 0x2AF988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF984u;
    // 0x2af988: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3DD8u, 0x2AF984u, 0x2AF98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF98Cu;
label_2af98c:
    // 0x2af98c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af990: 0x24502480  addiu       $s0, $v0, 0x2480
    ctx->pc = 0x2af990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x2af994: 0x0  nop
    ctx->pc = 0x2af994u;
    // NOP
label_2af998:
    // 0x2af998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af99c: 0xc0f8f7c  jal         func_3E3DF0
    ctx->pc = 0x2AF99Cu;
    SET_GPR_U32(ctx, 31, 0x2AF9A4u);
    ctx->pc = 0x2AF9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF99Cu;
    // 0x2af9a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3DF0u, 0x2AF99Cu, 0x2AF9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF9A4u;
label_2af9a4:
    // 0x2af9a4: 0x0  nop
    ctx->pc = 0x2af9a4u;
    // NOP
    // 0x2af9a8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AF9A8u;
    {
        const bool branch_taken_0x2af9a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2AF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF9A8u;
        // 0x2af9ac: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af9a8) {
            ctx->pc = 0x2AF998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af998;
        }
    }
    ctx->pc = 0x2AF9B0u;
label_2af9b0:
    // 0x2af9b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af9b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2af9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af9b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2af9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af9bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2af9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF9C0u;
        // 0x2af9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF9C8u;
}
