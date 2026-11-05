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

// Function: sub_001B66C8
// Address: 0x1b66c8 - 0x1b67a8
void sub_001B66C8_0x1b66c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B66C8_0x1b66c8");
#endif

    switch (ctx->pc) {
        case 0x1b66e8u: goto label_1b66e8;
        case 0x1b66f8u: goto label_1b66f8;
        default: break;
    }

    ctx->pc = 0x1b66c8u;

    // 0x1b66c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b66c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b66cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b66ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b66d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b66d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b66d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b66d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b66d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b66dc: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x1b66dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1b66e0: 0xc072674  jal         func_1C99D0
    ctx->pc = 0x1B66E0u;
    SET_GPR_U32(ctx, 31, 0x1B66E8u);
    ctx->pc = 0x1B66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66E0u;
    // 0x1b66e4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99D0u, 0x1B66E0u, 0x1B66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66E8u;
label_1b66e8:
    // 0x1b66e8: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x1b66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1b66ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b66ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66f0: 0xc07267a  jal         func_1C99E8
    ctx->pc = 0x1B66F0u;
    SET_GPR_U32(ctx, 31, 0x1B66F8u);
    ctx->pc = 0x1B66F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66F0u;
    // 0x1b66f4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99E8u, 0x1B66F0u, 0x1B66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66F8u;
label_1b66f8:
    // 0x1b66f8: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B66F8u;
    {
        const bool branch_taken_0x1b66f8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B66F8u;
        // 0x1b66fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b66f8) {
            ctx->pc = 0x1B6714u;
            goto label_1b6714;
        }
    }
    ctx->pc = 0x1B6700u;
    // 0x1b6700: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b6700u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6704: 0x0  nop
    ctx->pc = 0x1b6704u;
    // NOP
    // 0x1b6708: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b6708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b670c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B670Cu;
    {
        const bool branch_taken_0x1b670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b670c) {
            ctx->pc = 0x1B6730u;
            goto label_1b6730;
        }
    }
    ctx->pc = 0x1B6714u;
label_1b6714:
    // 0x1b6714: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1b6714u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1b6718: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b6718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1b671c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b671cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6724: 0x0  nop
    ctx->pc = 0x1b6724u;
    // NOP
    // 0x1b6728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b6728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b672c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b672cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b6730:
    // 0x1b6730: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6730u;
    {
        const bool branch_taken_0x1b6730 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6730u;
        // 0x1b6734: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6730) {
            ctx->pc = 0x1B674Cu;
            goto label_1b674c;
        }
    }
    ctx->pc = 0x1B6738u;
    // 0x1b6738: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b6738u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b673c: 0x0  nop
    ctx->pc = 0x1b673cu;
    // NOP
    // 0x1b6740: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b6740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b6744: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6744u;
    {
        const bool branch_taken_0x1b6744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6744) {
            ctx->pc = 0x1B6764u;
            goto label_1b6764;
        }
    }
    ctx->pc = 0x1B674Cu;
label_1b674c:
    // 0x1b674c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1b674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1b6750: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b6750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b6754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6758: 0x0  nop
    ctx->pc = 0x1b6758u;
    // NOP
    // 0x1b675c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b675cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b6760: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b6760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b6764:
    // 0x1b6764: 0x0  nop
    ctx->pc = 0x1b6764u;
    // NOP
    // 0x1b6768: 0x0  nop
    ctx->pc = 0x1b6768u;
    // NOP
    // 0x1b676c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b676cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b6770: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1b6770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1b6774: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b6774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b6778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b677c: 0x0  nop
    ctx->pc = 0x1b677cu;
    // NOP
    // 0x1b6780: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6784: 0x0  nop
    ctx->pc = 0x1b6784u;
    // NOP
    // 0x1b6788: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6788u;
    {
        const bool branch_taken_0x1b6788 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6788u;
        // 0x1b678c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6788) {
            ctx->pc = 0x1B6794u;
            goto label_1b6794;
        }
    }
    ctx->pc = 0x1B6790u;
    // 0x1b6790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6794:
    // 0x1b6794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b679c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b67a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B67A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67A0u;
        // 0x1b67a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B67A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B67A8u;
}
