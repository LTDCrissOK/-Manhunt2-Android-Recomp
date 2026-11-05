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

// Function: sub_0037F848
// Address: 0x37f848 - 0x37f918
void sub_0037F848_0x37f848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F848_0x37f848");
#endif

    switch (ctx->pc) {
        case 0x37f860u: goto label_37f860;
        case 0x37f86cu: goto label_37f86c;
        case 0x37f8acu: goto label_37f8ac;
        case 0x37f8fcu: goto label_37f8fc;
        default: break;
    }

    ctx->pc = 0x37f848u;

    // 0x37f848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37f848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37f84c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x37f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x37f850: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x37f850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x37f854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37f854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37f858: 0xc0e031e  jal         func_380C78
    ctx->pc = 0x37F858u;
    SET_GPR_U32(ctx, 31, 0x37F860u);
    ctx->pc = 0x37F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F858u;
    // 0x37f85c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380C78u, 0x37F858u, 0x37F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F860u;
label_37f860:
    // 0x37f860: 0x261100b0  addiu       $s1, $s0, 0xB0
    ctx->pc = 0x37f860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x37f864: 0xc0e023a  jal         func_3808E8
    ctx->pc = 0x37F864u;
    SET_GPR_U32(ctx, 31, 0x37F86Cu);
    ctx->pc = 0x37F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F864u;
    // 0x37f868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3808E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3808E8u, 0x37F864u, 0x37F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F86Cu;
label_37f86c:
    // 0x37f86c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x37f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x37f870: 0x260400ec  addiu       $a0, $s0, 0xEC
    ctx->pc = 0x37f870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x37f874: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x37f874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x37f878: 0x260200f8  addiu       $v0, $s0, 0xF8
    ctx->pc = 0x37f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x37f87c: 0xae0300ec  sw          $v1, 0xEC($s0)
    ctx->pc = 0x37f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
    // 0x37f880: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x37f880u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x37f884: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x37f884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x37f888: 0x258c8048  addiu       $t4, $t4, -0x7FB8
    ctx->pc = 0x37f888u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294934600));
    // 0x37f88c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x37f88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x37f890: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x37f890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x37f894: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x37f894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x37f898: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37f898u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x37f89c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x37f89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x37f8a0: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x37f8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x37f8a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x37f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x37f8a8: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x37f8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
label_37f8ac:
    // 0x37f8ac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x37f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x37f8b0: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x37f8b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x37f8b4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x37f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x37f8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f8bc: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x37f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x37f8c0: 0x24a57990  addiu       $a1, $a1, 0x7990
    ctx->pc = 0x37f8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31120));
    // 0x37f8c4: 0xae310064  sw          $s1, 0x64($s1)
    ctx->pc = 0x37f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 17));
    // 0x37f8c8: 0x24c6a0e0  addiu       $a2, $a2, -0x5F20
    ctx->pc = 0x37f8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942944));
    // 0x37f8cc: 0xae310060  sw          $s1, 0x60($s1)
    ctx->pc = 0x37f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 17));
    // 0x37f8d0: 0x24e750a0  addiu       $a3, $a3, 0x50A0
    ctx->pc = 0x37f8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20640));
    // 0x37f8d4: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x37f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x37f8d8: 0x25085aa0  addiu       $t0, $t0, 0x5AA0
    ctx->pc = 0x37f8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23200));
    // 0x37f8dc: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x37f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x37f8e0: 0x2529cd88  addiu       $t1, $t1, -0x3278
    ctx->pc = 0x37f8e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954376));
    // 0x37f8e4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x37f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x37f8e8: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x37f8e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f8ec: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x37f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x37f8f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x37f8f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f8f4: 0xc0dfe98  jal         func_37FA60
    ctx->pc = 0x37F8F4u;
    SET_GPR_U32(ctx, 31, 0x37F8FCu);
    ctx->pc = 0x37F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F8F4u;
    // 0x37f8f8: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA60u, 0x37F8F4u, 0x37F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F8FCu;
label_37f8fc:
    // 0x37f8fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37f8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f900: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x37f900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37f904: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x37f904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f908: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37f908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37f90c: 0x3e00008  jr          $ra
    ctx->pc = 0x37F90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F90Cu;
        // 0x37f910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F914u;
    // 0x37f914: 0x0  nop
    ctx->pc = 0x37f914u;
    // NOP
    ctx->pc = 0x37f918u;
}
