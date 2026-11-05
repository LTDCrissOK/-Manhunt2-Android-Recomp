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

// Function: sub_002BB228
// Address: 0x2bb228 - 0x2bb2b8
void sub_002BB228_0x2bb228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB228_0x2bb228");
#endif

    switch (ctx->pc) {
        case 0x2bb25cu: goto label_2bb25c;
        case 0x2bb264u: goto label_2bb264;
        case 0x2bb278u: goto label_2bb278;
        case 0x2bb280u: goto label_2bb280;
        case 0x2bb288u: goto label_2bb288;
        case 0x2bb29cu: goto label_2bb29c;
        default: break;
    }

    ctx->pc = 0x2bb228u;

    // 0x2bb228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb22c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2bb22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2bb230: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2bb230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2bb234: 0x24423930  addiu       $v0, $v0, 0x3930
    ctx->pc = 0x2bb234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14640));
    // 0x2bb238: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bb238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bb23c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bb23cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bb244: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2bb244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2bb248: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2bb248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2bb24c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bb24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb250: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2bb250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2bb254: 0xc0ae9f6  jal         func_2BA7D8
    ctx->pc = 0x2BB254u;
    SET_GPR_U32(ctx, 31, 0x2BB25Cu);
    ctx->pc = 0x2BB258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB254u;
    // 0x2bb258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x2BB254u, 0x2BB25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB25Cu;
label_2bb25c:
    // 0x2bb25c: 0xc0ae94a  jal         func_2BA528
    ctx->pc = 0x2BB25Cu;
    SET_GPR_U32(ctx, 31, 0x2BB264u);
    ctx->pc = 0x2BB260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB25Cu;
    // 0x2bb260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x2BB25Cu, 0x2BB264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB264u;
label_2bb264:
    // 0x2bb264: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2bb264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2bb268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb26c: 0x24423378  addiu       $v0, $v0, 0x3378
    ctx->pc = 0x2bb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13176));
    // 0x2bb270: 0xc0f899c  jal         func_3E2670
    ctx->pc = 0x2BB270u;
    SET_GPR_U32(ctx, 31, 0x2BB278u);
    ctx->pc = 0x2BB274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB270u;
    // 0x2bb274: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2670u, 0x2BB270u, 0x2BB278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB278u;
label_2bb278:
    // 0x2bb278: 0xc0ae9f6  jal         func_2BA7D8
    ctx->pc = 0x2BB278u;
    SET_GPR_U32(ctx, 31, 0x2BB280u);
    ctx->pc = 0x2BB27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB278u;
    // 0x2bb27c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x2BB278u, 0x2BB280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB280u;
label_2bb280:
    // 0x2bb280: 0xc0ae94a  jal         func_2BA528
    ctx->pc = 0x2BB280u;
    SET_GPR_U32(ctx, 31, 0x2BB288u);
    ctx->pc = 0x2BB284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB280u;
    // 0x2bb284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x2BB280u, 0x2BB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB288u;
label_2bb288:
    // 0x2bb288: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2bb288u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2bb28c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB28Cu;
    {
        const bool branch_taken_0x2bb28c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB28Cu;
        // 0x2bb290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb28c) {
            ctx->pc = 0x2BB2A0u;
            goto label_2bb2a0;
        }
    }
    ctx->pc = 0x2BB294u;
    // 0x2bb294: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2BB294u;
    SET_GPR_U32(ctx, 31, 0x2BB29Cu);
    ctx->pc = 0x2BB298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB294u;
    // 0x2bb298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2BB294u, 0x2BB29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB29Cu;
label_2bb29c:
    // 0x2bb29c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb2a0:
    // 0x2bb2a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bb2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb2a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2bb2a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb2a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2bb2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2ACu;
        // 0x2bb2b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB2B4u;
    // 0x2bb2b4: 0x0  nop
    ctx->pc = 0x2bb2b4u;
    // NOP
    ctx->pc = 0x2bb2b8u;
}
