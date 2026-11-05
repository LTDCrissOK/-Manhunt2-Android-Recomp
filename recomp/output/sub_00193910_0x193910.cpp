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

// Function: sub_00193910
// Address: 0x193910 - 0x1939c0
void sub_00193910_0x193910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193910_0x193910");
#endif

    switch (ctx->pc) {
        case 0x193934u: goto label_193934;
        case 0x193948u: goto label_193948;
        case 0x193988u: goto label_193988;
        case 0x193994u: goto label_193994;
        default: break;
    }

    ctx->pc = 0x193910u;

    // 0x193910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19391c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19391cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193920: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x193920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193928: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x193928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19392c: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x19392Cu;
    SET_GPR_U32(ctx, 31, 0x193934u);
    ctx->pc = 0x193930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19392Cu;
    // 0x193930: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x19392Cu, 0x193934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193934u;
label_193934:
    // 0x193934: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x193934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x193938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19393c: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x19393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x193940: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x193940u;
    SET_GPR_U32(ctx, 31, 0x193948u);
    ctx->pc = 0x193944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193940u;
    // 0x193944: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x193940u, 0x193948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193948u;
label_193948:
    // 0x193948: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x193948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x19394c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x193950: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x193950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x193954: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x193954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x193958: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x193958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x19395c: 0x2603005c  addiu       $v1, $s0, 0x5C
    ctx->pc = 0x19395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x193960: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x193960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x193964: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x193964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x193968: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x193968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x19396c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x19396cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x193970: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x193970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x193974: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x193974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x193978: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x193978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x19397c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19397cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x193980: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x193980u;
    SET_GPR_U32(ctx, 31, 0x193988u);
    ctx->pc = 0x193984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193980u;
    // 0x193984: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x193980u, 0x193988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193988u;
label_193988:
    // 0x193988: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x193988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19398c: 0xc0644de  jal         func_191378
    ctx->pc = 0x19398Cu;
    SET_GPR_U32(ctx, 31, 0x193994u);
    ctx->pc = 0x193990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19398Cu;
    // 0x193990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191378u, 0x19398Cu, 0x193994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193994u;
label_193994:
    // 0x193994: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x193994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x193998: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x193998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x19399c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19399cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1939a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1939a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1939a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1939a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1939a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1939ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1939acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1939b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1939b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1939b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1939B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1939B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939B4u;
        // 0x1939b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1939B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1939BCu;
    // 0x1939bc: 0x0  nop
    ctx->pc = 0x1939bcu;
    // NOP
    ctx->pc = 0x1939c0u;
}
