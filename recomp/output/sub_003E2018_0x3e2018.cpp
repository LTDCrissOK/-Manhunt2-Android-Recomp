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

// Function: sub_003E2018
// Address: 0x3e2018 - 0x3e2090
void sub_003E2018_0x3e2018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2018_0x3e2018");
#endif

    switch (ctx->pc) {
        case 0x3e2048u: goto label_3e2048;
        case 0x3e2054u: goto label_3e2054;
        case 0x3e2060u: goto label_3e2060;
        case 0x3e2074u: goto label_3e2074;
        default: break;
    }

    ctx->pc = 0x3e2018u;

    // 0x3e2018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e201c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e2024: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e2024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e2028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e2028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e202c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e202cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e2030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e2034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e2034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2038: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e2038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e203c: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e2040: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2040u;
    SET_GPR_U32(ctx, 31, 0x3E2048u);
    ctx->pc = 0x3E2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2040u;
    // 0x3e2044: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2040u, 0x3E2048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2048u;
label_3e2048:
    // 0x3e2048: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e2048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e204c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E204Cu;
    SET_GPR_U32(ctx, 31, 0x3E2054u);
    ctx->pc = 0x3E2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E204Cu;
    // 0x3e2050: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E204Cu, 0x3E2054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2054u;
label_3e2054:
    // 0x3e2054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2058: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2058u;
    SET_GPR_U32(ctx, 31, 0x3E2060u);
    ctx->pc = 0x3E205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2058u;
    // 0x3e205c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2058u, 0x3E2060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2060u;
label_3e2060:
    // 0x3e2060: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e2060u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e2064: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2064u;
    {
        const bool branch_taken_0x3e2064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2064u;
        // 0x3e2068: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2064) {
            ctx->pc = 0x3E2078u;
            goto label_3e2078;
        }
    }
    ctx->pc = 0x3E206Cu;
    // 0x3e206c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E206Cu;
    SET_GPR_U32(ctx, 31, 0x3E2074u);
    ctx->pc = 0x3E2070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E206Cu;
    // 0x3e2070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E206Cu, 0x3E2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2074u;
label_3e2074:
    // 0x3e2074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e2074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2078:
    // 0x3e2078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e207c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e207cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2080: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2080u;
        // 0x3e2084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2088u;
    // 0x3e2088: 0xe48c0080  swc1        $f12, 0x80($a0)
    ctx->pc = 0x3e2088u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x3e208c: 0x0  nop
    ctx->pc = 0x3e208cu;
    // NOP
    ctx->pc = 0x3e2090u;
}
