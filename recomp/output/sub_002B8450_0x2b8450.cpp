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

// Function: sub_002B8450
// Address: 0x2b8450 - 0x2b8510
void sub_002B8450_0x2b8450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8450_0x2b8450");
#endif

    switch (ctx->pc) {
        case 0x2b8464u: goto label_2b8464;
        case 0x2b846cu: goto label_2b846c;
        case 0x2b847cu: goto label_2b847c;
        case 0x2b84d8u: goto label_2b84d8;
        case 0x2b84f0u: goto label_2b84f0;
        default: break;
    }

    ctx->pc = 0x2b8450u;

    // 0x2b8450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8458: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b8458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b845c: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B845Cu;
    SET_GPR_U32(ctx, 31, 0x2B8464u);
    ctx->pc = 0x2B8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B845Cu;
    // 0x2b8460: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B845Cu, 0x2B8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8464u;
label_2b8464:
    // 0x2b8464: 0xc0ace60  jal         func_2B3980
    ctx->pc = 0x2B8464u;
    SET_GPR_U32(ctx, 31, 0x2B846Cu);
    ctx->pc = 0x2B8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8464u;
    // 0x2b8468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3980u, 0x2B8464u, 0x2B846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B846Cu;
label_2b846c:
    // 0x2b846c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B846Cu;
    {
        const bool branch_taken_0x2b846c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B846Cu;
        // 0x2b8470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b846c) {
            ctx->pc = 0x2B84E4u;
            goto label_2b84e4;
        }
    }
    ctx->pc = 0x2B8474u;
    // 0x2b8474: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B8474u;
    SET_GPR_U32(ctx, 31, 0x2B847Cu);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B8474u, 0x2B847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B847Cu;
label_2b847c:
    // 0x2b847c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B847Cu;
    {
        const bool branch_taken_0x2b847c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B847Cu;
        // 0x2b8480: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b847c) {
            ctx->pc = 0x2B8498u;
            goto label_2b8498;
        }
    }
    ctx->pc = 0x2B8484u;
    // 0x2b8484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8488: 0x0  nop
    ctx->pc = 0x2b8488u;
    // NOP
    // 0x2b848c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b848cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b8490: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8490u;
    {
        const bool branch_taken_0x2b8490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8490) {
            ctx->pc = 0x2B84B0u;
            goto label_2b84b0;
        }
    }
    ctx->pc = 0x2B8498u;
label_2b8498:
    // 0x2b8498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b8498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b849c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b849cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b84a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b84a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b84a4: 0x0  nop
    ctx->pc = 0x2b84a4u;
    // NOP
    // 0x2b84a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b84a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b84ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b84acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b84b0:
    // 0x2b84b0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b84b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b84b4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b84b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b84b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b84b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b84bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b84bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b84c0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2b84c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2b84c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b84c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b84c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b84c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b84cc: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b84ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
    // 0x2b84d0: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B84D0u;
    SET_GPR_U32(ctx, 31, 0x2B84D8u);
    ctx->pc = 0x2B84D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B84D0u;
    // 0x2b84d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B84D0u, 0x2B84D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B84D8u;
label_2b84d8:
    // 0x2b84d8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2b84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2b84dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B84DCu;
    {
        const bool branch_taken_0x2b84dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84DCu;
        // 0x2b84e0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84dc) {
            ctx->pc = 0x2B84F8u;
            goto label_2b84f8;
        }
    }
    ctx->pc = 0x2B84E4u;
label_2b84e4:
    // 0x2b84e4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2b84e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2b84e8: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B84E8u;
    SET_GPR_U32(ctx, 31, 0x2B84F0u);
    ctx->pc = 0x2B84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B84E8u;
    // 0x2b84ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B84E8u, 0x2B84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B84F0u;
label_2b84f0:
    // 0x2b84f0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2b84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b84f4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b84f8:
    // 0x2b84f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b84f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b84fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b84fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8500: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b8500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8504: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8504u;
        // 0x2b8508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B850Cu;
    // 0x2b850c: 0x0  nop
    ctx->pc = 0x2b850cu;
    // NOP
    ctx->pc = 0x2b8510u;
}
