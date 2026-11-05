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

// Function: sub_002AC010
// Address: 0x2ac010 - 0x2ac0a8
void sub_002AC010_0x2ac010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC010_0x2ac010");
#endif

    switch (ctx->pc) {
        case 0x2ac03cu: goto label_2ac03c;
        case 0x2ac050u: goto label_2ac050;
        default: break;
    }

    ctx->pc = 0x2ac010u;

    // 0x2ac010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ac018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ac01c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ac01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ac020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ac024: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AC024u;
    {
        const bool branch_taken_0x2ac024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC024u;
        // 0x2ac028: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac024) {
            ctx->pc = 0x2AC090u;
            goto label_2ac090;
        }
    }
    ctx->pc = 0x2AC02Cu;
    // 0x2ac02c: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AC02Cu;
    {
        const bool branch_taken_0x2ac02c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC02Cu;
        // 0x2ac030: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac02c) {
            ctx->pc = 0x2AC090u;
            goto label_2ac090;
        }
    }
    ctx->pc = 0x2AC034u;
    // 0x2ac034: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2AC034u;
    SET_GPR_U32(ctx, 31, 0x2AC03Cu);
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2AC034u, 0x2AC03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC03Cu;
label_2ac03c:
    // 0x2ac03c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2ac03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ac040: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AC040u;
    {
        const bool branch_taken_0x2ac040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC040u;
        // 0x2ac044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac040) {
            ctx->pc = 0x2AC088u;
            goto label_2ac088;
        }
    }
    ctx->pc = 0x2AC048u;
    // 0x2ac048: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2ac048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2ac04c: 0x0  nop
    ctx->pc = 0x2ac04cu;
    // NOP
label_2ac050:
    // 0x2ac050: 0x2043021  addu        $a2, $s0, $a0
    ctx->pc = 0x2ac050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2ac054: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2ac054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac058: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2ac058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x2ac05c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ac05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ac060: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2ac060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2ac064: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC064u;
    {
        const bool branch_taken_0x2ac064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC064u;
        // 0x2ac068: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac064) {
            ctx->pc = 0x2AC074u;
            goto label_2ac074;
        }
    }
    ctx->pc = 0x2AC06Cu;
    // 0x2ac06c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2ac06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2ac070: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2ac070u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ac074:
    // 0x2ac074: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2ac074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ac078: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2ac078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ac07c: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x2ac07cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2ac080: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2AC080u;
    {
        const bool branch_taken_0x2ac080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC080u;
        // 0x2ac084: 0x2241821  addu        $v1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac080) {
            ctx->pc = 0x2AC050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac050;
        }
    }
    ctx->pc = 0x2AC088u;
label_2ac088:
    // 0x2ac088: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x2ac088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2ac08c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2ac08cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2ac090:
    // 0x2ac090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ac094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ac098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac09c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC09Cu;
        // 0x2ac0a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC0A4u;
    // 0x2ac0a4: 0x0  nop
    ctx->pc = 0x2ac0a4u;
    // NOP
    ctx->pc = 0x2ac0a8u;
}
