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

// Function: sub_0027A520
// Address: 0x27a520 - 0x27a638
void sub_0027A520_0x27a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A520_0x27a520");
#endif

    switch (ctx->pc) {
        case 0x27a548u: goto label_27a548;
        case 0x27a55cu: goto label_27a55c;
        case 0x27a568u: goto label_27a568;
        case 0x27a594u: goto label_27a594;
        case 0x27a5b0u: goto label_27a5b0;
        case 0x27a5d0u: goto label_27a5d0;
        case 0x27a5dcu: goto label_27a5dc;
        case 0x27a5f4u: goto label_27a5f4;
        case 0x27a600u: goto label_27a600;
        case 0x27a60cu: goto label_27a60c;
        case 0x27a618u: goto label_27a618;
        default: break;
    }

    ctx->pc = 0x27a520u;

    // 0x27a520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27a524: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27a528: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27a52c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27a52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a530: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27a530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a534: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27a534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a538: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x27a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x27a53c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x27a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x27a540: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x27A540u;
    SET_GPR_U32(ctx, 31, 0x27A548u);
    ctx->pc = 0x27A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A540u;
    // 0x27a544: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x27A540u, 0x27A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A548u;
label_27a548:
    // 0x27a548: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x27a548u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27a54c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a550: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a554: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x27A554u;
    SET_GPR_U32(ctx, 31, 0x27A55Cu);
    ctx->pc = 0x27A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A554u;
    // 0x27a558: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x27A554u, 0x27A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A55Cu;
label_27a55c:
    // 0x27a55c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a560: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x27A560u;
    SET_GPR_U32(ctx, 31, 0x27A568u);
    ctx->pc = 0x27A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A560u;
    // 0x27a564: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x27A560u, 0x27A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A568u;
label_27a568:
    // 0x27a568: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x27a568u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x27a56c: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x27A56Cu;
    {
        const bool branch_taken_0x27a56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a56c) {
            ctx->pc = 0x27A570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A56Cu;
            // 0x27a570: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A5E4u;
            goto label_27a5e4;
        }
    }
    ctx->pc = 0x27A574u;
    // 0x27a574: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x27a574u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a578: 0x0  nop
    ctx->pc = 0x27a578u;
    // NOP
    // 0x27a57c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27a57cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27a580: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x27a580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x27a584: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27a584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27a588: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27a58c: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x27A58Cu;
    SET_GPR_U32(ctx, 31, 0x27A594u);
    ctx->pc = 0x27A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A58Cu;
    // 0x27a590: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x27A58Cu, 0x27A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A594u;
label_27a594:
    // 0x27a594: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27a594u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27a598: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x27a598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x27a59c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5a0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x27a5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27a5a4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x27a5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x27a5a8: 0xc0d755e  jal         func_35D578
    ctx->pc = 0x27A5A8u;
    SET_GPR_U32(ctx, 31, 0x27A5B0u);
    ctx->pc = 0x27A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5A8u;
    // 0x27a5ac: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x27A5A8u, 0x27A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5B0u;
label_27a5b0:
    // 0x27a5b0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x27a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27a5b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5b8: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x27a5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x27a5bc: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x27a5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x27a5c0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27a5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27a5c4: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x27a5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x27a5c8: 0xc0d755e  jal         func_35D578
    ctx->pc = 0x27A5C8u;
    SET_GPR_U32(ctx, 31, 0x27A5D0u);
    ctx->pc = 0x27A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5C8u;
    // 0x27a5cc: 0x102e03  sra         $a1, $s0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x27A5C8u, 0x27A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5D0u;
label_27a5d0:
    // 0x27a5d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5d4: 0xc0d755e  jal         func_35D578
    ctx->pc = 0x27A5D4u;
    SET_GPR_U32(ctx, 31, 0x27A5DCu);
    ctx->pc = 0x27A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5D4u;
    // 0x27a5d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x27A5D4u, 0x27A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5DCu;
label_27a5dc:
    // 0x27a5dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27A5DCu;
    {
        const bool branch_taken_0x27a5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5DCu;
        // 0x27a5e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5dc) {
            ctx->pc = 0x27A604u;
            goto label_27a604;
        }
    }
    ctx->pc = 0x27A5E4u;
label_27a5e4:
    // 0x27a5e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5e8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x27a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x27a5ec: 0xc0d755e  jal         func_35D578
    ctx->pc = 0x27A5ECu;
    SET_GPR_U32(ctx, 31, 0x27A5F4u);
    ctx->pc = 0x27A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5ECu;
    // 0x27a5f0: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x27A5ECu, 0x27A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5F4u;
label_27a5f4:
    // 0x27a5f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5f8: 0xc0d755e  jal         func_35D578
    ctx->pc = 0x27A5F8u;
    SET_GPR_U32(ctx, 31, 0x27A600u);
    ctx->pc = 0x27A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5F8u;
    // 0x27a5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x27A5F8u, 0x27A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A600u;
label_27a600:
    // 0x27a600: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27a600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a604:
    // 0x27a604: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x27A604u;
    SET_GPR_U32(ctx, 31, 0x27A60Cu);
    ctx->pc = 0x27A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A604u;
    // 0x27a608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x27A604u, 0x27A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A60Cu;
label_27a60c:
    // 0x27a60c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a610: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A610u;
    SET_GPR_U32(ctx, 31, 0x27A618u);
    ctx->pc = 0x27A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A610u;
    // 0x27a614: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A610u, 0x27A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A618u;
label_27a618:
    // 0x27a618: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27a618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a61c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27a61cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a620: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27a620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27a624: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27a624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a628: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27a628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27a62c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A62Cu;
        // 0x27a630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A634u;
    // 0x27a634: 0x0  nop
    ctx->pc = 0x27a634u;
    // NOP
    ctx->pc = 0x27a638u;
}
