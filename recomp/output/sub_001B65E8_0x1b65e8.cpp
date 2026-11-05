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

// Function: sub_001B65E8
// Address: 0x1b65e8 - 0x1b66c8
void sub_001B65E8_0x1b65e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B65E8_0x1b65e8");
#endif

    switch (ctx->pc) {
        case 0x1b6608u: goto label_1b6608;
        case 0x1b6618u: goto label_1b6618;
        default: break;
    }

    ctx->pc = 0x1b65e8u;

    // 0x1b65e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b65e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b65ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b65ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b65f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b65f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b65f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b65f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b65f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b65f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65fc: 0x8e240230  lw          $a0, 0x230($s1)
    ctx->pc = 0x1b65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x1b6600: 0xc072674  jal         func_1C99D0
    ctx->pc = 0x1B6600u;
    SET_GPR_U32(ctx, 31, 0x1B6608u);
    ctx->pc = 0x1B6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6600u;
    // 0x1b6604: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99D0u, 0x1B6600u, 0x1B6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6608u;
label_1b6608:
    // 0x1b6608: 0x8e240230  lw          $a0, 0x230($s1)
    ctx->pc = 0x1b6608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x1b660c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b660cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6610: 0xc07267a  jal         func_1C99E8
    ctx->pc = 0x1B6610u;
    SET_GPR_U32(ctx, 31, 0x1B6618u);
    ctx->pc = 0x1B6614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6610u;
    // 0x1b6614: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99E8u, 0x1B6610u, 0x1B6618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6618u;
label_1b6618:
    // 0x1b6618: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6618u;
    {
        const bool branch_taken_0x1b6618 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1B661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6618u;
        // 0x1b661c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6618) {
            ctx->pc = 0x1B6634u;
            goto label_1b6634;
        }
    }
    ctx->pc = 0x1B6620u;
    // 0x1b6620: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1b6620u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6624: 0x0  nop
    ctx->pc = 0x1b6624u;
    // NOP
    // 0x1b6628: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b6628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b662c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B662Cu;
    {
        const bool branch_taken_0x1b662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b662c) {
            ctx->pc = 0x1B6650u;
            goto label_1b6650;
        }
    }
    ctx->pc = 0x1B6634u;
label_1b6634:
    // 0x1b6634: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1b6634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1b6638: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1b6638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1b663c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b663cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6644: 0x0  nop
    ctx->pc = 0x1b6644u;
    // NOP
    // 0x1b6648: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b6648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b664c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b664cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b6650:
    // 0x1b6650: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6650u;
    {
        const bool branch_taken_0x1b6650 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6650u;
        // 0x1b6654: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6650) {
            ctx->pc = 0x1B666Cu;
            goto label_1b666c;
        }
    }
    ctx->pc = 0x1B6658u;
    // 0x1b6658: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b6658u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b665c: 0x0  nop
    ctx->pc = 0x1b665cu;
    // NOP
    // 0x1b6660: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b6660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b6664: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6664u;
    {
        const bool branch_taken_0x1b6664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6664) {
            ctx->pc = 0x1B6684u;
            goto label_1b6684;
        }
    }
    ctx->pc = 0x1B666Cu;
label_1b666c:
    // 0x1b666c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1b666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1b6670: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b6670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b6674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6678: 0x0  nop
    ctx->pc = 0x1b6678u;
    // NOP
    // 0x1b667c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b667cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b6680: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b6680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b6684:
    // 0x1b6684: 0x0  nop
    ctx->pc = 0x1b6684u;
    // NOP
    // 0x1b6688: 0x0  nop
    ctx->pc = 0x1b6688u;
    // NOP
    // 0x1b668c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b668cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b6690: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x1b6690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x1b6694: 0x34217efa  ori         $at, $at, 0x7EFA
    ctx->pc = 0x1b6694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32506);
    // 0x1b6698: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b669c: 0x0  nop
    ctx->pc = 0x1b669cu;
    // NOP
    // 0x1b66a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b66a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b66a4: 0x0  nop
    ctx->pc = 0x1b66a4u;
    // NOP
    // 0x1b66a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B66A8u;
    {
        const bool branch_taken_0x1b66a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B66A8u;
        // 0x1b66ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b66a8) {
            ctx->pc = 0x1B66B4u;
            goto label_1b66b4;
        }
    }
    ctx->pc = 0x1B66B0u;
    // 0x1b66b0: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x1b66b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
label_1b66b4:
    // 0x1b66b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b66b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b66b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b66b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b66bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b66bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b66c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B66C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B66C0u;
        // 0x1b66c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B66C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B66C8u;
}
