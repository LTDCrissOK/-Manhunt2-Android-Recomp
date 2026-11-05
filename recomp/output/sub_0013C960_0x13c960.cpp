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

// Function: sub_0013C960
// Address: 0x13c960 - 0x13c9b0
void sub_0013C960_0x13c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C960_0x13c960");
#endif

    switch (ctx->pc) {
        case 0x13c960u: goto label_13c960;
        case 0x13c964u: goto label_13c964;
        case 0x13c968u: goto label_13c968;
        case 0x13c96cu: goto label_13c96c;
        case 0x13c970u: goto label_13c970;
        case 0x13c974u: goto label_13c974;
        case 0x13c978u: goto label_13c978;
        case 0x13c97cu: goto label_13c97c;
        case 0x13c980u: goto label_13c980;
        case 0x13c984u: goto label_13c984;
        case 0x13c988u: goto label_13c988;
        case 0x13c98cu: goto label_13c98c;
        case 0x13c990u: goto label_13c990;
        case 0x13c994u: goto label_13c994;
        case 0x13c998u: goto label_13c998;
        case 0x13c99cu: goto label_13c99c;
        case 0x13c9a0u: goto label_13c9a0;
        case 0x13c9a4u: goto label_13c9a4;
        case 0x13c9a8u: goto label_13c9a8;
        case 0x13c9acu: goto label_13c9ac;
        default: break;
    }

    ctx->pc = 0x13c960u;

label_13c960:
    // 0x13c960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c964:
    // 0x13c964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c968:
    // 0x13c968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c96c:
    // 0x13c96c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c970:
    // 0x13c970: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13c970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13c974:
    // 0x13c974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13c978:
    // 0x13c978: 0xc041da4  jal         func_107690
label_13c97c:
    if (ctx->pc == 0x13C97Cu) {
        ctx->pc = 0x13C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C978u;
        // 0x13c97c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C980u;
        goto label_13c980;
    }
    ctx->pc = 0x13C978u;
    SET_GPR_U32(ctx, 31, 0x13C980u);
    ctx->pc = 0x13C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C978u;
    // 0x13c97c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107690u, 0x13C978u, 0x13C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C980u;
label_13c980:
    // 0x13c980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c984:
    // 0x13c984: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13c984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13c988:
    // 0x13c988: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13c988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13c98c:
    // 0x13c98c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13c990:
    // 0x13c990: 0x40f809  jalr        $v0
label_13c994:
    if (ctx->pc == 0x13C994u) {
        ctx->pc = 0x13C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C990u;
        // 0x13c994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C998u;
        goto label_13c998;
    }
    ctx->pc = 0x13C990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C998u);
        ctx->pc = 0x13C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C990u;
        // 0x13c994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C990u, 0x13C998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C998u;
label_13c998:
    // 0x13c998: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c99c:
    // 0x13c99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c9a0:
    // 0x13c9a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c9a4:
    // 0x13c9a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c9a8:
    // 0x13c9a8: 0x3e00008  jr          $ra
label_13c9ac:
    if (ctx->pc == 0x13C9ACu) {
        ctx->pc = 0x13C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9A8u;
        // 0x13c9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9B0u;
        goto label_fallthrough_0x13c9a8;
    }
    ctx->pc = 0x13C9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9A8u;
        // 0x13c9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c9a8:
    ctx->pc = 0x13C9B0u;
}
