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

// Function: sub_00205050
// Address: 0x205050 - 0x2050d8
void sub_00205050_0x205050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205050_0x205050");
#endif

    switch (ctx->pc) {
        case 0x205078u: goto label_205078;
        case 0x205084u: goto label_205084;
        case 0x205094u: goto label_205094;
        case 0x2050a4u: goto label_2050a4;
        default: break;
    }

    ctx->pc = 0x205050u;

    // 0x205050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205058: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x205058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20505c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20505cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205064: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x205064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205068: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x205068u;
    {
        const bool branch_taken_0x205068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205068u;
        // 0x20506c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205068) {
            ctx->pc = 0x2050C4u;
            goto label_2050c4;
        }
    }
    ctx->pc = 0x205070u;
    // 0x205070: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x205070u;
    SET_GPR_U32(ctx, 31, 0x205078u);
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x205070u, 0x205078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205078u;
label_205078:
    // 0x205078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20507c: 0xc081560  jal         func_205580
    ctx->pc = 0x20507Cu;
    SET_GPR_U32(ctx, 31, 0x205084u);
    ctx->pc = 0x205080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20507Cu;
    // 0x205080: 0x2405fc40  addiu       $a1, $zero, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x20507Cu, 0x205084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205084u;
label_205084:
    // 0x205084: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x205084u;
    {
        const bool branch_taken_0x205084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x205088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205084u;
        // 0x205088: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205084) {
            ctx->pc = 0x20509Cu;
            goto label_20509c;
        }
    }
    ctx->pc = 0x20508Cu;
    // 0x20508c: 0xc0e5982  jal         func_396608
    ctx->pc = 0x20508Cu;
    SET_GPR_U32(ctx, 31, 0x205094u);
    ctx->pc = 0x205090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20508Cu;
    // 0x205090: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396608u, 0x20508Cu, 0x205094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205094u;
label_205094:
    // 0x205094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x205094u;
    {
        const bool branch_taken_0x205094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205094u;
        // 0x205098: 0x92020021  lbu         $v0, 0x21($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205094) {
            ctx->pc = 0x2050A8u;
            goto label_2050a8;
        }
    }
    ctx->pc = 0x20509Cu;
label_20509c:
    // 0x20509c: 0xc0e736e  jal         func_39CDB8
    ctx->pc = 0x20509Cu;
    SET_GPR_U32(ctx, 31, 0x2050A4u);
    ctx->pc = 0x2050A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20509Cu;
    // 0x2050a0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CDB8u, 0x20509Cu, 0x2050A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050A4u;
label_2050a4:
    // 0x2050a4: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x2050a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
label_2050a8:
    // 0x2050a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2050A8u;
    {
        const bool branch_taken_0x2050a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050A8u;
        // 0x2050ac: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050a8) {
            ctx->pc = 0x2050C4u;
            goto label_2050c4;
        }
    }
    ctx->pc = 0x2050B0u;
    // 0x2050b0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2050b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2050b4: 0x8c43c100  lw          $v1, -0x3F00($v0)
    ctx->pc = 0x2050b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951168)));
    // 0x2050b8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2050b8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2050bc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2050bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2050c0: 0xa08393c0  sb          $v1, -0x6C40($a0)
    ctx->pc = 0x2050c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294939584), (uint8_t)GPR_U32(ctx, 3));
label_2050c4:
    // 0x2050c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2050c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2050c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2050c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2050cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2050ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2050d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2050D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2050D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050D0u;
        // 0x2050d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2050D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2050D8u;
}
