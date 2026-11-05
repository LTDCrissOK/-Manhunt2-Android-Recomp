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

// Function: sub_00250E68
// Address: 0x250e68 - 0x251118
void sub_00250E68_0x250e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250E68_0x250e68");
#endif

    switch (ctx->pc) {
        case 0x250e80u: goto label_250e80;
        case 0x250ec0u: goto label_250ec0;
        case 0x250f68u: goto label_250f68;
        case 0x250f70u: goto label_250f70;
        case 0x250fb4u: goto label_250fb4;
        case 0x250fbcu: goto label_250fbc;
        case 0x250fe0u: goto label_250fe0;
        case 0x250fecu: goto label_250fec;
        case 0x250ff8u: goto label_250ff8;
        case 0x251004u: goto label_251004;
        case 0x251010u: goto label_251010;
        case 0x251018u: goto label_251018;
        case 0x251028u: goto label_251028;
        case 0x251030u: goto label_251030;
        case 0x251038u: goto label_251038;
        case 0x251048u: goto label_251048;
        case 0x251050u: goto label_251050;
        case 0x25105cu: goto label_25105c;
        case 0x251068u: goto label_251068;
        case 0x251074u: goto label_251074;
        case 0x251080u: goto label_251080;
        case 0x25108cu: goto label_25108c;
        case 0x251098u: goto label_251098;
        case 0x2510a4u: goto label_2510a4;
        case 0x2510e4u: goto label_2510e4;
        case 0x2510fcu: goto label_2510fc;
        default: break;
    }

    ctx->pc = 0x250e68u;

    // 0x250e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x250e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x250e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x250e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x250e78: 0xc089a9c  jal         func_226A70
    ctx->pc = 0x250E78u;
    SET_GPR_U32(ctx, 31, 0x250E80u);
    ctx->pc = 0x250E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E78u;
    // 0x250e7c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A70u, 0x250E78u, 0x250E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E80u;
label_250e80:
    // 0x250e80: 0x26301040  addiu       $s0, $s1, 0x1040
    ctx->pc = 0x250e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4160));
    // 0x250e84: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x250e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x250e88: 0xae200fe4  sw          $zero, 0xFE4($s1)
    ctx->pc = 0x250e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4068), GPR_U32(ctx, 0));
    // 0x250e8c: 0x24631c80  addiu       $v1, $v1, 0x1C80
    ctx->pc = 0x250e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7296));
    // 0x250e90: 0xae200fe8  sw          $zero, 0xFE8($s1)
    ctx->pc = 0x250e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4072), GPR_U32(ctx, 0));
    // 0x250e94: 0xae200fec  sw          $zero, 0xFEC($s1)
    ctx->pc = 0x250e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4076), GPR_U32(ctx, 0));
    // 0x250e98: 0x26241010  addiu       $a0, $s1, 0x1010
    ctx->pc = 0x250e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4112));
    // 0x250e9c: 0xae200ff0  sw          $zero, 0xFF0($s1)
    ctx->pc = 0x250e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4080), GPR_U32(ctx, 0));
    // 0x250ea0: 0xae200ff4  sw          $zero, 0xFF4($s1)
    ctx->pc = 0x250ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4084), GPR_U32(ctx, 0));
    // 0x250ea4: 0xae200ff8  sw          $zero, 0xFF8($s1)
    ctx->pc = 0x250ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4088), GPR_U32(ctx, 0));
    // 0x250ea8: 0xae200ffc  sw          $zero, 0xFFC($s1)
    ctx->pc = 0x250ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4092), GPR_U32(ctx, 0));
    // 0x250eac: 0xae201000  sw          $zero, 0x1000($s1)
    ctx->pc = 0x250eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4096), GPR_U32(ctx, 0));
    // 0x250eb0: 0xae201004  sw          $zero, 0x1004($s1)
    ctx->pc = 0x250eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4100), GPR_U32(ctx, 0));
    // 0x250eb4: 0xae201008  sw          $zero, 0x1008($s1)
    ctx->pc = 0x250eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4104), GPR_U32(ctx, 0));
    // 0x250eb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x250EB8u;
    SET_GPR_U32(ctx, 31, 0x250EC0u);
    ctx->pc = 0x250EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EB8u;
    // 0x250ebc: 0xae230218  sw          $v1, 0x218($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x250EB8u, 0x250EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EC0u;
label_250ec0:
    // 0x250ec0: 0xae201020  sw          $zero, 0x1020($s1)
    ctx->pc = 0x250ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4128), GPR_U32(ctx, 0));
    // 0x250ec4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x250ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x250ec8: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x250ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x250ecc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x250eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x250ed0: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x250ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x250ed4: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x250ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
    // 0x250ed8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x250ed8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x250edc: 0x63138  dsll        $a2, $a2, 4
    ctx->pc = 0x250edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 4);
    // 0x250ee0: 0x34c6000f  ori         $a2, $a2, 0xF
    ctx->pc = 0x250ee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
    // 0x250ee4: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x250ee4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x250ee8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x250ee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x250eec: 0x73df8  dsll        $a3, $a3, 23
    ctx->pc = 0x250eecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 23);
    // 0x250ef0: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x250ef0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x250ef4: 0x94e78  dsll        $t1, $t1, 25
    ctx->pc = 0x250ef4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 25);
    // 0x250ef8: 0x3c0abfff  lui         $t2, 0xBFFF
    ctx->pc = 0x250ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)49151 << 16));
    // 0x250efc: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x250efcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x250f00: 0xa52f8  dsll        $t2, $t2, 11
    ctx->pc = 0x250f00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 11);
    // 0x250f04: 0x354a07ff  ori         $t2, $t2, 0x7FF
    ctx->pc = 0x250f04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2047);
    // 0x250f08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x250f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x250f0c: 0x3c08bfff  lui         $t0, 0xBFFF
    ctx->pc = 0x250f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49151 << 16));
    // 0x250f10: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x250f10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x250f14: 0x84378  dsll        $t0, $t0, 13
    ctx->pc = 0x250f14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 13);
    // 0x250f18: 0x35081fff  ori         $t0, $t0, 0x1FFF
    ctx->pc = 0x250f18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8191);
    // 0x250f1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x250f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x250f20: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x250f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x250f24: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x250f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x250f28: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x250f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x250f2c: 0x34a53fff  ori         $a1, $a1, 0x3FFF
    ctx->pc = 0x250f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16383);
    // 0x250f30: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x250f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x250f34: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x250f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x250f38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x250f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x250f3c: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x250f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x250f40: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x250f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x250f44: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x250f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x250f48: 0x26241030  addiu       $a0, $s1, 0x1030
    ctx->pc = 0x250f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4144));
    // 0x250f4c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x250f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x250f50: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x250f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x250f54: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x250f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x250f58: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x250f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x250f5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x250f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x250f60: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x250F60u;
    SET_GPR_U32(ctx, 31, 0x250F68u);
    ctx->pc = 0x250F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F60u;
    // 0x250f64: 0xfe221020  sd          $v0, 0x1020($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x250F60u, 0x250F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F68u;
label_250f68:
    // 0x250f68: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x250F68u;
    SET_GPR_U32(ctx, 31, 0x250F70u);
    ctx->pc = 0x250F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F68u;
    // 0x250f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x250F68u, 0x250F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F70u;
label_250f70:
    // 0x250f70: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x250f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x250f74: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x250f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x250f78: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x250f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x250f7c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x250f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x250f80: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x250f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x250f84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x250f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x250f88: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x250f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x250f8c: 0x26241090  addiu       $a0, $s1, 0x1090
    ctx->pc = 0x250f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4240));
    // 0x250f90: 0xae201040  sw          $zero, 0x1040($s1)
    ctx->pc = 0x250f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4160), GPR_U32(ctx, 0));
    // 0x250f94: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x250f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x250f98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x250f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x250f9c: 0xae201068  sw          $zero, 0x1068($s1)
    ctx->pc = 0x250f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4200), GPR_U32(ctx, 0));
    // 0x250fa0: 0xa2201080  sb          $zero, 0x1080($s1)
    ctx->pc = 0x250fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4224), (uint8_t)GPR_U32(ctx, 0));
    // 0x250fa4: 0xae201084  sw          $zero, 0x1084($s1)
    ctx->pc = 0x250fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4228), GPR_U32(ctx, 0));
    // 0x250fa8: 0xae201088  sw          $zero, 0x1088($s1)
    ctx->pc = 0x250fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4232), GPR_U32(ctx, 0));
    // 0x250fac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x250FACu;
    SET_GPR_U32(ctx, 31, 0x250FB4u);
    ctx->pc = 0x250FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FACu;
    // 0x250fb0: 0xae23107c  sw          $v1, 0x107C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4220), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x250FACu, 0x250FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FB4u;
label_250fb4:
    // 0x250fb4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x250FB4u;
    SET_GPR_U32(ctx, 31, 0x250FBCu);
    ctx->pc = 0x250FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FB4u;
    // 0x250fb8: 0x262410a0  addiu       $a0, $s1, 0x10A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x250FB4u, 0x250FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FBCu;
label_250fbc:
    // 0x250fbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250fc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250fc4: 0x262210b0  addiu       $v0, $s1, 0x10B0
    ctx->pc = 0x250fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4272));
    // 0x250fc8: 0xae2010b0  sw          $zero, 0x10B0($s1)
    ctx->pc = 0x250fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4272), GPR_U32(ctx, 0));
    // 0x250fcc: 0x240404e0  addiu       $a0, $zero, 0x4E0
    ctx->pc = 0x250fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
    // 0x250fd0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x250fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x250fd4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x250fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x250fd8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x250FD8u;
    SET_GPR_U32(ctx, 31, 0x250FE0u);
    ctx->pc = 0x250FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FD8u;
    // 0x250fdc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x250FD8u, 0x250FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FE0u;
label_250fe0:
    // 0x250fe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x250fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250fe4: 0xc06fd02  jal         func_1BF408
    ctx->pc = 0x250FE4u;
    SET_GPR_U32(ctx, 31, 0x250FECu);
    ctx->pc = 0x250FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FE4u;
    // 0x250fe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF408u, 0x250FE4u, 0x250FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FECu;
label_250fec:
    // 0x250fec: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x250fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x250ff0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x250FF0u;
    SET_GPR_U32(ctx, 31, 0x250FF8u);
    ctx->pc = 0x250FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FF0u;
    // 0x250ff4: 0xae220fe8  sw          $v0, 0xFE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x250FF0u, 0x250FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FF8u;
label_250ff8:
    // 0x250ff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x250ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ffc: 0xc06e9c8  jal         func_1BA720
    ctx->pc = 0x250FFCu;
    SET_GPR_U32(ctx, 31, 0x251004u);
    ctx->pc = 0x251000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FFCu;
    // 0x251000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA720u, 0x250FFCu, 0x251004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251004u;
label_251004:
    // 0x251004: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x251004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x251008: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x251008u;
    SET_GPR_U32(ctx, 31, 0x251010u);
    ctx->pc = 0x25100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251008u;
    // 0x25100c: 0xae220fec  sw          $v0, 0xFEC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4076), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x251008u, 0x251010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251010u;
label_251010:
    // 0x251010: 0xc072ce6  jal         func_1CB398
    ctx->pc = 0x251010u;
    SET_GPR_U32(ctx, 31, 0x251018u);
    ctx->pc = 0x251014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251010u;
    // 0x251014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB398u, 0x251010u, 0x251018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251018u;
label_251018:
    // 0x251018: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25101c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25101cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251020: 0xc072d06  jal         func_1CB418
    ctx->pc = 0x251020u;
    SET_GPR_U32(ctx, 31, 0x251028u);
    ctx->pc = 0x251024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251020u;
    // 0x251024: 0xae220ff8  sw          $v0, 0xFF8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB418u, 0x251020u, 0x251028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251028u;
label_251028:
    // 0x251028: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x251028u;
    SET_GPR_U32(ctx, 31, 0x251030u);
    ctx->pc = 0x25102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251028u;
    // 0x25102c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x251028u, 0x251030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251030u;
label_251030:
    // 0x251030: 0xc0618f6  jal         func_1863D8
    ctx->pc = 0x251030u;
    SET_GPR_U32(ctx, 31, 0x251038u);
    ctx->pc = 0x251034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251030u;
    // 0x251034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863D8u, 0x251030u, 0x251038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251038u;
label_251038:
    // 0x251038: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25103c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25103cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251040: 0xc0618fe  jal         func_1863F8
    ctx->pc = 0x251040u;
    SET_GPR_U32(ctx, 31, 0x251048u);
    ctx->pc = 0x251044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251040u;
    // 0x251044: 0xae220ff4  sw          $v0, 0xFF4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F8u, 0x251040u, 0x251048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251048u;
label_251048:
    // 0x251048: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x251048u;
    SET_GPR_U32(ctx, 31, 0x251050u);
    ctx->pc = 0x25104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251048u;
    // 0x25104c: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x251048u, 0x251050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251050u;
label_251050:
    // 0x251050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251054: 0xc06cd3c  jal         func_1B34F0
    ctx->pc = 0x251054u;
    SET_GPR_U32(ctx, 31, 0x25105Cu);
    ctx->pc = 0x251058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251054u;
    // 0x251058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B34F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B34F0u, 0x251054u, 0x25105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25105Cu;
label_25105c:
    // 0x25105c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x25105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x251060: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x251060u;
    SET_GPR_U32(ctx, 31, 0x251068u);
    ctx->pc = 0x251064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251060u;
    // 0x251064: 0xae220ff0  sw          $v0, 0xFF0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4080), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x251060u, 0x251068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251068u;
label_251068:
    // 0x251068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25106c: 0xc071200  jal         func_1C4800
    ctx->pc = 0x25106Cu;
    SET_GPR_U32(ctx, 31, 0x251074u);
    ctx->pc = 0x251070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25106Cu;
    // 0x251070: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4800u, 0x25106Cu, 0x251074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251074u;
label_251074:
    // 0x251074: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x251074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x251078: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x251078u;
    SET_GPR_U32(ctx, 31, 0x251080u);
    ctx->pc = 0x25107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251078u;
    // 0x25107c: 0xae221000  sw          $v0, 0x1000($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4096), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x251078u, 0x251080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251080u;
label_251080:
    // 0x251080: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251084: 0xc061a58  jal         func_186960
    ctx->pc = 0x251084u;
    SET_GPR_U32(ctx, 31, 0x25108Cu);
    ctx->pc = 0x251088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251084u;
    // 0x251088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186960u, 0x251084u, 0x25108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25108Cu;
label_25108c:
    // 0x25108c: 0x24040360  addiu       $a0, $zero, 0x360
    ctx->pc = 0x25108cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x251090: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x251090u;
    SET_GPR_U32(ctx, 31, 0x251098u);
    ctx->pc = 0x251094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251090u;
    // 0x251094: 0xae220fe4  sw          $v0, 0xFE4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4068), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x251090u, 0x251098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251098u;
label_251098:
    // 0x251098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x251098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25109c: 0xc0712d2  jal         func_1C4B48
    ctx->pc = 0x25109Cu;
    SET_GPR_U32(ctx, 31, 0x2510A4u);
    ctx->pc = 0x2510A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25109Cu;
    // 0x2510a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4B48u, 0x25109Cu, 0x2510A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510A4u;
label_2510a4:
    // 0x2510a4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2510a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2510a8: 0xae220ffc  sw          $v0, 0xFFC($s1)
    ctx->pc = 0x2510a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4092), GPR_U32(ctx, 2));
    // 0x2510ac: 0xae231060  sw          $v1, 0x1060($s1)
    ctx->pc = 0x2510acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4192), GPR_U32(ctx, 3));
    // 0x2510b0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2510b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2510b4: 0xae200fe0  sw          $zero, 0xFE0($s1)
    ctx->pc = 0x2510b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4064), GPR_U32(ctx, 0));
    // 0x2510b8: 0x8c82bd70  lw          $v0, -0x4290($a0)
    ctx->pc = 0x2510b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x2510bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2510bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2510c0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2510C0u;
    {
        const bool branch_taken_0x2510c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2510c0) {
            ctx->pc = 0x2510C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2510C0u;
            // 0x2510c4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2510E8u;
            goto label_2510e8;
        }
    }
    ctx->pc = 0x2510C8u;
    // 0x2510c8: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2510c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2510cc: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2510ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2510d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2510d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2510d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2510d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2510d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2510d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2510dc: 0xc0944ae  jal         func_2512B8
    ctx->pc = 0x2510DCu;
    SET_GPR_U32(ctx, 31, 0x2510E4u);
    ctx->pc = 0x2510E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2510DCu;
    // 0x2510e0: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2512B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2512B8u, 0x2510DCu, 0x2510E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510E4u;
label_2510e4:
    // 0x2510e4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2510e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2510e8:
    // 0x2510e8: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2510e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x2510ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2510ECu;
    {
        const bool branch_taken_0x2510ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2510F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510ECu;
        // 0x2510f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510ec) {
            ctx->pc = 0x251100u;
            goto label_251100;
        }
    }
    ctx->pc = 0x2510F4u;
    // 0x2510f4: 0xc0ab27c  jal         func_2AC9F0
    ctx->pc = 0x2510F4u;
    SET_GPR_U32(ctx, 31, 0x2510FCu);
    ctx->pc = 0x2AC9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9F0u, 0x2510F4u, 0x2510FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510FCu;
label_2510fc:
    // 0x2510fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2510fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_251100:
    // 0x251100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25110c: 0x3e00008  jr          $ra
    ctx->pc = 0x25110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25110Cu;
        // 0x251110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25110Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251114u;
    // 0x251114: 0x0  nop
    ctx->pc = 0x251114u;
    // NOP
    ctx->pc = 0x251118u;
}
