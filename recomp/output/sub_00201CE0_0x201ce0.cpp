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

// Function: sub_00201CE0
// Address: 0x201ce0 - 0x201d78
void sub_00201CE0_0x201ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201CE0_0x201ce0");
#endif

    switch (ctx->pc) {
        case 0x201d6cu: goto label_201d6c;
        default: break;
    }

    ctx->pc = 0x201ce0u;

    // 0x201ce0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x201ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ce4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201ce8: 0x2cc40080  sltiu       $a0, $a2, 0x80
    ctx->pc = 0x201ce8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x201cec: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x201cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x201cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201cf4: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x201cf4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x201cf8: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x201cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x201cfc: 0xa06202ac  sb          $v0, 0x2AC($v1)
    ctx->pc = 0x201cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 684), (uint8_t)GPR_U32(ctx, 2));
    // 0x201d00: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x201d00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201d04: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x201d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x201d08: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x201d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x201d0c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x201d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x201d10: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201D10u;
    {
        const bool branch_taken_0x201d10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x201D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D10u;
        // 0x201d14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d10) {
            ctx->pc = 0x201D2Cu;
            goto label_201d2c;
        }
    }
    ctx->pc = 0x201D18u;
    // 0x201d18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x201d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x201d1c: 0x0  nop
    ctx->pc = 0x201d1cu;
    // NOP
    // 0x201d20: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x201d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x201d24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201D24u;
    {
        const bool branch_taken_0x201d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D24u;
        // 0x201d28: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d24) {
            ctx->pc = 0x201D48u;
            goto label_201d48;
        }
    }
    ctx->pc = 0x201D2Cu;
label_201d2c:
    // 0x201d2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x201d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x201d30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201d34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x201d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x201d38: 0x0  nop
    ctx->pc = 0x201d38u;
    // NOP
    // 0x201d3c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x201d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x201d40: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x201d40u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x201d44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x201d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_201d48:
    // 0x201d48: 0x3c013503  lui         $at, 0x3503
    ctx->pc = 0x201d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13571 << 16));
    // 0x201d4c: 0x34210c28  ori         $at, $at, 0xC28
    ctx->pc = 0x201d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3112);
    // 0x201d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x201d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201d54: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x201d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x201d58: 0x8c4401f4  lw          $a0, 0x1F4($v0)
    ctx->pc = 0x201d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
    // 0x201d5c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201D5Cu;
    {
        const bool branch_taken_0x201d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D5Cu;
        // 0x201d60: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d5c) {
            ctx->pc = 0x201D6Cu;
            goto label_201d6c;
        }
    }
    ctx->pc = 0x201D64u;
    // 0x201d64: 0xc082898  jal         func_20A260
    ctx->pc = 0x201D64u;
    SET_GPR_U32(ctx, 31, 0x201D6Cu);
    ctx->pc = 0x20A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A260u, 0x201D64u, 0x201D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D6Cu;
label_201d6c:
    // 0x201d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201d70: 0x3e00008  jr          $ra
    ctx->pc = 0x201D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D70u;
        // 0x201d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201D78u;
}
