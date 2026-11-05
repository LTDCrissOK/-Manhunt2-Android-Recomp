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

// Function: sub_00158960
// Address: 0x158960 - 0x158a00
void sub_00158960_0x158960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158960_0x158960");
#endif

    switch (ctx->pc) {
        case 0x158960u: goto label_158960;
        case 0x158964u: goto label_158964;
        case 0x158968u: goto label_158968;
        case 0x15896cu: goto label_15896c;
        case 0x158970u: goto label_158970;
        case 0x158974u: goto label_158974;
        case 0x158978u: goto label_158978;
        case 0x15897cu: goto label_15897c;
        case 0x158980u: goto label_158980;
        case 0x158984u: goto label_158984;
        case 0x158988u: goto label_158988;
        case 0x15898cu: goto label_15898c;
        case 0x158990u: goto label_158990;
        case 0x158994u: goto label_158994;
        case 0x158998u: goto label_158998;
        case 0x15899cu: goto label_15899c;
        case 0x1589a0u: goto label_1589a0;
        case 0x1589a4u: goto label_1589a4;
        case 0x1589a8u: goto label_1589a8;
        case 0x1589acu: goto label_1589ac;
        case 0x1589b0u: goto label_1589b0;
        case 0x1589b4u: goto label_1589b4;
        case 0x1589b8u: goto label_1589b8;
        case 0x1589bcu: goto label_1589bc;
        case 0x1589c0u: goto label_1589c0;
        case 0x1589c4u: goto label_1589c4;
        case 0x1589c8u: goto label_1589c8;
        case 0x1589ccu: goto label_1589cc;
        case 0x1589d0u: goto label_1589d0;
        case 0x1589d4u: goto label_1589d4;
        case 0x1589d8u: goto label_1589d8;
        case 0x1589dcu: goto label_1589dc;
        case 0x1589e0u: goto label_1589e0;
        case 0x1589e4u: goto label_1589e4;
        case 0x1589e8u: goto label_1589e8;
        case 0x1589ecu: goto label_1589ec;
        case 0x1589f0u: goto label_1589f0;
        case 0x1589f4u: goto label_1589f4;
        case 0x1589f8u: goto label_1589f8;
        case 0x1589fcu: goto label_1589fc;
        default: break;
    }

    ctx->pc = 0x158960u;

label_158960:
    // 0x158960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_158964:
    // 0x158964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158968:
    // 0x158968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15896c:
    // 0x15896c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158970:
    // 0x158970: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_158974:
    // 0x158974: 0xc04f2a8  jal         func_13CAA0
label_158978:
    if (ctx->pc == 0x158978u) {
        ctx->pc = 0x158978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158974u;
        // 0x158978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15897Cu;
        goto label_15897c;
    }
    ctx->pc = 0x158974u;
    SET_GPR_U32(ctx, 31, 0x15897Cu);
    ctx->pc = 0x158978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158974u;
    // 0x158978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CAA0u, 0x158974u, 0x15897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15897Cu;
label_15897c:
    // 0x15897c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15897cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158980:
    // 0x158980: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x158980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_158984:
    // 0x158984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158988:
    // 0x158988: 0xc04f33e  jal         func_13CCF8
label_15898c:
    if (ctx->pc == 0x15898Cu) {
        ctx->pc = 0x15898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158988u;
        // 0x15898c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158990u;
        goto label_158990;
    }
    ctx->pc = 0x158988u;
    SET_GPR_U32(ctx, 31, 0x158990u);
    ctx->pc = 0x15898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158988u;
    // 0x15898c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x158988u, 0x158990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158990u;
label_158990:
    // 0x158990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158994:
    // 0x158994: 0xc04f0b6  jal         func_13C2D8
label_158998:
    if (ctx->pc == 0x158998u) {
        ctx->pc = 0x158998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158994u;
        // 0x158998: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15899Cu;
        goto label_15899c;
    }
    ctx->pc = 0x158994u;
    SET_GPR_U32(ctx, 31, 0x15899Cu);
    ctx->pc = 0x158998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158994u;
    // 0x158998: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x158994u, 0x15899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15899Cu;
label_15899c:
    // 0x15899c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15899cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1589a0:
    // 0x1589a0: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x1589a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_1589a4:
    // 0x1589a4: 0xc045fea  jal         func_117FA8
label_1589a8:
    if (ctx->pc == 0x1589A8u) {
        ctx->pc = 0x1589A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589A4u;
        // 0x1589a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589ACu;
        goto label_1589ac;
    }
    ctx->pc = 0x1589A4u;
    SET_GPR_U32(ctx, 31, 0x1589ACu);
    ctx->pc = 0x1589A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589A4u;
    // 0x1589a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1589A4u, 0x1589ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589ACu;
label_1589ac:
    // 0x1589ac: 0x8e05030c  lw          $a1, 0x30C($s0)
    ctx->pc = 0x1589acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
label_1589b0:
    // 0x1589b0: 0xc046256  jal         func_118958
label_1589b4:
    if (ctx->pc == 0x1589B4u) {
        ctx->pc = 0x1589B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589B0u;
        // 0x1589b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589B8u;
        goto label_1589b8;
    }
    ctx->pc = 0x1589B0u;
    SET_GPR_U32(ctx, 31, 0x1589B8u);
    ctx->pc = 0x1589B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589B0u;
    // 0x1589b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x1589B0u, 0x1589B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589B8u;
label_1589b8:
    // 0x1589b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1589b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1589bc:
    // 0x1589bc: 0xc046104  jal         func_118410
label_1589c0:
    if (ctx->pc == 0x1589C0u) {
        ctx->pc = 0x1589C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589BCu;
        // 0x1589c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589C4u;
        goto label_1589c4;
    }
    ctx->pc = 0x1589BCu;
    SET_GPR_U32(ctx, 31, 0x1589C4u);
    ctx->pc = 0x1589C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589BCu;
    // 0x1589c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x1589BCu, 0x1589C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589C4u;
label_1589c4:
    // 0x1589c4: 0xc60c0310  lwc1        $f12, 0x310($s0)
    ctx->pc = 0x1589c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1589c8:
    // 0x1589c8: 0xc046290  jal         func_118A40
label_1589cc:
    if (ctx->pc == 0x1589CCu) {
        ctx->pc = 0x1589CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589C8u;
        // 0x1589cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589D0u;
        goto label_1589d0;
    }
    ctx->pc = 0x1589C8u;
    SET_GPR_U32(ctx, 31, 0x1589D0u);
    ctx->pc = 0x1589CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589C8u;
    // 0x1589cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x1589C8u, 0x1589D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589D0u;
label_1589d0:
    // 0x1589d0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1589d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1589d4:
    // 0x1589d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1589d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1589d8:
    // 0x1589d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1589d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1589dc:
    // 0x1589dc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1589dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1589e0:
    // 0x1589e0: 0x40f809  jalr        $v0
label_1589e4:
    if (ctx->pc == 0x1589E4u) {
        ctx->pc = 0x1589E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589E0u;
        // 0x1589e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589E8u;
        goto label_1589e8;
    }
    ctx->pc = 0x1589E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1589E8u);
        ctx->pc = 0x1589E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589E0u;
        // 0x1589e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1589E0u, 0x1589E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1589E8u;
label_1589e8:
    // 0x1589e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1589e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1589ec:
    // 0x1589ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1589ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1589f0:
    // 0x1589f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1589f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1589f4:
    // 0x1589f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1589f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1589f8:
    // 0x1589f8: 0x3e00008  jr          $ra
label_1589fc:
    if (ctx->pc == 0x1589FCu) {
        ctx->pc = 0x1589FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589F8u;
        // 0x1589fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A00u;
        goto label_fallthrough_0x1589f8;
    }
    ctx->pc = 0x1589F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1589FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589F8u;
        // 0x1589fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1589F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1589f8:
    ctx->pc = 0x158A00u;
}
