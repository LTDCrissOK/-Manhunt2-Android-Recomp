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

// Function: sub_00120EE0
// Address: 0x120ee0 - 0x121030
void sub_00120EE0_0x120ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120EE0_0x120ee0");
#endif

    switch (ctx->pc) {
        case 0x120f20u: goto label_120f20;
        case 0x120f70u: goto label_120f70;
        case 0x120f78u: goto label_120f78;
        case 0x120f84u: goto label_120f84;
        case 0x120fa0u: goto label_120fa0;
        case 0x120fb0u: goto label_120fb0;
        case 0x120fc8u: goto label_120fc8;
        case 0x120fd4u: goto label_120fd4;
        default: break;
    }

    ctx->pc = 0x120ee0u;

    // 0x120ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x120ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x120ee4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x120ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x120ee8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120eec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120ef4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x120ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x120ef8: 0x26220324  addiu       $v0, $s1, 0x324
    ctx->pc = 0x120ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 804));
    // 0x120efc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x120efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x120f00: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x120f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120f04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x120f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x120f08: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x120f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x120f0c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x120f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x120f10: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x120f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x120f14: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x120f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x120f18: 0xae20030c  sw          $zero, 0x30C($s1)
    ctx->pc = 0x120f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 780), GPR_U32(ctx, 0));
    // 0x120f1c: 0x0  nop
    ctx->pc = 0x120f1cu;
    // NOP
label_120f20:
    // 0x120f20: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x120f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x120f24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x120f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x120f28: 0x0  nop
    ctx->pc = 0x120f28u;
    // NOP
    // 0x120f2c: 0x0  nop
    ctx->pc = 0x120f2cu;
    // NOP
    // 0x120f30: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x120F30u;
    {
        const bool branch_taken_0x120f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x120F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F30u;
        // 0x120f34: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f30) {
            ctx->pc = 0x120F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120f20;
        }
    }
    ctx->pc = 0x120F38u;
    // 0x120f38: 0xae200428  sw          $zero, 0x428($s1)
    ctx->pc = 0x120f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1064), GPR_U32(ctx, 0));
    // 0x120f3c: 0x26240830  addiu       $a0, $s1, 0x830
    ctx->pc = 0x120f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
    // 0x120f40: 0xae20042c  sw          $zero, 0x42C($s1)
    ctx->pc = 0x120f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1068), GPR_U32(ctx, 0));
    // 0x120f44: 0x26300870  addiu       $s0, $s1, 0x870
    ctx->pc = 0x120f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    // 0x120f48: 0xae200434  sw          $zero, 0x434($s1)
    ctx->pc = 0x120f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1076), GPR_U32(ctx, 0));
    // 0x120f4c: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x120f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x120f50: 0xae200438  sw          $zero, 0x438($s1)
    ctx->pc = 0x120f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1080), GPR_U32(ctx, 0));
    // 0x120f54: 0x26350a80  addiu       $s5, $s1, 0xA80
    ctx->pc = 0x120f54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
    // 0x120f58: 0xae20043c  sw          $zero, 0x43C($s1)
    ctx->pc = 0x120f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1084), GPR_U32(ctx, 0));
    // 0x120f5c: 0x26360e90  addiu       $s6, $s1, 0xE90
    ctx->pc = 0x120f5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 3728));
    // 0x120f60: 0xae200440  sw          $zero, 0x440($s1)
    ctx->pc = 0x120f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1088), GPR_U32(ctx, 0));
    // 0x120f64: 0x26340f94  addiu       $s4, $s1, 0xF94
    ctx->pc = 0x120f64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 3988));
    // 0x120f68: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x120F68u;
    SET_GPR_U32(ctx, 31, 0x120F70u);
    ctx->pc = 0x120F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F68u;
    // 0x120f6c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x120F68u, 0x120F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F70u;
label_120f70:
    // 0x120f70: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x120F70u;
    SET_GPR_U32(ctx, 31, 0x120F78u);
    ctx->pc = 0x120F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F70u;
    // 0x120f74: 0x26240850  addiu       $a0, $s1, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x120F70u, 0x120F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F78u;
label_120f78:
    // 0x120f78: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x120f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x120f7c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x120F7Cu;
    SET_GPR_U32(ctx, 31, 0x120F84u);
    ctx->pc = 0x120F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F7Cu;
    // 0x120f80: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x120F7Cu, 0x120F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F84u;
label_120f84:
    // 0x120f84: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x120f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x120f88: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x120F88u;
    {
        const bool branch_taken_0x120f88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x120F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F88u;
        // 0x120f8c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f88) {
            ctx->pc = 0x120F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120f78;
        }
    }
    ctx->pc = 0x120F90u;
    // 0x120f90: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x120f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f94: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x120f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x120f98: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x120f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120f9c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x120f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_120fa0:
    // 0x120fa0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x120fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x120fa4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x120fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x120fa8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x120FA8u;
    SET_GPR_U32(ctx, 31, 0x120FB0u);
    ctx->pc = 0x120FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120FA8u;
    // 0x120fac: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x120FA8u, 0x120FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120FB0u;
label_120fb0:
    // 0x120fb0: 0x5653fffb  bnel        $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x120FB0u;
    {
        const bool branch_taken_0x120fb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x120fb0) {
            ctx->pc = 0x120FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120FB0u;
            // 0x120fb4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120fa0;
        }
    }
    ctx->pc = 0x120FB8u;
    // 0x120fb8: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x120fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fbc: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x120fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x120fc0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x120fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120fc4: 0x0  nop
    ctx->pc = 0x120fc4u;
    // NOP
label_120fc8:
    // 0x120fc8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x120fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x120fcc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x120FCCu;
    SET_GPR_U32(ctx, 31, 0x120FD4u);
    ctx->pc = 0x120FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120FCCu;
    // 0x120fd0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x120FCCu, 0x120FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120FD4u;
label_120fd4:
    // 0x120fd4: 0x0  nop
    ctx->pc = 0x120fd4u;
    // NOP
    // 0x120fd8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x120FD8u;
    {
        const bool branch_taken_0x120fd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x120FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FD8u;
        // 0x120fdc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fd8) {
            ctx->pc = 0x120FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120fc8;
        }
    }
    ctx->pc = 0x120FE0u;
    // 0x120fe0: 0xae200f94  sw          $zero, 0xF94($s1)
    ctx->pc = 0x120fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3988), GPR_U32(ctx, 0));
    // 0x120fe4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x120fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fe8: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x120fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x120fec: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x120fecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x120ff0: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x120ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x120ff4: 0xae200fbc  sw          $zero, 0xFBC($s1)
    ctx->pc = 0x120ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4028), GPR_U32(ctx, 0));
    // 0x120ff8: 0xae200fc0  sw          $zero, 0xFC0($s1)
    ctx->pc = 0x120ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4032), GPR_U32(ctx, 0));
    // 0x120ffc: 0xae200fc4  sw          $zero, 0xFC4($s1)
    ctx->pc = 0x120ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4036), GPR_U32(ctx, 0));
    // 0x121000: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x121000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x121004: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x121004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x121008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12100c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12100cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121010: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121014: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x121014u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121018: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x121018u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12101c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12101cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x121020: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x121020u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121024: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x121024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x121028: 0x3e00008  jr          $ra
    ctx->pc = 0x121028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121028u;
        // 0x12102c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121030u;
}
