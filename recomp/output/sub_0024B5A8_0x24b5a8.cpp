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

// Function: sub_0024B5A8
// Address: 0x24b5a8 - 0x24b650
void sub_0024B5A8_0x24b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B5A8_0x24b5a8");
#endif

    switch (ctx->pc) {
        case 0x24b5a8u: goto label_24b5a8;
        case 0x24b5acu: goto label_24b5ac;
        case 0x24b5b0u: goto label_24b5b0;
        case 0x24b5b4u: goto label_24b5b4;
        case 0x24b5b8u: goto label_24b5b8;
        case 0x24b5bcu: goto label_24b5bc;
        case 0x24b5c0u: goto label_24b5c0;
        case 0x24b5c4u: goto label_24b5c4;
        case 0x24b5c8u: goto label_24b5c8;
        case 0x24b5ccu: goto label_24b5cc;
        case 0x24b5d0u: goto label_24b5d0;
        case 0x24b5d4u: goto label_24b5d4;
        case 0x24b5d8u: goto label_24b5d8;
        case 0x24b5dcu: goto label_24b5dc;
        case 0x24b5e0u: goto label_24b5e0;
        case 0x24b5e4u: goto label_24b5e4;
        case 0x24b5e8u: goto label_24b5e8;
        case 0x24b5ecu: goto label_24b5ec;
        case 0x24b5f0u: goto label_24b5f0;
        case 0x24b5f4u: goto label_24b5f4;
        case 0x24b5f8u: goto label_24b5f8;
        case 0x24b5fcu: goto label_24b5fc;
        case 0x24b600u: goto label_24b600;
        case 0x24b604u: goto label_24b604;
        case 0x24b608u: goto label_24b608;
        case 0x24b60cu: goto label_24b60c;
        case 0x24b610u: goto label_24b610;
        case 0x24b614u: goto label_24b614;
        case 0x24b618u: goto label_24b618;
        case 0x24b61cu: goto label_24b61c;
        case 0x24b620u: goto label_24b620;
        case 0x24b624u: goto label_24b624;
        case 0x24b628u: goto label_24b628;
        case 0x24b62cu: goto label_24b62c;
        case 0x24b630u: goto label_24b630;
        case 0x24b634u: goto label_24b634;
        case 0x24b638u: goto label_24b638;
        case 0x24b63cu: goto label_24b63c;
        case 0x24b640u: goto label_24b640;
        case 0x24b644u: goto label_24b644;
        case 0x24b648u: goto label_24b648;
        case 0x24b64cu: goto label_24b64c;
        default: break;
    }

    ctx->pc = 0x24b5a8u;

label_24b5a8:
    // 0x24b5a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_24b5ac:
    // 0x24b5ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24b5b0:
    // 0x24b5b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24b5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_24b5b4:
    // 0x24b5b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_24b5b8:
    // 0x24b5b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24b5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24b5bc:
    // 0x24b5bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x24b5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_24b5c0:
    // 0x24b5c0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x24b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_24b5c4:
    // 0x24b5c4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x24b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_24b5c8:
    // 0x24b5c8: 0x60f809  jalr        $v1
label_24b5cc:
    if (ctx->pc == 0x24B5CCu) {
        ctx->pc = 0x24B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5C8u;
        // 0x24b5cc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5D0u;
        goto label_24b5d0;
    }
    ctx->pc = 0x24B5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24B5D0u);
        ctx->pc = 0x24B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5C8u;
        // 0x24b5cc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B5C8u, 0x24B5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B5D0u;
label_24b5d0:
    // 0x24b5d0: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x24b5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_24b5d4:
    // 0x24b5d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24b5d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24b5d8:
    // 0x24b5d8: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x24b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b5dc:
    // 0x24b5dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24b5dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24b5e0:
    // 0x24b5e0: 0xc0f6a96  jal         func_3DAA58
label_24b5e4:
    if (ctx->pc == 0x24B5E4u) {
        ctx->pc = 0x24B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5E0u;
        // 0x24b5e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5E8u;
        goto label_24b5e8;
    }
    ctx->pc = 0x24B5E0u;
    SET_GPR_U32(ctx, 31, 0x24B5E8u);
    ctx->pc = 0x24B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5E0u;
    // 0x24b5e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24B5E0u, 0x24B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5E8u;
label_24b5e8:
    // 0x24b5e8: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x24b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b5ec:
    // 0x24b5ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24b5f0:
    // 0x24b5f0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x24b5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b5f4:
    // 0x24b5f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24b5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24b5f8:
    // 0x24b5f8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x24b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24b5fc:
    // 0x24b5fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24b5fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_24b600:
    // 0x24b600: 0xc6230034  lwc1        $f3, 0x34($s1)
    ctx->pc = 0x24b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24b604:
    // 0x24b604: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x24b604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_24b608:
    // 0x24b608: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24b608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_24b60c:
    // 0x24b60c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x24b60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24b610:
    // 0x24b610: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x24b610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b614:
    // 0x24b614: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24b614u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_24b618:
    // 0x24b618: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x24b618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24b61c:
    // 0x24b61c: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x24b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b620:
    // 0x24b620: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24b620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_24b624:
    // 0x24b624: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x24b624u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_24b628:
    // 0x24b628: 0xc0b7264  jal         func_2DC990
label_24b62c:
    if (ctx->pc == 0x24B62Cu) {
        ctx->pc = 0x24B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B628u;
        // 0x24b62c: 0xe7a30004  swc1        $f3, 0x4($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B630u;
        goto label_24b630;
    }
    ctx->pc = 0x24B628u;
    SET_GPR_U32(ctx, 31, 0x24B630u);
    ctx->pc = 0x24B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B628u;
    // 0x24b62c: 0xe7a30004  swc1        $f3, 0x4($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x24B628u, 0x24B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B630u;
label_24b630:
    // 0x24b630: 0xc0b814e  jal         func_2E0538
label_24b634:
    if (ctx->pc == 0x24B634u) {
        ctx->pc = 0x24B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B630u;
        // 0x24b634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B638u;
        goto label_24b638;
    }
    ctx->pc = 0x24B630u;
    SET_GPR_U32(ctx, 31, 0x24B638u);
    ctx->pc = 0x24B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B630u;
    // 0x24b634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0538u, 0x24B630u, 0x24B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B638u;
label_24b638:
    // 0x24b638: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24b638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24b63c:
    // 0x24b63c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24b63cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24b640:
    // 0x24b640: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24b640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24b644:
    // 0x24b644: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24b644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_24b648:
    // 0x24b648: 0x3e00008  jr          $ra
label_24b64c:
    if (ctx->pc == 0x24B64Cu) {
        ctx->pc = 0x24B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B648u;
        // 0x24b64c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B650u;
        goto label_fallthrough_0x24b648;
    }
    ctx->pc = 0x24B648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B648u;
        // 0x24b64c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24b648:
    ctx->pc = 0x24B650u;
}
