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

// Function: sub_0036CB60
// Address: 0x36cb60 - 0x36cbe0
void sub_0036CB60_0x36cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CB60_0x36cb60");
#endif

    switch (ctx->pc) {
        case 0x36cbd0u: goto label_36cbd0;
        default: break;
    }

    ctx->pc = 0x36cb60u;

    // 0x36cb60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x36cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x36cb64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cb64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36cb68: 0x9062cbcc  lbu         $v0, -0x3434($v1)
    ctx->pc = 0x36cb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FCBCCu));
    // 0x36cb6c: 0x10440018  beq         $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x36CB6Cu;
    {
        const bool branch_taken_0x36cb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x36CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB6Cu;
        // 0x36cb70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb6c) {
            ctx->pc = 0x36CBD0u;
            goto label_36cbd0;
        }
    }
    ctx->pc = 0x36CB74u;
    // 0x36cb74: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36CB74u;
    {
        const bool branch_taken_0x36cb74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB74u;
        // 0x36cb78: 0xa064cbcc  sb          $a0, -0x3434($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294953932), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb74) {
            ctx->pc = 0x36CB98u;
            goto label_36cb98;
        }
    }
    ctx->pc = 0x36CB7Cu;
    // 0x36cb7c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x36cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x36cb80: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x36cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x36cb84: 0x8c43f158  lw          $v1, -0xEA8($v0)
    ctx->pc = 0x36cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF158u));
    // 0x36cb88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36cb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb8c: 0xac40f158  sw          $zero, -0xEA8($v0)
    ctx->pc = 0x36cb8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BF158u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF158u, _value); } while (0);
    // 0x36cb90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36CB90u;
    {
        const bool branch_taken_0x36cb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB90u;
        // 0x36cb94: 0xac83cbd0  sw          $v1, -0x3430($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294953936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb90) {
            ctx->pc = 0x36CBACu;
            goto label_36cbac;
        }
    }
    ctx->pc = 0x36CB98u;
label_36cb98:
    // 0x36cb98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36cb9c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36cba0: 0x8c44cbd0  lw          $a0, -0x3430($v0)
    ctx->pc = 0x36cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCBD0u));
    // 0x36cba4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x36cba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cba8: 0xac64f158  sw          $a0, -0xEA8($v1)
    ctx->pc = 0x36cba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5BF158u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF158u, _value); } while (0);
label_36cbac:
    // 0x36cbac: 0x8ca2f158  lw          $v0, -0xEA8($a1)
    ctx->pc = 0x36cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963544)));
    // 0x36cbb0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36cbb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36cbb4: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x36cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x36cbb8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x36cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x36cbbc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36cbc0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x36cbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x36cbc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36cbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36cbc8: 0xc0dd230  jal         func_3748C0
    ctx->pc = 0x36CBC8u;
    SET_GPR_U32(ctx, 31, 0x36CBD0u);
    ctx->pc = 0x36CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CBC8u;
    // 0x36cbcc: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3748C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748C0u, 0x36CBC8u, 0x36CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CBD0u;
label_36cbd0:
    // 0x36cbd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x36CBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CBD4u;
        // 0x36cbd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CBDCu;
    // 0x36cbdc: 0x0  nop
    ctx->pc = 0x36cbdcu;
    // NOP
    ctx->pc = 0x36cbe0u;
}
