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

// Function: sub_0013CB90
// Address: 0x13cb90 - 0x13cbe0
void sub_0013CB90_0x13cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CB90_0x13cb90");
#endif

    switch (ctx->pc) {
        case 0x13cb90u: goto label_13cb90;
        case 0x13cb94u: goto label_13cb94;
        case 0x13cb98u: goto label_13cb98;
        case 0x13cb9cu: goto label_13cb9c;
        case 0x13cba0u: goto label_13cba0;
        case 0x13cba4u: goto label_13cba4;
        case 0x13cba8u: goto label_13cba8;
        case 0x13cbacu: goto label_13cbac;
        case 0x13cbb0u: goto label_13cbb0;
        case 0x13cbb4u: goto label_13cbb4;
        case 0x13cbb8u: goto label_13cbb8;
        case 0x13cbbcu: goto label_13cbbc;
        case 0x13cbc0u: goto label_13cbc0;
        case 0x13cbc4u: goto label_13cbc4;
        case 0x13cbc8u: goto label_13cbc8;
        case 0x13cbccu: goto label_13cbcc;
        case 0x13cbd0u: goto label_13cbd0;
        case 0x13cbd4u: goto label_13cbd4;
        case 0x13cbd8u: goto label_13cbd8;
        case 0x13cbdcu: goto label_13cbdc;
        default: break;
    }

    ctx->pc = 0x13cb90u;

label_13cb90:
    // 0x13cb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13cb94:
    // 0x13cb94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13cb98:
    // 0x13cb98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13cb98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13cb9c:
    // 0x13cb9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13cba0:
    // 0x13cba0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cba4:
    // 0x13cba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13cba8:
    // 0x13cba8: 0xc041d9c  jal         func_107670
label_13cbac:
    if (ctx->pc == 0x13CBACu) {
        ctx->pc = 0x13CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBA8u;
        // 0x13cbac: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBB0u;
        goto label_13cbb0;
    }
    ctx->pc = 0x13CBA8u;
    SET_GPR_U32(ctx, 31, 0x13CBB0u);
    ctx->pc = 0x13CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CBA8u;
    // 0x13cbac: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107670u, 0x13CBA8u, 0x13CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CBB0u;
label_13cbb0:
    // 0x13cbb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cbb4:
    // 0x13cbb4: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13cbb8:
    // 0x13cbb8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13cbbc:
    // 0x13cbbc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13cbc0:
    // 0x13cbc0: 0x40f809  jalr        $v0
label_13cbc4:
    if (ctx->pc == 0x13CBC4u) {
        ctx->pc = 0x13CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBC0u;
        // 0x13cbc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBC8u;
        goto label_13cbc8;
    }
    ctx->pc = 0x13CBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CBC8u);
        ctx->pc = 0x13CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBC0u;
        // 0x13cbc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CBC0u, 0x13CBC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CBC8u;
label_13cbc8:
    // 0x13cbc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13cbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13cbcc:
    // 0x13cbcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13cbccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13cbd0:
    // 0x13cbd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13cbd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cbd4:
    // 0x13cbd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13cbd8:
    // 0x13cbd8: 0x3e00008  jr          $ra
label_13cbdc:
    if (ctx->pc == 0x13CBDCu) {
        ctx->pc = 0x13CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBD8u;
        // 0x13cbdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBE0u;
        goto label_fallthrough_0x13cbd8;
    }
    ctx->pc = 0x13CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBD8u;
        // 0x13cbdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13cbd8:
    ctx->pc = 0x13CBE0u;
}
