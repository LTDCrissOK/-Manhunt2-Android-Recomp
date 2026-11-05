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

// Function: sub_001321E8
// Address: 0x1321e8 - 0x132264
void sub_001321E8_0x1321e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001321E8_0x1321e8");
#endif

    switch (ctx->pc) {
        case 0x13222cu: goto label_13222c;
        case 0x13223cu: goto label_13223c;
        case 0x13224cu: goto label_13224c;
        case 0x13225cu: goto label_13225c;
        default: break;
    }

    ctx->pc = 0x1321e8u;

    // 0x1321e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1321e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1321ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1321ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1321f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1321f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1321f4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1321f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1321f8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1321f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1321fc: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1321fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x132200: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x132200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x132204: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x132204u;
    {
        const bool branch_taken_0x132204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132204u;
        // 0x132208: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132204) {
            ctx->pc = 0x13227Cu;
            return;
        }
    }
    ctx->pc = 0x13220Cu;
    // 0x13220c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13220cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x132210: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x132210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x132214: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132218: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x132218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13221c: 0x800008  jr          $a0
    ctx->pc = 0x13221Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132224u: goto label_132224;
            case 0x132234u: goto label_132234;
            case 0x132244u: goto label_132244;
            case 0x132254u: goto label_132254;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13221Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x132224u;
label_132224:
    // 0x132224: 0xc04c8a2  jal         func_132288
    ctx->pc = 0x132224u;
    SET_GPR_U32(ctx, 31, 0x13222Cu);
    ctx->pc = 0x132228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132224u;
    // 0x132228: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132288u, 0x132224u, 0x13222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13222Cu;
label_13222c:
    // 0x13222c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13222Cu;
    {
        const bool branch_taken_0x13222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13222Cu;
        // 0x132230: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13222c) {
            ctx->pc = 0x132280u;
            return;
        }
    }
    ctx->pc = 0x132234u;
label_132234:
    // 0x132234: 0xc04c8c2  jal         func_132308
    ctx->pc = 0x132234u;
    SET_GPR_U32(ctx, 31, 0x13223Cu);
    ctx->pc = 0x132238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132234u;
    // 0x132238: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132308u, 0x132234u, 0x13223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13223Cu;
label_13223c:
    // 0x13223c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13223Cu;
    {
        const bool branch_taken_0x13223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13223Cu;
        // 0x132240: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13223c) {
            ctx->pc = 0x132280u;
            return;
        }
    }
    ctx->pc = 0x132244u;
label_132244:
    // 0x132244: 0xc04c8f6  jal         func_1323D8
    ctx->pc = 0x132244u;
    SET_GPR_U32(ctx, 31, 0x13224Cu);
    ctx->pc = 0x132248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132244u;
    // 0x132248: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1323D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1323D8u, 0x132244u, 0x13224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13224Cu;
label_13224c:
    // 0x13224c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13224Cu;
    {
        const bool branch_taken_0x13224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13224Cu;
        // 0x132250: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13224c) {
            ctx->pc = 0x132280u;
            return;
        }
    }
    ctx->pc = 0x132254u;
label_132254:
    // 0x132254: 0xc04c910  jal         func_132440
    ctx->pc = 0x132254u;
    SET_GPR_U32(ctx, 31, 0x13225Cu);
    ctx->pc = 0x132258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132254u;
    // 0x132258: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132440u, 0x132254u, 0x13225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13225Cu;
label_13225c:
    // 0x13225c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13225Cu;
    {
        const bool branch_taken_0x13225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13225Cu;
        // 0x132260: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13225c) {
            ctx->pc = 0x132280u;
            return;
        }
    }
    ctx->pc = 0x132264u;
}
