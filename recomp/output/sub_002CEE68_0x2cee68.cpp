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

// Function: sub_002CEE68
// Address: 0x2cee68 - 0x2cef60
void sub_002CEE68_0x2cee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEE68_0x2cee68");
#endif

    switch (ctx->pc) {
        case 0x2ceea0u: goto label_2ceea0;
        case 0x2cef3cu: goto label_2cef3c;
        default: break;
    }

    ctx->pc = 0x2cee68u;

    // 0x2cee68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cee6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cee70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cee74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cee74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cee78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cee7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cee7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cee80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cee84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cee84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cee88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cee8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2cee8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cee90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cee94: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2cee94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cee98: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x2CEE98u;
    SET_GPR_U32(ctx, 31, 0x2CEEA0u);
    ctx->pc = 0x2CEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE98u;
    // 0x2cee9c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x2CEE98u, 0x2CEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEA0u;
label_2ceea0:
    // 0x2ceea0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ceea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ceea4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ceea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ceea8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2ceea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ceeac: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x2ceeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2ceeb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ceeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ceeb4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2ceeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2ceeb8: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x2ceeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2ceebc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ceebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ceec0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ceec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ceec4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CEEC4u;
    {
        const bool branch_taken_0x2ceec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceec4) {
            ctx->pc = 0x2CEEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEEC4u;
            // 0x2ceec8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CEECCu;
label_2ceecc:
    // 0x2ceecc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2ceeccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ceed0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2ceed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ceed4: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x2ceed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x2ceed8: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x2ceed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ceedc: 0x3810  mfhi        $a3
    ctx->pc = 0x2ceedcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2ceee0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2ceee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ceee4: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x2ceee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ceee8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CEEE8u;
    {
        const bool branch_taken_0x2ceee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEE8u;
        // 0x2ceeec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceee8) {
            ctx->pc = 0x2CEF08u;
            goto label_2cef08;
        }
    }
    ctx->pc = 0x2CEEF0u;
    // 0x2ceef0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2ceef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ceef4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ceef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2ceef8: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x2ceef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x2ceefc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2ceefcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2cef00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CEF00u;
    {
        const bool branch_taken_0x2cef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF00u;
        // 0x2cef04: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef00) {
            ctx->pc = 0x2CEF34u;
            goto label_2cef34;
        }
    }
    ctx->pc = 0x2CEF08u;
label_2cef08:
    // 0x2cef08: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2cef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2cef0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2cef10: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2cef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2cef14: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2cef14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2cef18: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2cef18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2cef1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cef20: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2cef20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x2cef24: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2cef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2cef28: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2cef28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2cef2c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2cef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2cef30: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2cef30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2cef34:
    // 0x2cef34: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x2CEF34u;
    SET_GPR_U32(ctx, 31, 0x2CEF3Cu);
    ctx->pc = 0x2CEF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF34u;
    // 0x2cef38: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x2CEF34u, 0x2CEF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF3Cu;
label_2cef3c:
    // 0x2cef3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cef3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cef40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cef40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cef44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cef44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cef48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cef48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cef4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cef4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cef50: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cef50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cef54: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF54u;
        // 0x2cef58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEF5Cu;
    // 0x2cef5c: 0x0  nop
    ctx->pc = 0x2cef5cu;
    // NOP
    ctx->pc = 0x2cef60u;
}
