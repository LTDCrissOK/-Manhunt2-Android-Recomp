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

// Function: sub_0038CFB8
// Address: 0x38cfb8 - 0x38de28
void sub_0038CFB8_0x38cfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CFB8_0x38cfb8");
#endif

    switch (ctx->pc) {
        case 0x38d028u: goto label_38d028;
        case 0x38d08cu: goto label_38d08c;
        case 0x38d0b4u: goto label_38d0b4;
        case 0x38d138u: goto label_38d138;
        case 0x38d15cu: goto label_38d15c;
        case 0x38d1b0u: goto label_38d1b0;
        case 0x38d1d0u: goto label_38d1d0;
        case 0x38d1d8u: goto label_38d1d8;
        case 0x38d248u: goto label_38d248;
        case 0x38d28cu: goto label_38d28c;
        case 0x38d300u: goto label_38d300;
        case 0x38d328u: goto label_38d328;
        case 0x38d348u: goto label_38d348;
        case 0x38d3d0u: goto label_38d3d0;
        case 0x38d3fcu: goto label_38d3fc;
        case 0x38d480u: goto label_38d480;
        case 0x38d4a8u: goto label_38d4a8;
        case 0x38d4b0u: goto label_38d4b0;
        case 0x38d538u: goto label_38d538;
        case 0x38d59cu: goto label_38d59c;
        case 0x38d630u: goto label_38d630;
        case 0x38d658u: goto label_38d658;
        case 0x38d690u: goto label_38d690;
        case 0x38d730u: goto label_38d730;
        case 0x38d754u: goto label_38d754;
        case 0x38d7d0u: goto label_38d7d0;
        case 0x38d7f0u: goto label_38d7f0;
        case 0x38d7f8u: goto label_38d7f8;
        case 0x38d880u: goto label_38d880;
        case 0x38d8c4u: goto label_38d8c4;
        case 0x38d960u: goto label_38d960;
        case 0x38d988u: goto label_38d988;
        case 0x38d9a8u: goto label_38d9a8;
        case 0x38da34u: goto label_38da34;
        case 0x38da48u: goto label_38da48;
        case 0x38da74u: goto label_38da74;
        case 0x38db20u: goto label_38db20;
        case 0x38db48u: goto label_38db48;
        case 0x38db50u: goto label_38db50;
        case 0x38dbf0u: goto label_38dbf0;
        case 0x38dc54u: goto label_38dc54;
        case 0x38dcd4u: goto label_38dcd4;
        case 0x38dd10u: goto label_38dd10;
        case 0x38dd38u: goto label_38dd38;
        case 0x38dd70u: goto label_38dd70;
        default: break;
    }

    ctx->pc = 0x38cfb8u;

    // 0x38cfb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38cfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38cfbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38cfc0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38cfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38cfc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38cfc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cfc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38cfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38cfcc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38cfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38cfd0: 0x8e02087c  lw          $v0, 0x87C($s0)
    ctx->pc = 0x38cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2172)));
    // 0x38cfd4: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x38CFD4u;
    {
        const bool branch_taken_0x38cfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CFD4u;
        // 0x38cfd8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cfd4) {
            ctx->pc = 0x38D120u;
            goto label_38d120;
        }
    }
    ctx->pc = 0x38CFDCu;
    // 0x38cfdc: 0x8e180820  lw          $t8, 0x820($s0)
    ctx->pc = 0x38cfdcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38cfe0: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x38cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38cfe4: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x38cfe4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
    // 0x38cfe8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x38cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x38cfec: 0x3041818  mult        $v1, $t8, $a0
    ctx->pc = 0x38cfecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38cff0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38cff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38cff4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x38cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x38cff8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38cff8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cffc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x38cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x38d000: 0x26436300  addiu       $v1, $s2, 0x6300
    ctx->pc = 0x38d000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 25344));
    // 0x38d004: 0x8c8c06cc  lw          $t4, 0x6CC($a0)
    ctx->pc = 0x38d004u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x38d008: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x38d008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38d00c: 0x19800026  blez        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x38D00Cu;
    {
        const bool branch_taken_0x38d00c = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x38D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D00Cu;
        // 0x38d010: 0x655825  or          $t3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d00c) {
            ctx->pc = 0x38D0A8u;
            goto label_38d0a8;
        }
    }
    ctx->pc = 0x38D014u;
    // 0x38d014: 0x260f05a8  addiu       $t7, $s0, 0x5A8
    ctx->pc = 0x38d014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x38d018: 0x260e05b8  addiu       $t6, $s0, 0x5B8
    ctx->pc = 0x38d018u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1464));
    // 0x38d01c: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x38d01cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x38d020: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x38d020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x38d024: 0x0  nop
    ctx->pc = 0x38d024u;
    // NOP
label_38d028:
    // 0x38d028: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x38d028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38d02c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x38d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x38d030: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x38d030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38d034: 0x14d1826  xor         $v1, $t2, $t5
    ctx->pc = 0x38d034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x38d038: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x38d038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38d03c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x38d03cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x38d040: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x38d040u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x38d044: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x38d044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x38d048: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x38d048u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x38d04c: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x38d04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x38d050: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x38d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38d054: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x38d054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x38d058: 0x1c22021  addu        $a0, $t6, $v0
    ctx->pc = 0x38d058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x38d05c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x38d05cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x38d060: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x38d060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x38d064: 0x14c402a  slt         $t0, $t2, $t4
    ctx->pc = 0x38d064u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x38d068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38d068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38d06c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d070: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x38d070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x38d074: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x38d074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x38d078: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x38d078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x38d07c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38d07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38d080: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x38d080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x38d084: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x38d084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x38d088: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x38d088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_38d08c:
    // 0x38d08c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x38d08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x38d090: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x38d090u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x38d094: 0xfd620010  sd          $v0, 0x10($t3)
    ctx->pc = 0x38d094u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
    // 0x38d098: 0x1500ffe3  bnez        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x38D098u;
    {
        const bool branch_taken_0x38d098 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D098u;
        // 0x38d09c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d098) {
            ctx->pc = 0x38D028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d028;
        }
    }
    ctx->pc = 0x38D0A0u;
    // 0x38d0a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38D0A0u;
    {
        const bool branch_taken_0x38d0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d0a0) {
            ctx->pc = 0x38D0ACu;
            goto label_38d0ac;
        }
    }
    ctx->pc = 0x38D0A8u;
label_38d0a8:
    // 0x38d0a8: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x38d0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
label_38d0ac:
    // 0x38d0ac: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x38D0ACu;
    SET_GPR_U32(ctx, 31, 0x38D0B4u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x38D0ACu, 0x38D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D0B4u;
label_38d0b4:
    // 0x38d0b4: 0xf  sync
    ctx->pc = 0x38d0b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x38d0b8: 0x8e060820  lw          $a2, 0x820($s0)
    ctx->pc = 0x38d0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38d0bc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x38d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38d0c0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x38d0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x38d0c4: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x38d0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x38d0c8: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x38d0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38d0cc: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x38d0ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x38d0d0: 0x264a6300  addiu       $t2, $s2, 0x6300
    ctx->pc = 0x38d0d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 25344));
    // 0x38d0d4: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x38d0d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x38d0d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38d0dc: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x38d0dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x38d0e0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x38d0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x38d0e4: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x38d0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x38d0e8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x38d0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d0ec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x38d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x38d0f0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x38d0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x38d0f4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x38d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x38d0f8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x38d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x38d0fc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x38d0fcu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0)); // MMIO: 0x1000d420
    // 0x38d100: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x38d100u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 9)); // MMIO: 0x1000d400
    // 0x38d104: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38D104u;
    {
        const bool branch_taken_0x38d104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D104u;
        // 0x38d108: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d104) {
            ctx->pc = 0x38D120u;
            goto label_38d120;
        }
    }
    ctx->pc = 0x38D10Cu;
    // 0x38d10c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38d10cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d110: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38d110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38d114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d118: 0x80f401a  j           func_3D0068
    ctx->pc = 0x38D118u;
    ctx->pc = 0x38D11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D118u;
    // 0x38d11c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0068u;
    sub_003D0068_0x3d0068(rdram, ctx, runtime); return;
    ctx->pc = 0x38D120u;
label_38d120:
    // 0x38d120: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38d120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d124: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38d124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38d128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d12c: 0x3e00008  jr          $ra
    ctx->pc = 0x38D12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D12Cu;
        // 0x38d130: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D134u;
    // 0x38d134: 0x0  nop
    ctx->pc = 0x38d134u;
    // NOP
label_38d138:
    // 0x38d138: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d138u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d13c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d140: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d144: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x38d144u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d148: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x38d148u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d14c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d14cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d150: 0x5180000  mtsab       $t0, 0x0
    ctx->pc = 0x38d150u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d154: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x38d154u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x38d158: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x38d158u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d15c:
    // 0x38d15c: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x38d15cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d160: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x38d160u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d164: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d164u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d168: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x38d168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x38d16c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x38d16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x38d170: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x38d170u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d174: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38d174u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38d178: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x38d178u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38d17c: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x38d17cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x38d180: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x38d180u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x38d184: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x38D184u;
    {
        const bool branch_taken_0x38d184 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D184u;
        // 0x38d188: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d184) {
            ctx->pc = 0x38D15Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d15c;
        }
    }
    ctx->pc = 0x38D18Cu;
    // 0x38d18c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38d190: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x38d190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x38d194: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38d194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d198: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x38d198u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x38d19c: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x38D19Cu;
    {
        const bool branch_taken_0x38d19c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D19Cu;
        // 0x38d1a0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d19c) {
            ctx->pc = 0x38D15Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d15c;
        }
    }
    ctx->pc = 0x38D1A4u;
    // 0x38d1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x38D1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D1ACu;
    // 0x38d1ac: 0x0  nop
    ctx->pc = 0x38d1acu;
    // NOP
label_38d1b0:
    // 0x38d1b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x38d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d1b4: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x38d1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d1b8: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x38d1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d1bc: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x38d1bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d1c0: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x38d1c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d1c4: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x38d1c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x38d1c8: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x38d1c8u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d1cc: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x38d1ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d1d0:
    // 0x38d1d0: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x38d1d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d1d4: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x38d1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d1d8:
    // 0x38d1d8: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x38d1d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d1dc: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x38d1dcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x38d1e0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38d1e0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d1e4: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x38d1e4u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d1e8: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x38d1e8u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x38d1ec: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x38d1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x38d1f0: 0x21efffff  addi        $t7, $t7, -0x1
    ctx->pc = 0x38d1f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x38d1f4: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x38d1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x38d1f8: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x38d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x38d1fc: 0x1de0fff6  bgtz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x38D1FCu;
    {
        const bool branch_taken_0x38d1fc = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x38D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1FCu;
        // 0x38d200: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d1fc) {
            ctx->pc = 0x38D1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d1d8;
        }
    }
    ctx->pc = 0x38D204u;
    // 0x38d204: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x38d204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x38d208: 0x24e70140  addiu       $a3, $a3, 0x140
    ctx->pc = 0x38d208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x38d20c: 0x8c8f000c  lw          $t7, 0xC($a0)
    ctx->pc = 0x38d20cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d210: 0x32f5024  and         $t2, $t9, $t7
    ctx->pc = 0x38d210u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x38d214: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x38D214u;
    {
        const bool branch_taken_0x38d214 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D214u;
        // 0x38d218: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d214) {
            ctx->pc = 0x38D1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d1d8;
        }
    }
    ctx->pc = 0x38D21Cu;
    // 0x38d21c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x38d21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d220: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x38d220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d224: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x38d224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d228: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38d228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38d22c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x38d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x38d230: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x38d230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x38d234: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x38D234u;
    {
        const bool branch_taken_0x38d234 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D234u;
        // 0x38d238: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d234) {
            ctx->pc = 0x38D1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d1d0;
        }
    }
    ctx->pc = 0x38D23Cu;
    // 0x38d23c: 0x3e00008  jr          $ra
    ctx->pc = 0x38D23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D244u;
    // 0x38d244: 0x0  nop
    ctx->pc = 0x38d244u;
    // NOP
label_38d248:
    // 0x38d248: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d248u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d24c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d250: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d254: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x38d254u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d258: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38d258u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d25c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d25cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d260: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38d260u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38d264: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38d264u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38d268: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x38d268u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d26c: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x38d26cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x38d270: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x38d270u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d274: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d274u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d278: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x38d278u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d27c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38d27cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38d280: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x38d280u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38d284: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x38D284u;
    {
        const bool branch_taken_0x38d284 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D284u;
        // 0x38d288: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d284) {
            ctx->pc = 0x38D2DCu;
            goto label_38d2dc;
        }
    }
    ctx->pc = 0x38D28Cu;
label_38d28c:
    // 0x38d28c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x38d28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x38d290: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x38d290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x38d294: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x38d294u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d298: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x38d298u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d29c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x38d29cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x38d2a0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x38d2a0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38d2a4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d2a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d2a8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x38d2a8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38d2ac: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x38d2acu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x38d2b0: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x38d2b0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x38d2b4: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x38d2b4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38d2b8: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x38d2b8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x38d2bc: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x38d2bcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x38d2c0: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x38d2c0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x38d2c4: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x38d2c4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x38d2c8: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x38d2c8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x38d2cc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x38d2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x38d2d0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x38d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x38d2d4: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x38D2D4u;
    {
        const bool branch_taken_0x38d2d4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2D4u;
        // 0x38d2d8: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d2d4) {
            ctx->pc = 0x38D28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d28c;
        }
    }
    ctx->pc = 0x38D2DCu;
label_38d2dc:
    // 0x38d2dc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38d2e0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x38d2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x38d2e4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38d2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d2e8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x38d2e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x38d2ec: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x38D2ECu;
    {
        const bool branch_taken_0x38d2ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2ECu;
        // 0x38d2f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d2ec) {
            ctx->pc = 0x38D28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d28c;
        }
    }
    ctx->pc = 0x38D2F4u;
    // 0x38d2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x38D2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D2FCu;
    // 0x38d2fc: 0x0  nop
    ctx->pc = 0x38d2fcu;
    // NOP
label_38d300:
    // 0x38d300: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d300u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d304: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d308: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d30c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x38d30cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d310: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38d310u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d314: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38d314u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38d318: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38d318u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38d31c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x38d31cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d320: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x38d320u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x38d324: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d324u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_38d328:
    // 0x38d328: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d32c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38d32cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d330: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38d330u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d334: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38d334u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d338: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38d338u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d33c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x38d33cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x38d340: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x38D340u;
    {
        const bool branch_taken_0x38d340 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D340u;
        // 0x38d344: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d340) {
            ctx->pc = 0x38D384u;
            goto label_38d384;
        }
    }
    ctx->pc = 0x38D348u;
label_38d348:
    // 0x38d348: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x38d348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x38d34c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x38d34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x38d350: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38d350u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d354: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38d354u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d358: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38d358u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d35c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38d35cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d360: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x38d360u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x38d364: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d364u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d368: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x38d368u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x38d36c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x38d36cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38d370: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x38d370u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x38d374: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x38d374u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38d378: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x38d378u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x38d37c: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x38D37Cu;
    {
        const bool branch_taken_0x38d37c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D37Cu;
        // 0x38d380: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d37c) {
            ctx->pc = 0x38D348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d348;
        }
    }
    ctx->pc = 0x38D384u;
label_38d384:
    // 0x38d384: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x38d384u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x38d388: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x38d388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x38d38c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38d38cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d390: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x38d390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x38d394: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x38d394u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x38d398: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x38D398u;
    {
        const bool branch_taken_0x38d398 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D398u;
        // 0x38d39c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d398) {
            ctx->pc = 0x38D348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d348;
        }
    }
    ctx->pc = 0x38D3A0u;
    // 0x38d3a0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d3a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d3a4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d3a8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d3ac: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x38d3acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x38d3b0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x38d3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x38d3b4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x38d3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x38d3b8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x38d3b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x38d3bc: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x38D3BCu;
    {
        const bool branch_taken_0x38d3bc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3BCu;
        // 0x38d3c0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d3bc) {
            ctx->pc = 0x38D328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d328;
        }
    }
    ctx->pc = 0x38D3C4u;
    // 0x38d3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x38D3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D3CCu;
    // 0x38d3cc: 0x0  nop
    ctx->pc = 0x38d3ccu;
    // NOP
label_38d3d0:
    // 0x38d3d0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d3d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d3d4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d3d8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d3dc: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x38d3dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d3e0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38d3e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d3e4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d3e8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38d3e8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38d3ec: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38d3ecu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38d3f0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x38d3f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d3f4: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x38d3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x38d3f8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x38d3f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d3fc:
    // 0x38d3fc: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x38d3fcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d400: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x38d400u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d404: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d404u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d408: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x38d408u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x38d40c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x38d40cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x38d410: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x38d410u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38d414: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d414u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d418: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x38d418u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38d41c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x38d41cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d420: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x38d420u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x38d424: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x38d424u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x38d428: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x38d428u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x38d42c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x38d42cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x38d430: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x38d430u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x38d434: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x38d434u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x38d438: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x38d438u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x38d43c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x38d43cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x38d440: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x38d440u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x38d444: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x38d444u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x38d448: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x38d448u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x38d44c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x38d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x38d450: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x38d450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x38d454: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x38D454u;
    {
        const bool branch_taken_0x38d454 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D454u;
        // 0x38d458: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d454) {
            ctx->pc = 0x38D3FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d3fc;
        }
    }
    ctx->pc = 0x38D45Cu;
    // 0x38d45c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38d460: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x38d460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x38d464: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38d464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d468: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x38d468u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x38d46c: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x38D46Cu;
    {
        const bool branch_taken_0x38d46c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D46Cu;
        // 0x38d470: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d46c) {
            ctx->pc = 0x38D3FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d3fc;
        }
    }
    ctx->pc = 0x38D474u;
    // 0x38d474: 0x3e00008  jr          $ra
    ctx->pc = 0x38D474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D47Cu;
    // 0x38d47c: 0x0  nop
    ctx->pc = 0x38d47cu;
    // NOP
label_38d480:
    // 0x38d480: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d480u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d484: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d488: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d48c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x38d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d490: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38d490u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d494: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38d494u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38d498: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38d498u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38d49c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x38d49cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d4a0: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x38d4a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38d4a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x38d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_38d4a8:
    // 0x38d4a8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d4ac: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x38d4acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d4b0:
    // 0x38d4b0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38d4b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d4b4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38d4b4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d4b8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38d4b8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d4bc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d4bcu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d4c0: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38d4c0u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d4c4: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x38d4c4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x38d4c8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d4c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d4cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x38d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x38d4d0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x38d4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x38d4d4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x38d4d4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d4d8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x38d4d8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d4dc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38d4dcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38d4e0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x38d4e0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d4e4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x38d4e4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x38d4e8: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x38d4e8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38d4ec: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x38d4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x38d4f0: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x38D4F0u;
    {
        const bool branch_taken_0x38d4f0 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4F0u;
        // 0x38d4f4: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d4f0) {
            ctx->pc = 0x38D4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d4b0;
        }
    }
    ctx->pc = 0x38D4F8u;
    // 0x38d4f8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x38d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x38d4fc: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x38d4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x38d500: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38d500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d504: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x38d504u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x38d508: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x38D508u;
    {
        const bool branch_taken_0x38d508 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D508u;
        // 0x38d50c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d508) {
            ctx->pc = 0x38D4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d4b0;
        }
    }
    ctx->pc = 0x38D510u;
    // 0x38d510: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d510u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d514: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d518: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d51c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x38d51cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x38d520: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x38d520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x38d524: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x38d524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x38d528: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x38D528u;
    {
        const bool branch_taken_0x38d528 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D528u;
        // 0x38d52c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d528) {
            ctx->pc = 0x38D4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d4a8;
        }
    }
    ctx->pc = 0x38D530u;
    // 0x38d530: 0x3e00008  jr          $ra
    ctx->pc = 0x38D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D538u;
label_38d538:
    // 0x38d538: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d538u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d53c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d540: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d544: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x38d544u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d548: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38d548u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d54c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d54cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d550: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38d550u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38d554: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38d554u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38d558: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x38d558u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x38d55c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x38d55cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d560: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x38d560u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d564: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x38d564u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d568: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d568u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d56c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x38d56cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d570: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x38d570u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x38d574: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38d574u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38d578: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x38d578u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38d57c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x38d57cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38d580: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x38d580u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d584: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x38d584u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x38d588: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x38d588u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x38d58c: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x38d58cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x38d590: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x38d590u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x38d594: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x38D594u;
    {
        const bool branch_taken_0x38d594 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D594u;
        // 0x38d598: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d594) {
            ctx->pc = 0x38D610u;
            goto label_38d610;
        }
    }
    ctx->pc = 0x38D59Cu;
label_38d59c:
    // 0x38d59c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x38d59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x38d5a0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x38d5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x38d5a4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x38d5a4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d5a8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x38d5a8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d5ac: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d5acu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d5b0: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x38d5b0u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x38d5b4: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x38d5b4u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x38d5b8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x38d5b8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38d5bc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d5bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d5c0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x38d5c0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38d5c4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x38d5c4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d5c8: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x38d5c8u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x38d5cc: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x38d5ccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x38d5d0: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x38d5d0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x38d5d4: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x38d5d4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x38d5d8: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x38d5d8u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x38d5dc: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x38d5dcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x38d5e0: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x38d5e0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x38d5e4: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x38d5e4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38d5e8: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x38d5e8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x38d5ec: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x38d5ecu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x38d5f0: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x38d5f0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x38d5f4: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x38d5f4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x38d5f8: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x38d5f8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x38d5fc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x38d5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x38d600: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x38d600u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x38d604: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x38d604u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x38d608: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x38D608u;
    {
        const bool branch_taken_0x38d608 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D608u;
        // 0x38d60c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d608) {
            ctx->pc = 0x38D59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d59c;
        }
    }
    ctx->pc = 0x38D610u;
label_38d610:
    // 0x38d610: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38d610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38d614: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x38d614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x38d618: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38d618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d61c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x38d61cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x38d620: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x38D620u;
    {
        const bool branch_taken_0x38d620 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D620u;
        // 0x38d624: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d620) {
            ctx->pc = 0x38D59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d59c;
        }
    }
    ctx->pc = 0x38D628u;
    // 0x38d628: 0x3e00008  jr          $ra
    ctx->pc = 0x38D628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D630u;
label_38d630:
    // 0x38d630: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d630u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d634: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d638: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d63c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x38d63cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d640: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38d640u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d644: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38d644u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38d648: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38d648u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38d64c: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x38d64cu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x38d650: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x38d650u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d654: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x38d654u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d658:
    // 0x38d658: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d65c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38d65cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d660: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38d660u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d664: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38d664u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d668: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d668u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d66c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38d66cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d670: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x38d670u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x38d674: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x38d674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x38d678: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x38d678u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x38d67c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x38d67cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d680: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x38d680u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d684: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38d684u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38d688: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x38D688u;
    {
        const bool branch_taken_0x38d688 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D688u;
        // 0x38d68c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d688) {
            ctx->pc = 0x38D6E4u;
            goto label_38d6e4;
        }
    }
    ctx->pc = 0x38D690u;
label_38d690:
    // 0x38d690: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x38d690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x38d694: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38d694u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d698: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38d698u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d69c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38d69cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d6a0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d6a0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d6a4: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38d6a4u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d6a8: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x38d6a8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x38d6ac: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d6acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d6b0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x38d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x38d6b4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x38d6b4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d6b8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x38d6b8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d6bc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38d6bcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38d6c0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x38d6c0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d6c4: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x38d6c4u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x38d6c8: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x38d6c8u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38d6cc: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x38d6ccu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x38d6d0: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x38d6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x38d6d4: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x38d6d4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x38d6d8: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x38d6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x38d6dc: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x38D6DCu;
    {
        const bool branch_taken_0x38d6dc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6DCu;
        // 0x38d6e0: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d6dc) {
            ctx->pc = 0x38D690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d690;
        }
    }
    ctx->pc = 0x38D6E4u;
label_38d6e4:
    // 0x38d6e4: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x38d6e4u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x38d6e8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x38d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x38d6ec: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38d6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d6f0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x38d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x38d6f4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x38d6f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x38d6f8: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x38D6F8u;
    {
        const bool branch_taken_0x38d6f8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6F8u;
        // 0x38d6fc: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d6f8) {
            ctx->pc = 0x38D690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d690;
        }
    }
    ctx->pc = 0x38D700u;
    // 0x38d700: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d700u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d704: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d708: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d70c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x38d70cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x38d710: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x38d710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x38d714: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x38d714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x38d718: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x38d718u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x38d71c: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x38D71Cu;
    {
        const bool branch_taken_0x38d71c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D71Cu;
        // 0x38d720: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d71c) {
            ctx->pc = 0x38D658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d658;
        }
    }
    ctx->pc = 0x38D724u;
    // 0x38d724: 0x3e00008  jr          $ra
    ctx->pc = 0x38D724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D72Cu;
    // 0x38d72c: 0x0  nop
    ctx->pc = 0x38d72cu;
    // NOP
label_38d730:
    // 0x38d730: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d730u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d734: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d738: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d73c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x38d73cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d740: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38d740u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d744: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d748: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x38d748u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x38d74c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x38d74cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38d750: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d750u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_38d754:
    // 0x38d754: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x38d754u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d758: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x38d758u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d75c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x38d75cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x38d760: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x38d760u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38d764: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x38d764u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38d768: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x38d768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x38d76c: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x38d76cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x38d770: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x38d770u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x38d774: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x38d774u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x38d778: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38d778u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38d77c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38d77cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38d780: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x38d780u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x38d784: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x38d784u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38d788: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x38d788u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x38d78c: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x38d78cu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38d790: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x38d790u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x38d794: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x38d794u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x38d798: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d798u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d79c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x38d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x38d7a0: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x38d7a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x38d7a4: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x38D7A4u;
    {
        const bool branch_taken_0x38d7a4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7A4u;
        // 0x38d7a8: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d7a4) {
            ctx->pc = 0x38D754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d754;
        }
    }
    ctx->pc = 0x38D7ACu;
    // 0x38d7ac: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38d7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38d7b0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x38d7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x38d7b4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38d7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d7b8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x38d7b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x38d7bc: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x38D7BCu;
    {
        const bool branch_taken_0x38d7bc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7BCu;
        // 0x38d7c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d7bc) {
            ctx->pc = 0x38D754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d754;
        }
    }
    ctx->pc = 0x38D7C4u;
    // 0x38d7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x38D7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D7CCu;
    // 0x38d7cc: 0x0  nop
    ctx->pc = 0x38d7ccu;
    // NOP
label_38d7d0:
    // 0x38d7d0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d7d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d7d4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d7d8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d7dc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x38d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d7e0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38d7e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d7e4: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x38d7e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38d7e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x38d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x38d7ec: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d7ecu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_38d7f0:
    // 0x38d7f0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d7f4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x38d7f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d7f8:
    // 0x38d7f8: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38d7f8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d7fc: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38d7fcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d800: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38d800u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d804: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38d804u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d808: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x38d808u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x38d80c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d80cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d810: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x38d810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x38d814: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x38d814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x38d818: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x38d818u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x38d81c: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x38d81cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d820: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x38d820u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38d824: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x38d824u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x38d828: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x38d828u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x38d82c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x38d82cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38d830: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x38d830u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x38d834: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x38D834u;
    {
        const bool branch_taken_0x38d834 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D834u;
        // 0x38d838: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d834) {
            ctx->pc = 0x38D7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d7f8;
        }
    }
    ctx->pc = 0x38D83Cu;
    // 0x38d83c: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x38d83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x38d840: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x38d840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x38d844: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38d844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d848: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x38d848u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x38d84c: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x38D84Cu;
    {
        const bool branch_taken_0x38d84c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D84Cu;
        // 0x38d850: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d84c) {
            ctx->pc = 0x38D7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d7f8;
        }
    }
    ctx->pc = 0x38D854u;
    // 0x38d854: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d854u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d858: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d85c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d860: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x38d860u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x38d864: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x38d864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x38d868: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x38d868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x38d86c: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x38D86Cu;
    {
        const bool branch_taken_0x38d86c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D86Cu;
        // 0x38d870: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d86c) {
            ctx->pc = 0x38D7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d7f0;
        }
    }
    ctx->pc = 0x38D874u;
    // 0x38d874: 0x3e00008  jr          $ra
    ctx->pc = 0x38D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D87Cu;
    // 0x38d87c: 0x0  nop
    ctx->pc = 0x38d87cu;
    // NOP
label_38d880:
    // 0x38d880: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d880u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d884: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d888: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d88c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x38d88cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d890: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38d890u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d894: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d898: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38d898u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38d89c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38d89cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38d8a0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x38d8a0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d8a4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x38d8a4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d8a8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d8a8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38d8ac: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x38d8acu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d8b0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x38d8b0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x38d8b4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38d8b4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38d8b8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x38d8b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38d8bc: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x38D8BCu;
    {
        const bool branch_taken_0x38d8bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8BCu;
        // 0x38d8c0: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d8bc) {
            ctx->pc = 0x38D93Cu;
            goto label_38d93c;
        }
    }
    ctx->pc = 0x38D8C4u;
label_38d8c4:
    // 0x38d8c4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x38d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x38d8c8: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x38d8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x38d8cc: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x38d8ccu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d8d0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x38d8d0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d8d4: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x38d8d4u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x38d8d8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x38d8d8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38d8dc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d8dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d8e0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x38d8e0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38d8e4: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x38d8e4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x38d8e8: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x38d8e8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x38d8ec: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x38d8ecu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38d8f0: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x38d8f0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x38d8f4: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x38d8f4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x38d8f8: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x38d8f8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x38d8fc: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x38d8fcu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x38d900: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x38d900u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x38d904: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x38d904u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x38d908: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x38d908u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x38d90c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x38d90cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x38d910: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x38d910u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x38d914: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x38d914u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x38d918: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x38d918u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38d91c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x38d91cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x38d920: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x38d920u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x38d924: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x38d924u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x38d928: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x38d928u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38d92c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x38d92cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x38d930: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x38d930u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x38d934: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x38D934u;
    {
        const bool branch_taken_0x38d934 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D934u;
        // 0x38d938: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d934) {
            ctx->pc = 0x38D8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d8c4;
        }
    }
    ctx->pc = 0x38D93Cu;
label_38d93c:
    // 0x38d93c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38d940: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x38d940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x38d944: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38d944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38d948: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x38d948u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x38d94c: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x38D94Cu;
    {
        const bool branch_taken_0x38d94c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D94Cu;
        // 0x38d950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d94c) {
            ctx->pc = 0x38D8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d8c4;
        }
    }
    ctx->pc = 0x38D954u;
    // 0x38d954: 0x3e00008  jr          $ra
    ctx->pc = 0x38D954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D95Cu;
    // 0x38d95c: 0x0  nop
    ctx->pc = 0x38d95cu;
    // NOP
label_38d960:
    // 0x38d960: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38d960u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d964: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38d964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38d968: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38d968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38d96c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x38d96cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38d970: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38d970u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d974: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38d974u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38d978: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38d978u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38d97c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x38d97cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d980: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x38d980u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x38d984: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38d984u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_38d988:
    // 0x38d988: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38d988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d98c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38d98cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d990: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38d990u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d994: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38d994u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d998: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38d998u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d99c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x38d99cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x38d9a0: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x38D9A0u;
    {
        const bool branch_taken_0x38d9a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9A0u;
        // 0x38d9a4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9a0) {
            ctx->pc = 0x38D9FCu;
            goto label_38d9fc;
        }
    }
    ctx->pc = 0x38D9A8u;
label_38d9a8:
    // 0x38d9a8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x38d9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x38d9ac: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x38d9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x38d9b0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38d9b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38d9b4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38d9b4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38d9b8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38d9b8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38d9bc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38d9bcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38d9c0: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x38d9c0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x38d9c4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38d9c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38d9c8: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x38d9c8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x38d9cc: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x38d9ccu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38d9d0: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x38d9d0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x38d9d4: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x38d9d4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38d9d8: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x38d9d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x38d9dc: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x38d9dcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x38d9e0: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x38d9e0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38d9e4: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x38d9e4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x38d9e8: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x38d9e8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x38d9ec: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x38d9ecu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38d9f0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x38d9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x38d9f4: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x38D9F4u;
    {
        const bool branch_taken_0x38d9f4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9F4u;
        // 0x38d9f8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9f4) {
            ctx->pc = 0x38D9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d9a8;
        }
    }
    ctx->pc = 0x38D9FCu;
label_38d9fc:
    // 0x38d9fc: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x38d9fcu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x38da00: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x38da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x38da04: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38da04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38da08: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x38da08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x38da0c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x38da0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x38da10: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x38DA10u;
    {
        const bool branch_taken_0x38da10 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA10u;
        // 0x38da14: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da10) {
            ctx->pc = 0x38D9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d9a8;
        }
    }
    ctx->pc = 0x38DA18u;
    // 0x38da18: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38da18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38da1c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38da20: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38da20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38da24: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x38da24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x38da28: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x38da28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x38da2c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x38da2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x38da30: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x38da30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_38da34:
    // 0x38da34: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x38DA34u;
    {
        const bool branch_taken_0x38da34 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA34u;
        // 0x38da38: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da34) {
            ctx->pc = 0x38D988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d988;
        }
    }
    ctx->pc = 0x38DA3Cu;
    // 0x38da3c: 0x3e00008  jr          $ra
    ctx->pc = 0x38DA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DA44u;
    // 0x38da44: 0x0  nop
    ctx->pc = 0x38da44u;
    // NOP
label_38da48:
    // 0x38da48: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38da48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38da4c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38da4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38da50: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38da50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38da54: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x38da54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38da58: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38da58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38da5c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38da5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38da60: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38da60u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38da64: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38da64u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38da68: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x38da68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38da6c: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x38da6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x38da70: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x38da70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38da74:
    // 0x38da74: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x38da74u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38da78: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x38da78u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38da7c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38da7cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38da80: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x38da80u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x38da84: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x38da84u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x38da88: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x38da88u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38da8c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38da8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38da90: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x38da90u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38da94: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x38da94u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38da98: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x38da98u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x38da9c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x38da9cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x38daa0: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x38daa0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x38daa4: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x38daa4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x38daa8: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x38daa8u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x38daac: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x38daacu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x38dab0: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x38dab0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x38dab4: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x38dab4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x38dab8: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x38dab8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x38dabc: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x38dabcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x38dac0: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x38dac0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x38dac4: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x38dac4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x38dac8: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x38dac8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x38dacc: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x38daccu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x38dad0: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x38dad0u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38dad4: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x38dad4u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x38dad8: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x38dad8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x38dadc: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x38dadcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x38dae0: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x38dae0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38dae4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x38dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x38dae8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x38dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x38daec: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x38daecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x38daf0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x38daf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x38daf4: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x38DAF4u;
    {
        const bool branch_taken_0x38daf4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAF4u;
        // 0x38daf8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38daf4) {
            ctx->pc = 0x38DA74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38da74;
        }
    }
    ctx->pc = 0x38DAFCu;
    // 0x38dafc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38dafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38db00: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x38db00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x38db04: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38db04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38db08: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x38db08u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x38db0c: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x38DB0Cu;
    {
        const bool branch_taken_0x38db0c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB0Cu;
        // 0x38db10: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db0c) {
            ctx->pc = 0x38DA74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38da74;
        }
    }
    ctx->pc = 0x38DB14u;
    // 0x38db14: 0x3e00008  jr          $ra
    ctx->pc = 0x38DB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DB1Cu;
    // 0x38db1c: 0x0  nop
    ctx->pc = 0x38db1cu;
    // NOP
label_38db20:
    // 0x38db20: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38db20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38db24: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38db24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38db28: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38db28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38db2c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x38db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38db30: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38db30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38db34: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38db34u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38db38: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38db38u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38db3c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x38db3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38db40: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x38db40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38db44: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x38db44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_38db48:
    // 0x38db48: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38db48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38db4c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x38db4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38db50:
    // 0x38db50: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38db50u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38db54: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38db54u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38db58: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38db58u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38db5c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38db5cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38db60: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38db60u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38db64: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x38db64u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x38db68: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38db68u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38db6c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x38db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x38db70: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x38db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x38db74: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x38db74u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38db78: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x38db78u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38db7c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38db7cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38db80: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x38db80u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38db84: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x38db84u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x38db88: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x38db88u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38db8c: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x38db8cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x38db90: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x38db90u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x38db94: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x38db94u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38db98: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x38db98u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x38db9c: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x38db9cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x38dba0: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x38dba0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38dba4: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x38dba4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x38dba8: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x38DBA8u;
    {
        const bool branch_taken_0x38dba8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBA8u;
        // 0x38dbac: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dba8) {
            ctx->pc = 0x38DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38db50;
        }
    }
    ctx->pc = 0x38DBB0u;
    // 0x38dbb0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x38dbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x38dbb4: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x38dbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x38dbb8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38dbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38dbbc: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x38dbbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x38dbc0: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x38DBC0u;
    {
        const bool branch_taken_0x38dbc0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBC0u;
        // 0x38dbc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbc0) {
            ctx->pc = 0x38DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38db50;
        }
    }
    ctx->pc = 0x38DBC8u;
    // 0x38dbc8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38dbc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38dbcc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38dbd0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38dbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38dbd4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x38dbd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x38dbd8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x38dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x38dbdc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x38dbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x38dbe0: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x38DBE0u;
    {
        const bool branch_taken_0x38dbe0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBE0u;
        // 0x38dbe4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbe0) {
            ctx->pc = 0x38DB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38db48;
        }
    }
    ctx->pc = 0x38DBE8u;
    // 0x38dbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x38DBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DBF0u;
label_38dbf0:
    // 0x38dbf0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38dbf0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38dbf4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38dbf8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38dbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38dbfc: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x38dbfcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38dc00: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38dc00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38dc04: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38dc04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38dc08: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38dc08u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38dc0c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38dc0cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38dc10: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x38dc10u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x38dc14: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x38dc14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38dc18: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x38dc18u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38dc1c: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x38dc1cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38dc20: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38dc20u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38dc24: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x38dc24u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38dc28: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x38dc28u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x38dc2c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38dc2cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38dc30: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x38dc30u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38dc34: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x38dc34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38dc38: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x38dc38u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38dc3c: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x38dc3cu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x38dc40: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x38dc40u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x38dc44: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x38dc44u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x38dc48: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x38dc48u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x38dc4c: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x38DC4Cu;
    {
        const bool branch_taken_0x38dc4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC4Cu;
        // 0x38dc50: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc4c) {
            ctx->pc = 0x38DCF0u;
            goto label_38dcf0;
        }
    }
    ctx->pc = 0x38DC54u;
label_38dc54:
    // 0x38dc54: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x38dc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x38dc58: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x38dc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x38dc5c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x38dc5cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38dc60: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x38dc60u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38dc64: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38dc64u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38dc68: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x38dc68u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x38dc6c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x38dc6cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x38dc70: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x38dc70u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38dc74: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38dc74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38dc78: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x38dc78u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x38dc7c: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x38dc7cu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38dc80: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x38dc80u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x38dc84: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x38dc84u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x38dc88: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x38dc88u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x38dc8c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x38dc8cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x38dc90: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x38dc90u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x38dc94: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x38dc94u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x38dc98: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x38dc98u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x38dc9c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x38dc9cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38dca0: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x38dca0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x38dca4: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x38dca4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x38dca8: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x38dca8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x38dcac: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x38dcacu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x38dcb0: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x38dcb0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x38dcb4: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x38dcb4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x38dcb8: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x38dcb8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x38dcbc: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x38dcbcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x38dcc0: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x38dcc0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x38dcc4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38dcc4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38dcc8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38dcc8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38dccc: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x38dcccu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x38dcd0: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x38dcd0u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_38dcd4:
    // 0x38dcd4: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x38dcd4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x38dcd8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x38dcd8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38dcdc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x38dcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x38dce0: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x38dce0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x38dce4: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x38dce4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x38dce8: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x38DCE8u;
    {
        const bool branch_taken_0x38dce8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCE8u;
        // 0x38dcec: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dce8) {
            ctx->pc = 0x38DC54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dc54;
        }
    }
    ctx->pc = 0x38DCF0u;
label_38dcf0:
    // 0x38dcf0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38dcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38dcf4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x38dcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x38dcf8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38dcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38dcfc: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x38dcfcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x38dd00: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x38DD00u;
    {
        const bool branch_taken_0x38dd00 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD00u;
        // 0x38dd04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd00) {
            ctx->pc = 0x38DC54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dc54;
        }
    }
    ctx->pc = 0x38DD08u;
    // 0x38dd08: 0x3e00008  jr          $ra
    ctx->pc = 0x38DD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DD10u;
label_38dd10:
    // 0x38dd10: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38dd10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38dd14: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38dd18: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38dd18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38dd1c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x38dd1cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38dd20: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x38dd20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38dd24: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x38dd24u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x38dd28: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x38dd28u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x38dd2c: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x38dd2cu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x38dd30: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x38dd30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38dd34: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x38dd34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38dd38:
    // 0x38dd38: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38dd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38dd3c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38dd3cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38dd40: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38dd40u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38dd44: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38dd44u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38dd48: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38dd48u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38dd4c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38dd4cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38dd50: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x38dd50u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x38dd54: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x38dd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x38dd58: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x38dd58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x38dd5c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x38dd5cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38dd60: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x38dd60u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38dd64: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38dd64u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38dd68: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x38DD68u;
    {
        const bool branch_taken_0x38dd68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD68u;
        // 0x38dd6c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd68) {
            ctx->pc = 0x38DDDCu;
            goto label_38dddc;
        }
    }
    ctx->pc = 0x38DD70u;
label_38dd70:
    // 0x38dd70: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x38dd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x38dd74: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x38dd74u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38dd78: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x38dd78u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38dd7c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x38dd7cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38dd80: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x38dd80u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38dd84: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x38dd84u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38dd88: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x38dd88u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x38dd8c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x38dd8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x38dd90: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x38dd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x38dd94: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x38dd94u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x38dd98: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x38dd98u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x38dd9c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x38dd9cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x38dda0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x38dda0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38dda4: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x38dda4u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x38dda8: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x38dda8u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38ddac: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x38ddacu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x38ddb0: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x38ddb0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x38ddb4: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x38ddb4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x38ddb8: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x38ddb8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x38ddbc: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x38ddbcu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38ddc0: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x38ddc0u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x38ddc4: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x38ddc4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x38ddc8: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x38ddc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x38ddcc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x38ddccu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x38ddd0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x38ddd0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x38ddd4: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x38DDD4u;
    {
        const bool branch_taken_0x38ddd4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x38DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDD4u;
        // 0x38ddd8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ddd4) {
            ctx->pc = 0x38DD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dd70;
        }
    }
    ctx->pc = 0x38DDDCu;
label_38dddc:
    // 0x38dddc: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x38dddcu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x38dde0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x38dde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x38dde4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38dde4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38dde8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x38dde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x38ddec: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x38ddecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x38ddf0: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x38DDF0u;
    {
        const bool branch_taken_0x38ddf0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDF0u;
        // 0x38ddf4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ddf0) {
            ctx->pc = 0x38DD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dd70;
        }
    }
    ctx->pc = 0x38DDF8u;
    // 0x38ddf8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x38ddf8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38ddfc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x38ddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38de00: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x38de00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x38de04: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x38de04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x38de08: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x38de08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x38de0c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x38de0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x38de10: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x38de10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x38de14: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x38DE14u;
    {
        const bool branch_taken_0x38de14 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE14u;
        // 0x38de18: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de14) {
            ctx->pc = 0x38DD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dd38;
        }
    }
    ctx->pc = 0x38DE1Cu;
    // 0x38de1c: 0x3e00008  jr          $ra
    ctx->pc = 0x38DE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DE24u;
    // 0x38de24: 0x0  nop
    ctx->pc = 0x38de24u;
    // NOP
    ctx->pc = 0x38de28u;
}
