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

// Function: sub_002694D0
// Address: 0x2694d0 - 0x269560
void sub_002694D0_0x2694d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002694D0_0x2694d0");
#endif

    switch (ctx->pc) {
        case 0x269510u: goto label_269510;
        case 0x269518u: goto label_269518;
        case 0x269544u: goto label_269544;
        default: break;
    }

    ctx->pc = 0x2694d0u;

    // 0x2694d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2694d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2694d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2694d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2694d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2694d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2694dc: 0x244226c8  addiu       $v0, $v0, 0x26C8
    ctx->pc = 0x2694dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9928));
    // 0x2694e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2694e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2694e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2694e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2694e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2694ec: 0x26300284  addiu       $s0, $s1, 0x284
    ctx->pc = 0x2694ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x2694f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2694f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2694f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2694f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694f8: 0xae220218  sw          $v0, 0x218($s1)
    ctx->pc = 0x2694f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
    // 0x2694fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2694fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269500: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269500u;
    {
        const bool branch_taken_0x269500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269500u;
        // 0x269504: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269500) {
            ctx->pc = 0x269528u;
            goto label_269528;
        }
    }
    ctx->pc = 0x269508u;
    // 0x269508: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x269508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26950c: 0x0  nop
    ctx->pc = 0x26950cu;
    // NOP
label_269510:
    // 0x269510: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x269510u;
    SET_GPR_U32(ctx, 31, 0x269518u);
    ctx->pc = 0x269514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269510u;
    // 0x269514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x269510u, 0x269518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269518u;
label_269518:
    // 0x269518: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x269518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26951c: 0x0  nop
    ctx->pc = 0x26951cu;
    // NOP
    // 0x269520: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x269520u;
    {
        const bool branch_taken_0x269520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269520) {
            ctx->pc = 0x269524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269520u;
            // 0x269524: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269510;
        }
    }
    ctx->pc = 0x269528u;
label_269528:
    // 0x269528: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x269528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x26952c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269530: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x269530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x269534: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x269534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269538: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x269538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x26953c: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x26953Cu;
    SET_GPR_U32(ctx, 31, 0x269544u);
    ctx->pc = 0x269540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26953Cu;
    // 0x269540: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x26953Cu, 0x269544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269544u;
label_269544:
    // 0x269544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x269544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269548: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x269548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26954c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26954cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269550: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x269550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x269554: 0x3e00008  jr          $ra
    ctx->pc = 0x269554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269554u;
        // 0x269558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26955Cu;
    // 0x26955c: 0x0  nop
    ctx->pc = 0x26955cu;
    // NOP
    ctx->pc = 0x269560u;
}
