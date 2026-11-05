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

// Function: sub_00176EE8
// Address: 0x176ee8 - 0x176f40
void sub_00176EE8_0x176ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176EE8_0x176ee8");
#endif

    switch (ctx->pc) {
        case 0x176ee8u: goto label_176ee8;
        case 0x176eecu: goto label_176eec;
        case 0x176ef0u: goto label_176ef0;
        case 0x176ef4u: goto label_176ef4;
        case 0x176ef8u: goto label_176ef8;
        case 0x176efcu: goto label_176efc;
        case 0x176f00u: goto label_176f00;
        case 0x176f04u: goto label_176f04;
        case 0x176f08u: goto label_176f08;
        case 0x176f0cu: goto label_176f0c;
        case 0x176f10u: goto label_176f10;
        case 0x176f14u: goto label_176f14;
        case 0x176f18u: goto label_176f18;
        case 0x176f1cu: goto label_176f1c;
        case 0x176f20u: goto label_176f20;
        case 0x176f24u: goto label_176f24;
        case 0x176f28u: goto label_176f28;
        case 0x176f2cu: goto label_176f2c;
        case 0x176f30u: goto label_176f30;
        case 0x176f34u: goto label_176f34;
        case 0x176f38u: goto label_176f38;
        case 0x176f3cu: goto label_176f3c;
        default: break;
    }

    ctx->pc = 0x176ee8u;

label_176ee8:
    // 0x176ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_176eec:
    // 0x176eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176ef0:
    // 0x176ef0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x176ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_176ef4:
    // 0x176ef4: 0xc04f9a4  jal         func_13E690
label_176ef8:
    if (ctx->pc == 0x176EF8u) {
        ctx->pc = 0x176EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EF4u;
        // 0x176ef8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176EFCu;
        goto label_176efc;
    }
    ctx->pc = 0x176EF4u;
    SET_GPR_U32(ctx, 31, 0x176EFCu);
    ctx->pc = 0x176EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176EF4u;
    // 0x176ef8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x176EF4u, 0x176EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EFCu;
label_176efc:
    // 0x176efc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x176efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_176f00:
    // 0x176f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176f04:
    // 0x176f04: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x176f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_176f08:
    // 0x176f08: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176f0c:
    // 0x176f0c: 0xc04f8fc  jal         func_13E3F0
label_176f10:
    if (ctx->pc == 0x176F10u) {
        ctx->pc = 0x176F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F0Cu;
        // 0x176f10: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F14u;
        goto label_176f14;
    }
    ctx->pc = 0x176F0Cu;
    SET_GPR_U32(ctx, 31, 0x176F14u);
    ctx->pc = 0x176F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F0Cu;
    // 0x176f10: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176F0Cu, 0x176F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F14u;
label_176f14:
    // 0x176f14: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x176f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_176f18:
    // 0x176f18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176f1c:
    // 0x176f1c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176f20:
    // 0x176f20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176f24:
    // 0x176f24: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176f28:
    // 0x176f28: 0x40f809  jalr        $v0
label_176f2c:
    if (ctx->pc == 0x176F2Cu) {
        ctx->pc = 0x176F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F28u;
        // 0x176f2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F30u;
        goto label_176f30;
    }
    ctx->pc = 0x176F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176F30u);
        ctx->pc = 0x176F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F28u;
        // 0x176f2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176F28u, 0x176F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176F30u;
label_176f30:
    // 0x176f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176f34:
    // 0x176f34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x176f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176f38:
    // 0x176f38: 0x3e00008  jr          $ra
label_176f3c:
    if (ctx->pc == 0x176F3Cu) {
        ctx->pc = 0x176F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F38u;
        // 0x176f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F40u;
        goto label_fallthrough_0x176f38;
    }
    ctx->pc = 0x176F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F38u;
        // 0x176f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176f38:
    ctx->pc = 0x176F40u;
}
