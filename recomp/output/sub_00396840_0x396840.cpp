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

// Function: sub_00396840
// Address: 0x396840 - 0x396998
void sub_00396840_0x396840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396840_0x396840");
#endif

    switch (ctx->pc) {
        case 0x396878u: goto label_396878;
        case 0x396880u: goto label_396880;
        case 0x396890u: goto label_396890;
        case 0x3968b0u: goto label_3968b0;
        case 0x396908u: goto label_396908;
        case 0x396910u: goto label_396910;
        case 0x396918u: goto label_396918;
        case 0x396920u: goto label_396920;
        case 0x396940u: goto label_396940;
        default: break;
    }

    ctx->pc = 0x396840u;

    // 0x396840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x396844: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x396844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x396848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x396848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39684c: 0x24711900  addiu       $s1, $v1, 0x1900
    ctx->pc = 0x39684cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 6400));
    // 0x396850: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x396850u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x401900u));
    // 0x396854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x396854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396858: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x396858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39685c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396860: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x396860u;
    {
        const bool branch_taken_0x396860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396860u;
        // 0x396864: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396860) {
            ctx->pc = 0x396890u;
            goto label_396890;
        }
    }
    ctx->pc = 0x396868u;
    // 0x396868: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x396868u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x39686c: 0x26101958  addiu       $s0, $s0, 0x1958
    ctx->pc = 0x39686cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6488));
    // 0x396870: 0xc0e5ba2  jal         func_396E88
    ctx->pc = 0x396870u;
    SET_GPR_U32(ctx, 31, 0x396878u);
    ctx->pc = 0x396874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396870u;
    // 0x396874: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E88u, 0x396870u, 0x396878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396878u;
label_396878:
    // 0x396878: 0xc0f2624  jal         func_3C9890
    ctx->pc = 0x396878u;
    SET_GPR_U32(ctx, 31, 0x396880u);
    ctx->pc = 0x39687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396878u;
    // 0x39687c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9890u, 0x396878u, 0x396880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396880u;
label_396880:
    // 0x396880: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x396880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x396884: 0x8c6591f0  lw          $a1, -0x6E10($v1)
    ctx->pc = 0x396884u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4091F0u));
    // 0x396888: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x396888u;
    SET_GPR_U32(ctx, 31, 0x396890u);
    ctx->pc = 0x39688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396888u;
    // 0x39688c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x396888u, 0x396890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396890u;
label_396890:
    // 0x396890: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x396890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x396894: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x396894u;
    {
        const bool branch_taken_0x396894 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x396894) {
            ctx->pc = 0x396898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396894u;
            // 0x396898: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39689Cu;
            goto label_39689c;
        }
    }
    ctx->pc = 0x39689Cu;
label_39689c:
    // 0x39689c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39689cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3968a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3968a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3968a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3968a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3968a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3968A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3968ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968A8u;
        // 0x3968ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3968A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3968B0u;
label_3968b0:
    // 0x3968b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3968b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3968b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3968b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3968b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3968b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3968bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3968bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3968c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3968c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3968c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3968c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3968c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3968c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3968cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3968ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3968d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3968d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3968d4: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3968D4u;
    {
        const bool branch_taken_0x3968d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3968D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968D4u;
        // 0x3968d8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3968d4) {
            ctx->pc = 0x396970u;
            goto label_396970;
        }
    }
    ctx->pc = 0x3968DCu;
    // 0x3968dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3968dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3968e0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3968e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3968e4: 0x8c4518d0  lw          $a1, 0x18D0($v0)
    ctx->pc = 0x3968e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4018D0u));
    // 0x3968e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3968e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3968ec: 0x26101904  addiu       $s0, $s0, 0x1904
    ctx->pc = 0x3968ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6404));
    // 0x3968f0: 0x3c120beb  lui         $s2, 0xBEB
    ctx->pc = 0x3968f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3051 << 16));
    // 0x3968f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3968f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x401904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x401904u, _value); } while (0);
    // 0x3968f8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3968f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3968fc: 0x3652c1ff  ori         $s2, $s2, 0xC1FF
    ctx->pc = 0x3968fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)49663);
    // 0x396900: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x396900u;
    SET_GPR_U32(ctx, 31, 0x396908u);
    ctx->pc = 0x396904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396900u;
    // 0x396904: 0x3c140048  lui         $s4, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x396900u, 0x396908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396908u;
label_396908:
    // 0x396908: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x396908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39690c: 0x0  nop
    ctx->pc = 0x39690cu;
    // NOP
label_396910:
    // 0x396910: 0xc0e5b6e  jal         func_396DB8
    ctx->pc = 0x396910u;
    SET_GPR_U32(ctx, 31, 0x396918u);
    ctx->pc = 0x396914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396910u;
    // 0x396914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396DB8u, 0x396910u, 0x396918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396918u;
label_396918:
    // 0x396918: 0xc0e5b88  jal         func_396E20
    ctx->pc = 0x396918u;
    SET_GPR_U32(ctx, 31, 0x396920u);
    ctx->pc = 0x39691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396918u;
    // 0x39691c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E20u, 0x396918u, 0x396920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396920u;
label_396920:
    // 0x396920: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x396920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x396924: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x396924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x396928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x396928u;
    {
        const bool branch_taken_0x396928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396928u;
        // 0x39692c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396928) {
            ctx->pc = 0x396940u;
            goto label_396940;
        }
    }
    ctx->pc = 0x396930u;
    // 0x396930: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x396930u;
    {
        const bool branch_taken_0x396930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x396930) {
            ctx->pc = 0x396910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396910;
        }
    }
    ctx->pc = 0x396938u;
    // 0x396938: 0xc0eb2bc  jal         func_3ACAF0
    ctx->pc = 0x396938u;
    SET_GPR_U32(ctx, 31, 0x396940u);
    ctx->pc = 0x39693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396938u;
    // 0x39693c: 0x2684b018  addiu       $a0, $s4, -0x4FE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACAF0u, 0x396938u, 0x396940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396940u;
label_396940:
    // 0x396940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x396940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x396944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396948: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x396948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39694c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x39694cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x396950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x396954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396958: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x396958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39695c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39695cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396960: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x396960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396964: 0x80f260c  j           func_3C9830
    ctx->pc = 0x396964u;
    ctx->pc = 0x396968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396964u;
    // 0x396968: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    sub_003C9830_0x3c9830(rdram, ctx, runtime); return;
    ctx->pc = 0x39696Cu;
    // 0x39696c: 0x0  nop
    ctx->pc = 0x39696cu;
    // NOP
label_396970:
    // 0x396970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x396974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396978: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x396978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39697c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39697cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x396980: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x396980u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396984: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x396984u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x396988: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x396988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39698c: 0x3e00008  jr          $ra
    ctx->pc = 0x39698Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39698Cu;
        // 0x396990: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39698Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396994u;
    // 0x396994: 0x0  nop
    ctx->pc = 0x396994u;
    // NOP
    ctx->pc = 0x396998u;
}
