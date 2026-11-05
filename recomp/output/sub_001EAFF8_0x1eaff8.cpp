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

// Function: sub_001EAFF8
// Address: 0x1eaff8 - 0x1eb068
void sub_001EAFF8_0x1eaff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAFF8_0x1eaff8");
#endif

    switch (ctx->pc) {
        case 0x1eb028u: goto label_1eb028;
        default: break;
    }

    ctx->pc = 0x1eaff8u;

    // 0x1eaff8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1eaff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1eaffc: 0x8c629204  lw          $v0, -0x6DFC($v1)
    ctx->pc = 0x1eaffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9204u));
    // 0x1eb000: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB000u;
    {
        const bool branch_taken_0x1eb000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB000u;
        // 0x1eb004: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb000) {
            ctx->pc = 0x1EB010u;
            goto label_1eb010;
        }
    }
    ctx->pc = 0x1EB008u;
    // 0x1eb008: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EB008u;
    {
        const bool branch_taken_0x1eb008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb008) {
            ctx->pc = 0x1EB05Cu;
            goto label_1eb05c;
        }
    }
    ctx->pc = 0x1EB010u;
label_1eb010:
    // 0x1eb010: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1eb010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1eb014: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x1eb014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x1eb018: 0x2447c858  addiu       $a3, $v0, -0x37A8
    ctx->pc = 0x1eb018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953048));
    // 0x1eb01c: 0x2466c8d0  addiu       $a2, $v1, -0x3730
    ctx->pc = 0x1eb01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953168));
    // 0x1eb020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb024: 0x0  nop
    ctx->pc = 0x1eb024u;
    // NOP
label_1eb028:
    // 0x1eb028: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1eb028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1eb02c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1eb02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1eb030: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1eb030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1eb034: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1eb034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eb038: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1eb038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1eb03c: 0x2ca3001e  sltiu       $v1, $a1, 0x1E
    ctx->pc = 0x1eb03cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x1eb040: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EB040u;
    {
        const bool branch_taken_0x1eb040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB040u;
        // 0x1eb044: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb040) {
            ctx->pc = 0x1EB028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb028;
        }
    }
    ctx->pc = 0x1EB048u;
    // 0x1eb048: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1eb048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1eb04c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eb04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb050: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1eb050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1eb054: 0xad049204  sw          $a0, -0x6DFC($t0)
    ctx->pc = 0x1eb054u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294939140), GPR_U32(ctx, 4));
    // 0x1eb058: 0xa0629200  sb          $v0, -0x6E00($v1)
    ctx->pc = 0x1eb058u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F9200u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9200u, _value); } while (0);
label_1eb05c:
    // 0x1eb05c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB064u;
    // 0x1eb064: 0x0  nop
    ctx->pc = 0x1eb064u;
    // NOP
    ctx->pc = 0x1eb068u;
}
