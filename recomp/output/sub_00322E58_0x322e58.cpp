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

// Function: sub_00322E58
// Address: 0x322e58 - 0x322f70
void sub_00322E58_0x322e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322E58_0x322e58");
#endif

    switch (ctx->pc) {
        case 0x322e98u: goto label_322e98;
        case 0x322ea0u: goto label_322ea0;
        case 0x322ef0u: goto label_322ef0;
        case 0x322f20u: goto label_322f20;
        default: break;
    }

    ctx->pc = 0x322e58u;

    // 0x322e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x322e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x322e5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x322e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x322e60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x322e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x322e64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x322e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x322e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x322e6c: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x322e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x322e70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x322e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322e74: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x322e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x322e78: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x322e78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x322e7c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x322E7Cu;
    {
        const bool branch_taken_0x322e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E7Cu;
        // 0x322e80: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e7c) {
            ctx->pc = 0x322F58u;
            goto label_322f58;
        }
    }
    ctx->pc = 0x322E84u;
    // 0x322e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e88: 0x2610d768  addiu       $s0, $s0, -0x2898
    ctx->pc = 0x322e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956904));
    // 0x322e8c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x322e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x322e90: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x322E90u;
    SET_GPR_U32(ctx, 31, 0x322E98u);
    ctx->pc = 0x322E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E90u;
    // 0x322e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x322E90u, 0x322E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E98u;
label_322e98:
    // 0x322e98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x322e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322e9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322ea0:
    // 0x322ea0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x322ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x322ea4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x322ea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x322ea8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x322ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x322eac: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x322eacu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x322eb0: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x322eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x322eb4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x322eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x322eb8: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x322eb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x322ebc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x322EBCu;
    {
        const bool branch_taken_0x322ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EBCu;
        // 0x322ec0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ebc) {
            ctx->pc = 0x322EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322ea0;
        }
    }
    ctx->pc = 0x322EC4u;
    // 0x322ec4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x322ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x322ec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x322ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ecc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x322eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322ed0: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x322ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x322ed4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x322ed4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x322ed8: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x322ED8u;
    {
        const bool branch_taken_0x322ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322ED8u;
        // 0x322edc: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ed8) {
            ctx->pc = 0x322F58u;
            goto label_322f58;
        }
    }
    ctx->pc = 0x322EE0u;
    // 0x322ee0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x322ee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ee4: 0x244cd768  addiu       $t4, $v0, -0x2898
    ctx->pc = 0x322ee4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956904));
    // 0x322ee8: 0x9502000e  lhu         $v0, 0xE($t0)
    ctx->pc = 0x322ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x322eec: 0x0  nop
    ctx->pc = 0x322eecu;
    // NOP
label_322ef0:
    // 0x322ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ef4: 0x9505000c  lhu         $a1, 0xC($t0)
    ctx->pc = 0x322ef4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x322ef8: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x322ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x322efc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x322efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x322f00: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x322F00u;
    {
        const bool branch_taken_0x322f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F00u;
        // 0x322f04: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f00) {
            ctx->pc = 0x322F4Cu;
            goto label_322f4c;
        }
    }
    ctx->pc = 0x322F08u;
    // 0x322f08: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x322f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x322f0c: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x322f0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322f10: 0x4c3821  addu        $a3, $v0, $t4
    ctx->pc = 0x322f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x322f14: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x322f14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322f18: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x322f18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322f1c: 0x0  nop
    ctx->pc = 0x322f1cu;
    // NOP
label_322f20:
    // 0x322f20: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x322f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x322f24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x322f24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x322f28: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x322f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x322f2c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x322f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x322f30: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x322f30u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x322f34: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x322f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322f38: 0xc9282a  slt         $a1, $a2, $t1
    ctx->pc = 0x322f38u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x322f3c: 0x4b1004  sllv        $v0, $t3, $v0
    ctx->pc = 0x322f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x322f40: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x322f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x322f44: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x322F44u;
    {
        const bool branch_taken_0x322f44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x322F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F44u;
        // 0x322f48: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f44) {
            ctx->pc = 0x322F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322f20;
        }
    }
    ctx->pc = 0x322F4Cu;
label_322f4c:
    // 0x322f4c: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x322f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x322f50: 0x5500ffe7  bnel        $t0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x322F50u;
    {
        const bool branch_taken_0x322f50 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x322f50) {
            ctx->pc = 0x322F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322F50u;
            // 0x322f54: 0x9502000e  lhu         $v0, 0xE($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322ef0;
        }
    }
    ctx->pc = 0x322F58u;
label_322f58:
    // 0x322f58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x322f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322f5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x322f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x322f60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322f64: 0x3e00008  jr          $ra
    ctx->pc = 0x322F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F64u;
        // 0x322f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322F6Cu;
    // 0x322f6c: 0x0  nop
    ctx->pc = 0x322f6cu;
    // NOP
    ctx->pc = 0x322f70u;
}
