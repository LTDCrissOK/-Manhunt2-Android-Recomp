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

// Function: sub_00272948
// Address: 0x272948 - 0x2729b8
void sub_00272948_0x272948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272948_0x272948");
#endif

    switch (ctx->pc) {
        case 0x272970u: goto label_272970;
        case 0x272980u: goto label_272980;
        case 0x27298cu: goto label_27298c;
        case 0x2729a0u: goto label_2729a0;
        default: break;
    }

    ctx->pc = 0x272948u;

    // 0x272948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27294c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27294cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x272950: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x272950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x272954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x272954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27295c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x27295cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x272960: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272960u;
    {
        const bool branch_taken_0x272960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272960u;
        // 0x272964: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272960) {
            ctx->pc = 0x272974u;
            goto label_272974;
        }
    }
    ctx->pc = 0x272968u;
    // 0x272968: 0xc0837b4  jal         func_20DED0
    ctx->pc = 0x272968u;
    SET_GPR_U32(ctx, 31, 0x272970u);
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x272968u, 0x272970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272970u;
label_272970:
    // 0x272970: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x272970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_272974:
    // 0x272974: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x272974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x272978: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x272978u;
    SET_GPR_U32(ctx, 31, 0x272980u);
    ctx->pc = 0x27297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272978u;
    // 0x27297c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x272978u, 0x272980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272980u;
label_272980:
    // 0x272980: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x272980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x272984: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x272984u;
    SET_GPR_U32(ctx, 31, 0x27298Cu);
    ctx->pc = 0x272988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272984u;
    // 0x272988: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x272984u, 0x27298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27298Cu;
label_27298c:
    // 0x27298c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x27298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x272990: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x272990u;
    {
        const bool branch_taken_0x272990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272990) {
            ctx->pc = 0x272994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272990u;
            // 0x272994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2729A4u;
            goto label_2729a4;
        }
    }
    ctx->pc = 0x272998u;
    // 0x272998: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x272998u;
    SET_GPR_U32(ctx, 31, 0x2729A0u);
    ctx->pc = 0x27299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272998u;
    // 0x27299c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x272998u, 0x2729A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729A0u;
label_2729a0:
    // 0x2729a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2729a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2729a4:
    // 0x2729a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2729a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2729a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2729a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2729ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2729ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2729B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729ACu;
        // 0x2729b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2729ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2729B4u;
    // 0x2729b4: 0x0  nop
    ctx->pc = 0x2729b4u;
    // NOP
    ctx->pc = 0x2729b8u;
}
