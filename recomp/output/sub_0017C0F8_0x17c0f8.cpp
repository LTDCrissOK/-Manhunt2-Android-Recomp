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

// Function: sub_0017C0F8
// Address: 0x17c0f8 - 0x17c170
void sub_0017C0F8_0x17c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C0F8_0x17c0f8");
#endif

    switch (ctx->pc) {
        case 0x17c144u: goto label_17c144;
        case 0x17c14cu: goto label_17c14c;
        case 0x17c154u: goto label_17c154;
        case 0x17c15cu: goto label_17c15c;
        default: break;
    }

    ctx->pc = 0x17c0f8u;

    // 0x17c0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17c104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c108: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c10c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x17C10Cu;
    {
        const bool branch_taken_0x17c10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c10c) {
            ctx->pc = 0x17C110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C10Cu;
            // 0x17c110: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C160u;
            goto label_17c160;
        }
    }
    ctx->pc = 0x17C114u;
    // 0x17c114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c118: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17c118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17c11c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17c11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17c120: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x17c120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x17c124: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17c124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17c128: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x17c128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x17c12c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17c130: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x17c130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c134: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x17c134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17c138: 0x7e000020  sq          $zero, 0x20($s0)
    ctx->pc = 0x17c138u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 0));
    // 0x17c13c: 0xc05f05c  jal         func_17C170
    ctx->pc = 0x17C13Cu;
    SET_GPR_U32(ctx, 31, 0x17C144u);
    ctx->pc = 0x17C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C13Cu;
    // 0x17c140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C170u, 0x17C13Cu, 0x17C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C144u;
label_17c144:
    // 0x17c144: 0xc05f31e  jal         func_17CC78
    ctx->pc = 0x17C144u;
    SET_GPR_U32(ctx, 31, 0x17C14Cu);
    ctx->pc = 0x17C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C144u;
    // 0x17c148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC78u, 0x17C144u, 0x17C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C14Cu;
label_17c14c:
    // 0x17c14c: 0xc05f33e  jal         func_17CCF8
    ctx->pc = 0x17C14Cu;
    SET_GPR_U32(ctx, 31, 0x17C154u);
    ctx->pc = 0x17C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C14Cu;
    // 0x17c150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCF8u, 0x17C14Cu, 0x17C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C154u;
label_17c154:
    // 0x17c154: 0xc05f3ca  jal         func_17CF28
    ctx->pc = 0x17C154u;
    SET_GPR_U32(ctx, 31, 0x17C15Cu);
    ctx->pc = 0x17C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C154u;
    // 0x17c158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF28u, 0x17C154u, 0x17C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C15Cu;
label_17c15c:
    // 0x17c15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c160:
    // 0x17c160: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17c160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c164: 0x3e00008  jr          $ra
    ctx->pc = 0x17C164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C164u;
        // 0x17c168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C16Cu;
    // 0x17c16c: 0x0  nop
    ctx->pc = 0x17c16cu;
    // NOP
    ctx->pc = 0x17c170u;
}
