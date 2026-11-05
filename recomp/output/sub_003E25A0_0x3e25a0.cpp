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

// Function: sub_003E25A0
// Address: 0x3e25a0 - 0x3e2610
void sub_003E25A0_0x3e25a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E25A0_0x3e25a0");
#endif

    switch (ctx->pc) {
        case 0x3e25d0u: goto label_3e25d0;
        case 0x3e25dcu: goto label_3e25dc;
        case 0x3e25e8u: goto label_3e25e8;
        case 0x3e25fcu: goto label_3e25fc;
        default: break;
    }

    ctx->pc = 0x3e25a0u;

    // 0x3e25a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e25a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e25a4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e25a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e25a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e25ac: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e25acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e25b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e25b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e25b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e25b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e25b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e25b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e25bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e25bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e25c0: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e25c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e25c4: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e25c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e25c8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E25C8u;
    SET_GPR_U32(ctx, 31, 0x3E25D0u);
    ctx->pc = 0x3E25CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E25C8u;
    // 0x3e25cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E25C8u, 0x3E25D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E25D0u;
label_3e25d0:
    // 0x3e25d0: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e25d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e25d4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E25D4u;
    SET_GPR_U32(ctx, 31, 0x3E25DCu);
    ctx->pc = 0x3E25D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E25D4u;
    // 0x3e25d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E25D4u, 0x3E25DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E25DCu;
label_3e25dc:
    // 0x3e25dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e25dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e25e0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E25E0u;
    SET_GPR_U32(ctx, 31, 0x3E25E8u);
    ctx->pc = 0x3E25E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E25E0u;
    // 0x3e25e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E25E0u, 0x3E25E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E25E8u;
label_3e25e8:
    // 0x3e25e8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e25e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e25ec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E25ECu;
    {
        const bool branch_taken_0x3e25ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E25F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E25ECu;
        // 0x3e25f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e25ec) {
            ctx->pc = 0x3E2600u;
            goto label_3e2600;
        }
    }
    ctx->pc = 0x3E25F4u;
    // 0x3e25f4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E25F4u;
    SET_GPR_U32(ctx, 31, 0x3E25FCu);
    ctx->pc = 0x3E25F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E25F4u;
    // 0x3e25f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E25F4u, 0x3E25FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E25FCu;
label_3e25fc:
    // 0x3e25fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e25fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2600:
    // 0x3e2600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e2604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e2604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2608: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2608u;
        // 0x3e260c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2610u;
}
