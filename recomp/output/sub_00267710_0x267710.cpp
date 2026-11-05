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

// Function: sub_00267710
// Address: 0x267710 - 0x267a30
void sub_00267710_0x267710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267710_0x267710");
#endif

    switch (ctx->pc) {
        case 0x267730u: goto label_267730;
        case 0x267740u: goto label_267740;
        case 0x267764u: goto label_267764;
        case 0x26777cu: goto label_26777c;
        case 0x267794u: goto label_267794;
        case 0x2677d4u: goto label_2677d4;
        case 0x267800u: goto label_267800;
        case 0x267818u: goto label_267818;
        case 0x267830u: goto label_267830;
        case 0x267848u: goto label_267848;
        case 0x267880u: goto label_267880;
        case 0x2678b4u: goto label_2678b4;
        case 0x2678ccu: goto label_2678cc;
        case 0x2678e4u: goto label_2678e4;
        case 0x2678fcu: goto label_2678fc;
        case 0x267914u: goto label_267914;
        case 0x26792cu: goto label_26792c;
        case 0x267944u: goto label_267944;
        case 0x26795cu: goto label_26795c;
        case 0x267974u: goto label_267974;
        case 0x26798cu: goto label_26798c;
        case 0x2679a4u: goto label_2679a4;
        case 0x2679bcu: goto label_2679bc;
        case 0x2679d4u: goto label_2679d4;
        case 0x2679ecu: goto label_2679ec;
        case 0x267a04u: goto label_267a04;
        case 0x267a14u: goto label_267a14;
        default: break;
    }

    ctx->pc = 0x267710u;

    // 0x267710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x267710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x267714: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x267714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x267718: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x267718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26771c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26771cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267720: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x267720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x267724: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x267724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x267728: 0xc083854  jal         func_20E150
    ctx->pc = 0x267728u;
    SET_GPR_U32(ctx, 31, 0x267730u);
    ctx->pc = 0x26772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267728u;
    // 0x26772c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E150u, 0x267728u, 0x267730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267730u;
label_267730:
    // 0x267730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267734: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x267734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267738: 0xc0b5ec8  jal         func_2D7B20
    ctx->pc = 0x267738u;
    SET_GPR_U32(ctx, 31, 0x267740u);
    ctx->pc = 0x26773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267738u;
    // 0x26773c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B20u, 0x267738u, 0x267740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267740u;
label_267740:
    // 0x267740: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x267740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x267744: 0x8e460220  lw          $a2, 0x220($s2)
    ctx->pc = 0x267744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x267748: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x267748u;
    {
        const bool branch_taken_0x267748 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267748u;
        // 0x26774c: 0x244578a8  addiu       $a1, $v0, 0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267748) {
            ctx->pc = 0x267758u;
            goto label_267758;
        }
    }
    ctx->pc = 0x267750u;
    // 0x267750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x267750u;
    {
        const bool branch_taken_0x267750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267750u;
        // 0x267754: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267750) {
            ctx->pc = 0x26775Cu;
            goto label_26775c;
        }
    }
    ctx->pc = 0x267758u;
label_267758:
    // 0x267758: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x267758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26775c:
    // 0x26775c: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x26775Cu;
    SET_GPR_U32(ctx, 31, 0x267764u);
    ctx->pc = 0x267760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26775Cu;
    // 0x267760: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x26775Cu, 0x267764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267764u;
label_267764:
    // 0x267764: 0x92460292  lbu         $a2, 0x292($s2)
    ctx->pc = 0x267764u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 658)));
    // 0x267768: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26776c: 0x24a578b8  addiu       $a1, $a1, 0x78B8
    ctx->pc = 0x26776cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30904));
    // 0x267770: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267774: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x267774u;
    SET_GPR_U32(ctx, 31, 0x26777Cu);
    ctx->pc = 0x267778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267774u;
    // 0x267778: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x267774u, 0x26777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26777Cu;
label_26777c:
    // 0x26777c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26777cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267780: 0x92460296  lbu         $a2, 0x296($s2)
    ctx->pc = 0x267780u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 662)));
    // 0x267784: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x267784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x267788: 0x24a578c8  addiu       $a1, $a1, 0x78C8
    ctx->pc = 0x267788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30920));
    // 0x26778c: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x26778Cu;
    SET_GPR_U32(ctx, 31, 0x267794u);
    ctx->pc = 0x267790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26778Cu;
    // 0x267790: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x26778Cu, 0x267794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267794u;
label_267794:
    // 0x267794: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x267794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x267798: 0x8e440220  lw          $a0, 0x220($s2)
    ctx->pc = 0x267798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x26779c: 0x246578e0  addiu       $a1, $v1, 0x78E0
    ctx->pc = 0x26779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30944));
    // 0x2677a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2677a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2677a4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2677A4u;
    {
        const bool branch_taken_0x2677a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677A4u;
        // 0x2677a8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677a4) {
            ctx->pc = 0x2677B0u;
            goto label_2677b0;
        }
    }
    ctx->pc = 0x2677ACu;
    // 0x2677ac: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2677acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2677b0:
    // 0x2677b0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2677b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2677b4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2677b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2677b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2677b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2677bc: 0x0  nop
    ctx->pc = 0x2677bcu;
    // NOP
    // 0x2677c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2677c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2677c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2677c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2677c8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2677c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2677cc: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2677CCu;
    SET_GPR_U32(ctx, 31, 0x2677D4u);
    ctx->pc = 0x2677D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2677CCu;
    // 0x2677d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2677CCu, 0x2677D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677D4u;
label_2677d4:
    // 0x2677d4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2677d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2677d8: 0x8e460220  lw          $a2, 0x220($s2)
    ctx->pc = 0x2677d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x2677dc: 0x246578f0  addiu       $a1, $v1, 0x78F0
    ctx->pc = 0x2677dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30960));
    // 0x2677e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2677e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2677e4: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2677E4u;
    {
        const bool branch_taken_0x2677e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677E4u;
        // 0x2677e8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677e4) {
            ctx->pc = 0x2677F0u;
            goto label_2677f0;
        }
    }
    ctx->pc = 0x2677ECu;
    // 0x2677ec: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x2677ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2677f0:
    // 0x2677f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2677f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2677f4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2677f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2677f8: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2677F8u;
    SET_GPR_U32(ctx, 31, 0x267800u);
    ctx->pc = 0x2677FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2677F8u;
    // 0x2677fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2677F8u, 0x267800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267800u;
label_267800:
    // 0x267800: 0xc64c0258  lwc1        $f12, 0x258($s2)
    ctx->pc = 0x267800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x267804: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267808: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26780c: 0x24a57908  addiu       $a1, $a1, 0x7908
    ctx->pc = 0x26780cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30984));
    // 0x267810: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x267810u;
    SET_GPR_U32(ctx, 31, 0x267818u);
    ctx->pc = 0x267814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267810u;
    // 0x267814: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x267810u, 0x267818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267818u;
label_267818:
    // 0x267818: 0xc64c025c  lwc1        $f12, 0x25C($s2)
    ctx->pc = 0x267818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26781c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26781cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267820: 0x24a57918  addiu       $a1, $a1, 0x7918
    ctx->pc = 0x267820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31000));
    // 0x267824: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267828: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x267828u;
    SET_GPR_U32(ctx, 31, 0x267830u);
    ctx->pc = 0x26782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267828u;
    // 0x26782c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x267828u, 0x267830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267830u;
label_267830:
    // 0x267830: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267834: 0xc64c0260  lwc1        $f12, 0x260($s2)
    ctx->pc = 0x267834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x267838: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x267838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26783c: 0x24a57928  addiu       $a1, $a1, 0x7928
    ctx->pc = 0x26783cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31016));
    // 0x267840: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x267840u;
    SET_GPR_U32(ctx, 31, 0x267848u);
    ctx->pc = 0x267844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267840u;
    // 0x267844: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x267840u, 0x267848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267848u;
label_267848:
    // 0x267848: 0x8e5002a8  lw          $s0, 0x2A8($s2)
    ctx->pc = 0x267848u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x26784c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x26784cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x267850: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x267850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x267854: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267854u;
    {
        const bool branch_taken_0x267854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267854u;
        // 0x267858: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267854) {
            ctx->pc = 0x26786Cu;
            goto label_26786c;
        }
    }
    ctx->pc = 0x26785Cu;
    // 0x26785c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267860: 0x24a57938  addiu       $a1, $a1, 0x7938
    ctx->pc = 0x267860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31032));
    // 0x267864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x267864u;
    {
        const bool branch_taken_0x267864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267864u;
        // 0x267868: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267864) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x26786Cu;
label_26786c:
    // 0x26786c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267870: 0x24a57938  addiu       $a1, $a1, 0x7938
    ctx->pc = 0x267870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31032));
    // 0x267874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267878:
    // 0x267878: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x267878u;
    SET_GPR_U32(ctx, 31, 0x267880u);
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x267878u, 0x267880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267880u;
label_267880:
    // 0x267880: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x267880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x267884: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x267884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x267888: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267888u;
    {
        const bool branch_taken_0x267888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267888u;
        // 0x26788c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267888) {
            ctx->pc = 0x2678A0u;
            goto label_2678a0;
        }
    }
    ctx->pc = 0x267890u;
    // 0x267890: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267894: 0x24a57948  addiu       $a1, $a1, 0x7948
    ctx->pc = 0x267894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31048));
    // 0x267898: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x267898u;
    {
        const bool branch_taken_0x267898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267898u;
        // 0x26789c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267898) {
            ctx->pc = 0x2678ACu;
            goto label_2678ac;
        }
    }
    ctx->pc = 0x2678A0u;
label_2678a0:
    // 0x2678a0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2678a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2678a4: 0x24a57948  addiu       $a1, $a1, 0x7948
    ctx->pc = 0x2678a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31048));
    // 0x2678a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2678a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2678ac:
    // 0x2678ac: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x2678ACu;
    SET_GPR_U32(ctx, 31, 0x2678B4u);
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x2678ACu, 0x2678B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2678B4u;
label_2678b4:
    // 0x2678b4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2678b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2678b8: 0x92460290  lbu         $a2, 0x290($s2)
    ctx->pc = 0x2678b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 656)));
    // 0x2678bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2678bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2678c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2678c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678c4: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x2678C4u;
    SET_GPR_U32(ctx, 31, 0x2678CCu);
    ctx->pc = 0x2678C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2678C4u;
    // 0x2678c8: 0x24a57958  addiu       $a1, $a1, 0x7958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x2678C4u, 0x2678CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2678CCu;
label_2678cc:
    // 0x2678cc: 0x92460299  lbu         $a2, 0x299($s2)
    ctx->pc = 0x2678ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 665)));
    // 0x2678d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2678d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2678d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2678d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678d8: 0x24a57b18  addiu       $a1, $a1, 0x7B18
    ctx->pc = 0x2678d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31512));
    // 0x2678dc: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x2678DCu;
    SET_GPR_U32(ctx, 31, 0x2678E4u);
    ctx->pc = 0x2678E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2678DCu;
    // 0x2678e0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x2678DCu, 0x2678E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2678E4u;
label_2678e4:
    // 0x2678e4: 0x9246029a  lbu         $a2, 0x29A($s2)
    ctx->pc = 0x2678e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
    // 0x2678e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2678e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2678ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2678ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678f0: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x2678f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
    // 0x2678f4: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x2678F4u;
    SET_GPR_U32(ctx, 31, 0x2678FCu);
    ctx->pc = 0x2678F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2678F4u;
    // 0x2678f8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x2678F4u, 0x2678FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2678FCu;
label_2678fc:
    // 0x2678fc: 0xc64c029c  lwc1        $f12, 0x29C($s2)
    ctx->pc = 0x2678fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x267900: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267904: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267908: 0x24a57998  addiu       $a1, $a1, 0x7998
    ctx->pc = 0x267908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31128));
    // 0x26790c: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x26790Cu;
    SET_GPR_U32(ctx, 31, 0x267914u);
    ctx->pc = 0x267910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26790Cu;
    // 0x267910: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x26790Cu, 0x267914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267914u;
label_267914:
    // 0x267914: 0x8e4602a0  lw          $a2, 0x2A0($s2)
    ctx->pc = 0x267914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
    // 0x267918: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26791c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267920: 0x24a579a8  addiu       $a1, $a1, 0x79A8
    ctx->pc = 0x267920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31144));
    // 0x267924: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x267924u;
    SET_GPR_U32(ctx, 31, 0x26792Cu);
    ctx->pc = 0x267928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267924u;
    // 0x267928: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x267924u, 0x26792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26792Cu;
label_26792c:
    // 0x26792c: 0x92460297  lbu         $a2, 0x297($s2)
    ctx->pc = 0x26792cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 663)));
    // 0x267930: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267934: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267938: 0x24a579c0  addiu       $a1, $a1, 0x79C0
    ctx->pc = 0x267938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31168));
    // 0x26793c: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x26793Cu;
    SET_GPR_U32(ctx, 31, 0x267944u);
    ctx->pc = 0x267940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26793Cu;
    // 0x267940: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x26793Cu, 0x267944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267944u;
label_267944:
    // 0x267944: 0x8e460224  lw          $a2, 0x224($s2)
    ctx->pc = 0x267944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x267948: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26794c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26794cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267950: 0x24a579d8  addiu       $a1, $a1, 0x79D8
    ctx->pc = 0x267950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31192));
    // 0x267954: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x267954u;
    SET_GPR_U32(ctx, 31, 0x26795Cu);
    ctx->pc = 0x267958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267954u;
    // 0x267958: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x267954u, 0x26795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26795Cu;
label_26795c:
    // 0x26795c: 0x8e460228  lw          $a2, 0x228($s2)
    ctx->pc = 0x26795cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
    // 0x267960: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267964: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267968: 0x24a579f0  addiu       $a1, $a1, 0x79F0
    ctx->pc = 0x267968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31216));
    // 0x26796c: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x26796Cu;
    SET_GPR_U32(ctx, 31, 0x267974u);
    ctx->pc = 0x267970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26796Cu;
    // 0x267970: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x26796Cu, 0x267974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267974u;
label_267974:
    // 0x267974: 0x92460244  lbu         $a2, 0x244($s2)
    ctx->pc = 0x267974u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 580)));
    // 0x267978: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26797c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26797cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267980: 0x24a57a00  addiu       $a1, $a1, 0x7A00
    ctx->pc = 0x267980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31232));
    // 0x267984: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x267984u;
    SET_GPR_U32(ctx, 31, 0x26798Cu);
    ctx->pc = 0x267988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267984u;
    // 0x267988: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x267984u, 0x26798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26798Cu;
label_26798c:
    // 0x26798c: 0x8e460230  lw          $a2, 0x230($s2)
    ctx->pc = 0x26798cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x267990: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267998: 0x24a57a20  addiu       $a1, $a1, 0x7A20
    ctx->pc = 0x267998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31264));
    // 0x26799c: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x26799Cu;
    SET_GPR_U32(ctx, 31, 0x2679A4u);
    ctx->pc = 0x2679A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26799Cu;
    // 0x2679a0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x26799Cu, 0x2679A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2679A4u;
label_2679a4:
    // 0x2679a4: 0x8e460238  lw          $a2, 0x238($s2)
    ctx->pc = 0x2679a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
    // 0x2679a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2679a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2679ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2679acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679b0: 0x24a57a40  addiu       $a1, $a1, 0x7A40
    ctx->pc = 0x2679b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31296));
    // 0x2679b4: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2679B4u;
    SET_GPR_U32(ctx, 31, 0x2679BCu);
    ctx->pc = 0x2679B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679B4u;
    // 0x2679b8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2679B4u, 0x2679BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2679BCu;
label_2679bc:
    // 0x2679bc: 0x8e460248  lw          $a2, 0x248($s2)
    ctx->pc = 0x2679bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 584)));
    // 0x2679c0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2679c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2679c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2679c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679c8: 0x24a57a60  addiu       $a1, $a1, 0x7A60
    ctx->pc = 0x2679c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31328));
    // 0x2679cc: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2679CCu;
    SET_GPR_U32(ctx, 31, 0x2679D4u);
    ctx->pc = 0x2679D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679CCu;
    // 0x2679d0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2679CCu, 0x2679D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2679D4u;
label_2679d4:
    // 0x2679d4: 0x8e460250  lw          $a2, 0x250($s2)
    ctx->pc = 0x2679d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x2679d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2679d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2679dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2679dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679e0: 0x24a57a78  addiu       $a1, $a1, 0x7A78
    ctx->pc = 0x2679e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31352));
    // 0x2679e4: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2679E4u;
    SET_GPR_U32(ctx, 31, 0x2679ECu);
    ctx->pc = 0x2679E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679E4u;
    // 0x2679e8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2679E4u, 0x2679ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2679ECu;
label_2679ec:
    // 0x2679ec: 0x92460247  lbu         $a2, 0x247($s2)
    ctx->pc = 0x2679ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 583)));
    // 0x2679f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2679f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2679f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2679f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679f8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2679f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2679fc: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x2679FCu;
    SET_GPR_U32(ctx, 31, 0x267A04u);
    ctx->pc = 0x267A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679FCu;
    // 0x267a00: 0x24a57a88  addiu       $a1, $a1, 0x7A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x2679FCu, 0x267A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A04u;
label_267a04:
    // 0x267a04: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x267a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x267a08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a0c: 0xc0b5ecc  jal         func_2D7B30
    ctx->pc = 0x267A0Cu;
    SET_GPR_U32(ctx, 31, 0x267A14u);
    ctx->pc = 0x267A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A0Cu;
    // 0x267a10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B30u, 0x267A0Cu, 0x267A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A14u;
label_267a14:
    // 0x267a14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x267a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x267a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267a1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x267a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x267a20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x267a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267a24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x267a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x267a28: 0x3e00008  jr          $ra
    ctx->pc = 0x267A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A28u;
        // 0x267a2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267A30u;
}
