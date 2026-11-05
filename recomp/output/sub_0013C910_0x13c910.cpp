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

// Function: sub_0013C910
// Address: 0x13c910 - 0x13c960
void sub_0013C910_0x13c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C910_0x13c910");
#endif

    switch (ctx->pc) {
        case 0x13c910u: goto label_13c910;
        case 0x13c914u: goto label_13c914;
        case 0x13c918u: goto label_13c918;
        case 0x13c91cu: goto label_13c91c;
        case 0x13c920u: goto label_13c920;
        case 0x13c924u: goto label_13c924;
        case 0x13c928u: goto label_13c928;
        case 0x13c92cu: goto label_13c92c;
        case 0x13c930u: goto label_13c930;
        case 0x13c934u: goto label_13c934;
        case 0x13c938u: goto label_13c938;
        case 0x13c93cu: goto label_13c93c;
        case 0x13c940u: goto label_13c940;
        case 0x13c944u: goto label_13c944;
        case 0x13c948u: goto label_13c948;
        case 0x13c94cu: goto label_13c94c;
        case 0x13c950u: goto label_13c950;
        case 0x13c954u: goto label_13c954;
        case 0x13c958u: goto label_13c958;
        case 0x13c95cu: goto label_13c95c;
        default: break;
    }

    ctx->pc = 0x13c910u;

label_13c910:
    // 0x13c910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c914:
    // 0x13c914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c918:
    // 0x13c918: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c91c:
    // 0x13c91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c920:
    // 0x13c920: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13c920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13c924:
    // 0x13c924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13c928:
    // 0x13c928: 0xc041d48  jal         func_107520
label_13c92c:
    if (ctx->pc == 0x13C92Cu) {
        ctx->pc = 0x13C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C928u;
        // 0x13c92c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C930u;
        goto label_13c930;
    }
    ctx->pc = 0x13C928u;
    SET_GPR_U32(ctx, 31, 0x13C930u);
    ctx->pc = 0x13C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C928u;
    // 0x13c92c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107520u, 0x13C928u, 0x13C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C930u;
label_13c930:
    // 0x13c930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c934:
    // 0x13c934: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13c934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13c938:
    // 0x13c938: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13c93c:
    // 0x13c93c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13c940:
    // 0x13c940: 0x40f809  jalr        $v0
label_13c944:
    if (ctx->pc == 0x13C944u) {
        ctx->pc = 0x13C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C940u;
        // 0x13c944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C948u;
        goto label_13c948;
    }
    ctx->pc = 0x13C940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C948u);
        ctx->pc = 0x13C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C940u;
        // 0x13c944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C940u, 0x13C948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C948u;
label_13c948:
    // 0x13c948: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c94c:
    // 0x13c94c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c950:
    // 0x13c950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c954:
    // 0x13c954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c958:
    // 0x13c958: 0x3e00008  jr          $ra
label_13c95c:
    if (ctx->pc == 0x13C95Cu) {
        ctx->pc = 0x13C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C958u;
        // 0x13c95c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C960u;
        goto label_fallthrough_0x13c958;
    }
    ctx->pc = 0x13C958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C958u;
        // 0x13c95c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c958:
    ctx->pc = 0x13C960u;
}
