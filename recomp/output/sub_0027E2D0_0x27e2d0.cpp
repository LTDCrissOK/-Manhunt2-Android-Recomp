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

// Function: sub_0027E2D0
// Address: 0x27e2d0 - 0x27f518
void sub_0027E2D0_0x27e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E2D0_0x27e2d0");
#endif

    switch (ctx->pc) {
        case 0x27e308u: goto label_27e308;
        case 0x27e31cu: goto label_27e31c;
        case 0x27e350u: goto label_27e350;
        case 0x27e3a0u: goto label_27e3a0;
        case 0x27e3b8u: goto label_27e3b8;
        case 0x27e3ccu: goto label_27e3cc;
        case 0x27e3e4u: goto label_27e3e4;
        case 0x27e3f8u: goto label_27e3f8;
        case 0x27e410u: goto label_27e410;
        case 0x27e424u: goto label_27e424;
        case 0x27e43cu: goto label_27e43c;
        case 0x27e450u: goto label_27e450;
        case 0x27e468u: goto label_27e468;
        case 0x27e47cu: goto label_27e47c;
        case 0x27e494u: goto label_27e494;
        case 0x27e4a8u: goto label_27e4a8;
        case 0x27e4c0u: goto label_27e4c0;
        case 0x27e4d4u: goto label_27e4d4;
        case 0x27e4ecu: goto label_27e4ec;
        case 0x27e500u: goto label_27e500;
        case 0x27e518u: goto label_27e518;
        case 0x27e52cu: goto label_27e52c;
        case 0x27e544u: goto label_27e544;
        case 0x27e558u: goto label_27e558;
        case 0x27e570u: goto label_27e570;
        case 0x27e584u: goto label_27e584;
        case 0x27e59cu: goto label_27e59c;
        case 0x27e5b0u: goto label_27e5b0;
        case 0x27e5c8u: goto label_27e5c8;
        case 0x27e5dcu: goto label_27e5dc;
        case 0x27e5f4u: goto label_27e5f4;
        case 0x27e608u: goto label_27e608;
        case 0x27e620u: goto label_27e620;
        case 0x27e634u: goto label_27e634;
        case 0x27e64cu: goto label_27e64c;
        case 0x27e660u: goto label_27e660;
        case 0x27e678u: goto label_27e678;
        case 0x27e68cu: goto label_27e68c;
        case 0x27e6a4u: goto label_27e6a4;
        case 0x27e6b8u: goto label_27e6b8;
        case 0x27e6d0u: goto label_27e6d0;
        case 0x27e6e4u: goto label_27e6e4;
        case 0x27e6fcu: goto label_27e6fc;
        case 0x27e710u: goto label_27e710;
        case 0x27e728u: goto label_27e728;
        case 0x27e73cu: goto label_27e73c;
        case 0x27e754u: goto label_27e754;
        case 0x27e768u: goto label_27e768;
        case 0x27e780u: goto label_27e780;
        case 0x27e794u: goto label_27e794;
        case 0x27e7acu: goto label_27e7ac;
        case 0x27e7c0u: goto label_27e7c0;
        case 0x27e7d8u: goto label_27e7d8;
        case 0x27e7ecu: goto label_27e7ec;
        case 0x27e804u: goto label_27e804;
        case 0x27e818u: goto label_27e818;
        case 0x27e830u: goto label_27e830;
        case 0x27e844u: goto label_27e844;
        case 0x27e85cu: goto label_27e85c;
        case 0x27e870u: goto label_27e870;
        case 0x27e888u: goto label_27e888;
        case 0x27e89cu: goto label_27e89c;
        case 0x27e8b4u: goto label_27e8b4;
        case 0x27e8c8u: goto label_27e8c8;
        case 0x27e8e0u: goto label_27e8e0;
        case 0x27e8f4u: goto label_27e8f4;
        case 0x27e90cu: goto label_27e90c;
        case 0x27e920u: goto label_27e920;
        case 0x27e938u: goto label_27e938;
        case 0x27e94cu: goto label_27e94c;
        case 0x27e964u: goto label_27e964;
        case 0x27e978u: goto label_27e978;
        case 0x27e998u: goto label_27e998;
        case 0x27e9acu: goto label_27e9ac;
        case 0x27e9c4u: goto label_27e9c4;
        case 0x27e9d8u: goto label_27e9d8;
        case 0x27e9f0u: goto label_27e9f0;
        case 0x27ea04u: goto label_27ea04;
        case 0x27ea1cu: goto label_27ea1c;
        case 0x27ea30u: goto label_27ea30;
        case 0x27ea48u: goto label_27ea48;
        case 0x27ea5cu: goto label_27ea5c;
        case 0x27ea74u: goto label_27ea74;
        case 0x27ea88u: goto label_27ea88;
        case 0x27eaa0u: goto label_27eaa0;
        case 0x27eab4u: goto label_27eab4;
        case 0x27eaccu: goto label_27eacc;
        case 0x27eae0u: goto label_27eae0;
        case 0x27eaf8u: goto label_27eaf8;
        case 0x27eb0cu: goto label_27eb0c;
        case 0x27eb24u: goto label_27eb24;
        case 0x27eb38u: goto label_27eb38;
        case 0x27eb58u: goto label_27eb58;
        case 0x27eb78u: goto label_27eb78;
        case 0x27eb98u: goto label_27eb98;
        case 0x27ebb8u: goto label_27ebb8;
        case 0x27ebd8u: goto label_27ebd8;
        case 0x27ebf8u: goto label_27ebf8;
        case 0x27ec18u: goto label_27ec18;
        case 0x27ec38u: goto label_27ec38;
        case 0x27ec58u: goto label_27ec58;
        case 0x27ec78u: goto label_27ec78;
        case 0x27ec98u: goto label_27ec98;
        case 0x27ecb8u: goto label_27ecb8;
        case 0x27ecd8u: goto label_27ecd8;
        case 0x27ecf8u: goto label_27ecf8;
        case 0x27ed18u: goto label_27ed18;
        case 0x27ed38u: goto label_27ed38;
        case 0x27ed58u: goto label_27ed58;
        case 0x27ed78u: goto label_27ed78;
        case 0x27ed98u: goto label_27ed98;
        case 0x27edb8u: goto label_27edb8;
        case 0x27edd8u: goto label_27edd8;
        case 0x27edf8u: goto label_27edf8;
        case 0x27ee18u: goto label_27ee18;
        case 0x27ee38u: goto label_27ee38;
        case 0x27ee58u: goto label_27ee58;
        case 0x27ee78u: goto label_27ee78;
        case 0x27ee98u: goto label_27ee98;
        case 0x27eeb8u: goto label_27eeb8;
        case 0x27eed8u: goto label_27eed8;
        case 0x27eef8u: goto label_27eef8;
        case 0x27ef18u: goto label_27ef18;
        case 0x27ef38u: goto label_27ef38;
        case 0x27ef58u: goto label_27ef58;
        case 0x27ef78u: goto label_27ef78;
        case 0x27ef98u: goto label_27ef98;
        case 0x27efb8u: goto label_27efb8;
        case 0x27efd8u: goto label_27efd8;
        case 0x27eff8u: goto label_27eff8;
        case 0x27f018u: goto label_27f018;
        case 0x27f038u: goto label_27f038;
        case 0x27f058u: goto label_27f058;
        case 0x27f078u: goto label_27f078;
        case 0x27f098u: goto label_27f098;
        case 0x27f0b8u: goto label_27f0b8;
        case 0x27f0d8u: goto label_27f0d8;
        case 0x27f0f8u: goto label_27f0f8;
        case 0x27f118u: goto label_27f118;
        case 0x27f138u: goto label_27f138;
        case 0x27f158u: goto label_27f158;
        case 0x27f178u: goto label_27f178;
        case 0x27f198u: goto label_27f198;
        case 0x27f1b8u: goto label_27f1b8;
        case 0x27f1d4u: goto label_27f1d4;
        case 0x27f1e8u: goto label_27f1e8;
        case 0x27f204u: goto label_27f204;
        case 0x27f220u: goto label_27f220;
        case 0x27f23cu: goto label_27f23c;
        case 0x27f258u: goto label_27f258;
        case 0x27f274u: goto label_27f274;
        case 0x27f288u: goto label_27f288;
        case 0x27f2a4u: goto label_27f2a4;
        case 0x27f2b8u: goto label_27f2b8;
        case 0x27f2d4u: goto label_27f2d4;
        case 0x27f2e8u: goto label_27f2e8;
        case 0x27f304u: goto label_27f304;
        case 0x27f318u: goto label_27f318;
        case 0x27f32cu: goto label_27f32c;
        case 0x27f340u: goto label_27f340;
        case 0x27f35cu: goto label_27f35c;
        case 0x27f378u: goto label_27f378;
        case 0x27f394u: goto label_27f394;
        case 0x27f3b0u: goto label_27f3b0;
        case 0x27f3ccu: goto label_27f3cc;
        case 0x27f3e8u: goto label_27f3e8;
        case 0x27f404u: goto label_27f404;
        case 0x27f420u: goto label_27f420;
        case 0x27f43cu: goto label_27f43c;
        case 0x27f450u: goto label_27f450;
        case 0x27f47cu: goto label_27f47c;
        case 0x27f4c4u: goto label_27f4c4;
        default: break;
    }

    ctx->pc = 0x27e2d0u;

    // 0x27e2d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27e2d4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x27e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x27e2d8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x27e2dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27e2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2e0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27e2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27e2e4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x27e2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e2e8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x27e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x27e2ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27e2ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2f0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27e2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27e2f4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27e2f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2f8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x27e2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x27e2fc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x27e2fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e300: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x27e300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x27e304: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x27e304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_27e308:
    // 0x27e308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e30c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e310: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27e310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27e314: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x27E314u;
    SET_GPR_U32(ctx, 31, 0x27E31Cu);
    ctx->pc = 0x27E318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E314u;
    // 0x27e318: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x27E314u, 0x27E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E31Cu;
label_27e31c:
    // 0x27e31c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x27e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27e320: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x27e320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x27e324: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x27e324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27e328: 0x76102a  slt         $v0, $v1, $s6
    ctx->pc = 0x27e328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x27e32c: 0x1040045f  beqz        $v0, . + 4 + (0x45F << 2)
    ctx->pc = 0x27E32Cu;
    {
        const bool branch_taken_0x27e32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E32Cu;
        // 0x27e330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e32c) {
            ctx->pc = 0x27F4ACu;
            goto label_27f4ac;
        }
    }
    ctx->pc = 0x27E334u;
    // 0x27e334: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x27e334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x27e338: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x27e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x27e33c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x27e33cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e340: 0x54660003  bnel        $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E340u;
    {
        const bool branch_taken_0x27e340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x27e340) {
            ctx->pc = 0x27E344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E340u;
            // 0x27e344: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E350u;
            goto label_27e350;
        }
    }
    ctx->pc = 0x27E348u;
    // 0x27e348: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27E348u;
    {
        const bool branch_taken_0x27e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E348u;
        // 0x27e34c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e348) {
            ctx->pc = 0x27E384u;
            goto label_27e384;
        }
    }
    ctx->pc = 0x27E350u;
label_27e350:
    // 0x27e350: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27e350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27e354: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x27e354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x27e358: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x27e358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27e35c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27e360: 0x76102a  slt         $v0, $v1, $s6
    ctx->pc = 0x27e360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x27e364: 0x10400451  beqz        $v0, . + 4 + (0x451 << 2)
    ctx->pc = 0x27E364u;
    {
        const bool branch_taken_0x27e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E364u;
        // 0x27e368: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e364) {
            ctx->pc = 0x27F4ACu;
            goto label_27f4ac;
        }
    }
    ctx->pc = 0x27E36Cu;
    // 0x27e36c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x27e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x27e370: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x27e370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x27e374: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x27e374u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e378: 0x5466fff5  bnel        $v1, $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x27E378u;
    {
        const bool branch_taken_0x27e378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x27e378) {
            ctx->pc = 0x27E37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E378u;
            // 0x27e37c: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e350;
        }
    }
    ctx->pc = 0x27E380u;
    // 0x27e380: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x27e380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_27e384:
    // 0x27e384: 0x1a600451  blez        $s3, . + 4 + (0x451 << 2)
    ctx->pc = 0x27E384u;
    {
        const bool branch_taken_0x27e384 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x27E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E384u;
        // 0x27e388: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e384) {
            ctx->pc = 0x27F4CCu;
            goto label_27f4cc;
        }
    }
    ctx->pc = 0x27E38Cu;
    // 0x27e38c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27e38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27e390: 0x8c50aff4  lw          $s0, -0x500C($v0)
    ctx->pc = 0x27e390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946804)));
    // 0x27e394: 0x24a598b8  addiu       $a1, $a1, -0x6748
    ctx->pc = 0x27e394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940856));
    // 0x27e398: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E398u;
    SET_GPR_U32(ctx, 31, 0x27E3A0u);
    ctx->pc = 0x27E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E398u;
    // 0x27e39c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E398u, 0x27E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3A0u;
label_27e3a0:
    // 0x27e3a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E3A0u;
    {
        const bool branch_taken_0x27e3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3A0u;
        // 0x27e3a4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3a0) {
            ctx->pc = 0x27E3C0u;
            goto label_27e3c0;
        }
    }
    ctx->pc = 0x27E3A8u;
    // 0x27e3a8: 0x52000435  beql        $s0, $zero, . + 4 + (0x435 << 2)
    ctx->pc = 0x27E3A8u;
    {
        const bool branch_taken_0x27e3a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e3a8) {
            ctx->pc = 0x27E3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E3A8u;
            // 0x27e3ac: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E3B0u;
    // 0x27e3b0: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E3B0u;
    SET_GPR_U32(ctx, 31, 0x27E3B8u);
    ctx->pc = 0x27E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3B0u;
    // 0x27e3b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E3B0u, 0x27E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3B8u;
label_27e3b8:
    // 0x27e3b8: 0x10000431  b           . + 4 + (0x431 << 2)
    ctx->pc = 0x27E3B8u;
    {
        const bool branch_taken_0x27e3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3B8u;
        // 0x27e3bc: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3b8) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E3C0u;
label_27e3c0:
    // 0x27e3c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e3c4: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E3C4u;
    SET_GPR_U32(ctx, 31, 0x27E3CCu);
    ctx->pc = 0x27E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3C4u;
    // 0x27e3c8: 0x24a598c0  addiu       $a1, $a1, -0x6740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E3C4u, 0x27E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3CCu;
label_27e3cc:
    // 0x27e3cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E3CCu;
    {
        const bool branch_taken_0x27e3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3CCu;
        // 0x27e3d0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3cc) {
            ctx->pc = 0x27E3ECu;
            goto label_27e3ec;
        }
    }
    ctx->pc = 0x27E3D4u;
    // 0x27e3d4: 0x5200042a  beql        $s0, $zero, . + 4 + (0x42A << 2)
    ctx->pc = 0x27E3D4u;
    {
        const bool branch_taken_0x27e3d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e3d4) {
            ctx->pc = 0x27E3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E3D4u;
            // 0x27e3d8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E3DCu;
    // 0x27e3dc: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E3DCu;
    SET_GPR_U32(ctx, 31, 0x27E3E4u);
    ctx->pc = 0x27E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3DCu;
    // 0x27e3e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E3DCu, 0x27E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3E4u;
label_27e3e4:
    // 0x27e3e4: 0x10000426  b           . + 4 + (0x426 << 2)
    ctx->pc = 0x27E3E4u;
    {
        const bool branch_taken_0x27e3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3E4u;
        // 0x27e3e8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3e4) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E3ECu;
label_27e3ec:
    // 0x27e3ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e3f0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E3F0u;
    SET_GPR_U32(ctx, 31, 0x27E3F8u);
    ctx->pc = 0x27E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3F0u;
    // 0x27e3f4: 0x24a598c8  addiu       $a1, $a1, -0x6738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E3F0u, 0x27E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3F8u;
label_27e3f8:
    // 0x27e3f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E3F8u;
    {
        const bool branch_taken_0x27e3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3F8u;
        // 0x27e3fc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3f8) {
            ctx->pc = 0x27E418u;
            goto label_27e418;
        }
    }
    ctx->pc = 0x27E400u;
    // 0x27e400: 0x5200041f  beql        $s0, $zero, . + 4 + (0x41F << 2)
    ctx->pc = 0x27E400u;
    {
        const bool branch_taken_0x27e400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e400) {
            ctx->pc = 0x27E404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E400u;
            // 0x27e404: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E408u;
    // 0x27e408: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E408u;
    SET_GPR_U32(ctx, 31, 0x27E410u);
    ctx->pc = 0x27E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E408u;
    // 0x27e40c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E408u, 0x27E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E410u;
label_27e410:
    // 0x27e410: 0x1000041b  b           . + 4 + (0x41B << 2)
    ctx->pc = 0x27E410u;
    {
        const bool branch_taken_0x27e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E410u;
        // 0x27e414: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e410) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E418u;
label_27e418:
    // 0x27e418: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e41c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E41Cu;
    SET_GPR_U32(ctx, 31, 0x27E424u);
    ctx->pc = 0x27E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E41Cu;
    // 0x27e420: 0x24a598d0  addiu       $a1, $a1, -0x6730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E41Cu, 0x27E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E424u;
label_27e424:
    // 0x27e424: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E424u;
    {
        const bool branch_taken_0x27e424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E424u;
        // 0x27e428: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e424) {
            ctx->pc = 0x27E444u;
            goto label_27e444;
        }
    }
    ctx->pc = 0x27E42Cu;
    // 0x27e42c: 0x52000414  beql        $s0, $zero, . + 4 + (0x414 << 2)
    ctx->pc = 0x27E42Cu;
    {
        const bool branch_taken_0x27e42c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e42c) {
            ctx->pc = 0x27E430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E42Cu;
            // 0x27e430: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E434u;
    // 0x27e434: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E434u;
    SET_GPR_U32(ctx, 31, 0x27E43Cu);
    ctx->pc = 0x27E438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E434u;
    // 0x27e438: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E434u, 0x27E43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E43Cu;
label_27e43c:
    // 0x27e43c: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x27E43Cu;
    {
        const bool branch_taken_0x27e43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E43Cu;
        // 0x27e440: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e43c) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E444u;
label_27e444:
    // 0x27e444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e448: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E448u;
    SET_GPR_U32(ctx, 31, 0x27E450u);
    ctx->pc = 0x27E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E448u;
    // 0x27e44c: 0x24a598d8  addiu       $a1, $a1, -0x6728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E448u, 0x27E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E450u;
label_27e450:
    // 0x27e450: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E450u;
    {
        const bool branch_taken_0x27e450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E450u;
        // 0x27e454: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e450) {
            ctx->pc = 0x27E470u;
            goto label_27e470;
        }
    }
    ctx->pc = 0x27E458u;
    // 0x27e458: 0x52000409  beql        $s0, $zero, . + 4 + (0x409 << 2)
    ctx->pc = 0x27E458u;
    {
        const bool branch_taken_0x27e458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e458) {
            ctx->pc = 0x27E45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E458u;
            // 0x27e45c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E460u;
    // 0x27e460: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E460u;
    SET_GPR_U32(ctx, 31, 0x27E468u);
    ctx->pc = 0x27E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E460u;
    // 0x27e464: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E460u, 0x27E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E468u;
label_27e468:
    // 0x27e468: 0x10000405  b           . + 4 + (0x405 << 2)
    ctx->pc = 0x27E468u;
    {
        const bool branch_taken_0x27e468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E468u;
        // 0x27e46c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e468) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E470u;
label_27e470:
    // 0x27e470: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e474: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E474u;
    SET_GPR_U32(ctx, 31, 0x27E47Cu);
    ctx->pc = 0x27E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E474u;
    // 0x27e478: 0x24a598e0  addiu       $a1, $a1, -0x6720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E474u, 0x27E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E47Cu;
label_27e47c:
    // 0x27e47c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E47Cu;
    {
        const bool branch_taken_0x27e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E47Cu;
        // 0x27e480: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e47c) {
            ctx->pc = 0x27E49Cu;
            goto label_27e49c;
        }
    }
    ctx->pc = 0x27E484u;
    // 0x27e484: 0x520003fe  beql        $s0, $zero, . + 4 + (0x3FE << 2)
    ctx->pc = 0x27E484u;
    {
        const bool branch_taken_0x27e484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e484) {
            ctx->pc = 0x27E488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E484u;
            // 0x27e488: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E48Cu;
    // 0x27e48c: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E48Cu;
    SET_GPR_U32(ctx, 31, 0x27E494u);
    ctx->pc = 0x27E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E48Cu;
    // 0x27e490: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E48Cu, 0x27E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E494u;
label_27e494:
    // 0x27e494: 0x100003fa  b           . + 4 + (0x3FA << 2)
    ctx->pc = 0x27E494u;
    {
        const bool branch_taken_0x27e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E494u;
        // 0x27e498: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e494) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E49Cu;
label_27e49c:
    // 0x27e49c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e4a0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E4A0u;
    SET_GPR_U32(ctx, 31, 0x27E4A8u);
    ctx->pc = 0x27E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4A0u;
    // 0x27e4a4: 0x24a598e8  addiu       $a1, $a1, -0x6718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E4A0u, 0x27E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4A8u;
label_27e4a8:
    // 0x27e4a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E4A8u;
    {
        const bool branch_taken_0x27e4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4A8u;
        // 0x27e4ac: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4a8) {
            ctx->pc = 0x27E4C8u;
            goto label_27e4c8;
        }
    }
    ctx->pc = 0x27E4B0u;
    // 0x27e4b0: 0x520003f3  beql        $s0, $zero, . + 4 + (0x3F3 << 2)
    ctx->pc = 0x27E4B0u;
    {
        const bool branch_taken_0x27e4b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e4b0) {
            ctx->pc = 0x27E4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E4B0u;
            // 0x27e4b4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E4B8u;
    // 0x27e4b8: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E4B8u;
    SET_GPR_U32(ctx, 31, 0x27E4C0u);
    ctx->pc = 0x27E4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4B8u;
    // 0x27e4bc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E4B8u, 0x27E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4C0u;
label_27e4c0:
    // 0x27e4c0: 0x100003ef  b           . + 4 + (0x3EF << 2)
    ctx->pc = 0x27E4C0u;
    {
        const bool branch_taken_0x27e4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4C0u;
        // 0x27e4c4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4c0) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E4C8u;
label_27e4c8:
    // 0x27e4c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e4cc: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E4CCu;
    SET_GPR_U32(ctx, 31, 0x27E4D4u);
    ctx->pc = 0x27E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4CCu;
    // 0x27e4d0: 0x24a598f0  addiu       $a1, $a1, -0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E4CCu, 0x27E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4D4u;
label_27e4d4:
    // 0x27e4d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E4D4u;
    {
        const bool branch_taken_0x27e4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4D4u;
        // 0x27e4d8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4d4) {
            ctx->pc = 0x27E4F4u;
            goto label_27e4f4;
        }
    }
    ctx->pc = 0x27E4DCu;
    // 0x27e4dc: 0x520003e8  beql        $s0, $zero, . + 4 + (0x3E8 << 2)
    ctx->pc = 0x27E4DCu;
    {
        const bool branch_taken_0x27e4dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e4dc) {
            ctx->pc = 0x27E4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E4DCu;
            // 0x27e4e0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E4E4u;
    // 0x27e4e4: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E4E4u;
    SET_GPR_U32(ctx, 31, 0x27E4ECu);
    ctx->pc = 0x27E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4E4u;
    // 0x27e4e8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E4E4u, 0x27E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4ECu;
label_27e4ec:
    // 0x27e4ec: 0x100003e4  b           . + 4 + (0x3E4 << 2)
    ctx->pc = 0x27E4ECu;
    {
        const bool branch_taken_0x27e4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4ECu;
        // 0x27e4f0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4ec) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E4F4u;
label_27e4f4:
    // 0x27e4f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e4f8: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E4F8u;
    SET_GPR_U32(ctx, 31, 0x27E500u);
    ctx->pc = 0x27E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4F8u;
    // 0x27e4fc: 0x24a598f8  addiu       $a1, $a1, -0x6708 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E4F8u, 0x27E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E500u;
label_27e500:
    // 0x27e500: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E500u;
    {
        const bool branch_taken_0x27e500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E500u;
        // 0x27e504: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e500) {
            ctx->pc = 0x27E520u;
            goto label_27e520;
        }
    }
    ctx->pc = 0x27E508u;
    // 0x27e508: 0x520003dd  beql        $s0, $zero, . + 4 + (0x3DD << 2)
    ctx->pc = 0x27E508u;
    {
        const bool branch_taken_0x27e508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e508) {
            ctx->pc = 0x27E50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E508u;
            // 0x27e50c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E510u;
    // 0x27e510: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E510u;
    SET_GPR_U32(ctx, 31, 0x27E518u);
    ctx->pc = 0x27E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E510u;
    // 0x27e514: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E510u, 0x27E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E518u;
label_27e518:
    // 0x27e518: 0x100003d9  b           . + 4 + (0x3D9 << 2)
    ctx->pc = 0x27E518u;
    {
        const bool branch_taken_0x27e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E518u;
        // 0x27e51c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e518) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E520u;
label_27e520:
    // 0x27e520: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e524: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E524u;
    SET_GPR_U32(ctx, 31, 0x27E52Cu);
    ctx->pc = 0x27E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E524u;
    // 0x27e528: 0x24a59900  addiu       $a1, $a1, -0x6700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E524u, 0x27E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E52Cu;
label_27e52c:
    // 0x27e52c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E52Cu;
    {
        const bool branch_taken_0x27e52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E52Cu;
        // 0x27e530: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e52c) {
            ctx->pc = 0x27E54Cu;
            goto label_27e54c;
        }
    }
    ctx->pc = 0x27E534u;
    // 0x27e534: 0x520003d2  beql        $s0, $zero, . + 4 + (0x3D2 << 2)
    ctx->pc = 0x27E534u;
    {
        const bool branch_taken_0x27e534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e534) {
            ctx->pc = 0x27E538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E534u;
            // 0x27e538: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E53Cu;
    // 0x27e53c: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E53Cu;
    SET_GPR_U32(ctx, 31, 0x27E544u);
    ctx->pc = 0x27E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E53Cu;
    // 0x27e540: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E53Cu, 0x27E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E544u;
label_27e544:
    // 0x27e544: 0x100003ce  b           . + 4 + (0x3CE << 2)
    ctx->pc = 0x27E544u;
    {
        const bool branch_taken_0x27e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E544u;
        // 0x27e548: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e544) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E54Cu;
label_27e54c:
    // 0x27e54c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e550: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E550u;
    SET_GPR_U32(ctx, 31, 0x27E558u);
    ctx->pc = 0x27E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E550u;
    // 0x27e554: 0x24a59908  addiu       $a1, $a1, -0x66F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E550u, 0x27E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E558u;
label_27e558:
    // 0x27e558: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E558u;
    {
        const bool branch_taken_0x27e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E558u;
        // 0x27e55c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e558) {
            ctx->pc = 0x27E578u;
            goto label_27e578;
        }
    }
    ctx->pc = 0x27E560u;
    // 0x27e560: 0x520003c7  beql        $s0, $zero, . + 4 + (0x3C7 << 2)
    ctx->pc = 0x27E560u;
    {
        const bool branch_taken_0x27e560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e560) {
            ctx->pc = 0x27E564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E560u;
            // 0x27e564: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E568u;
    // 0x27e568: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E568u;
    SET_GPR_U32(ctx, 31, 0x27E570u);
    ctx->pc = 0x27E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E568u;
    // 0x27e56c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E568u, 0x27E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E570u;
label_27e570:
    // 0x27e570: 0x100003c3  b           . + 4 + (0x3C3 << 2)
    ctx->pc = 0x27E570u;
    {
        const bool branch_taken_0x27e570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E570u;
        // 0x27e574: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e570) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E578u;
label_27e578:
    // 0x27e578: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e57c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E57Cu;
    SET_GPR_U32(ctx, 31, 0x27E584u);
    ctx->pc = 0x27E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E57Cu;
    // 0x27e580: 0x24a59910  addiu       $a1, $a1, -0x66F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E57Cu, 0x27E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E584u;
label_27e584:
    // 0x27e584: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E584u;
    {
        const bool branch_taken_0x27e584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E584u;
        // 0x27e588: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e584) {
            ctx->pc = 0x27E5A4u;
            goto label_27e5a4;
        }
    }
    ctx->pc = 0x27E58Cu;
    // 0x27e58c: 0x520003bc  beql        $s0, $zero, . + 4 + (0x3BC << 2)
    ctx->pc = 0x27E58Cu;
    {
        const bool branch_taken_0x27e58c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e58c) {
            ctx->pc = 0x27E590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E58Cu;
            // 0x27e590: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E594u;
    // 0x27e594: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E594u;
    SET_GPR_U32(ctx, 31, 0x27E59Cu);
    ctx->pc = 0x27E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E594u;
    // 0x27e598: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E594u, 0x27E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E59Cu;
label_27e59c:
    // 0x27e59c: 0x100003b8  b           . + 4 + (0x3B8 << 2)
    ctx->pc = 0x27E59Cu;
    {
        const bool branch_taken_0x27e59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E59Cu;
        // 0x27e5a0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e59c) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E5A4u;
label_27e5a4:
    // 0x27e5a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e5a8: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E5A8u;
    SET_GPR_U32(ctx, 31, 0x27E5B0u);
    ctx->pc = 0x27E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5A8u;
    // 0x27e5ac: 0x24a59918  addiu       $a1, $a1, -0x66E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E5A8u, 0x27E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5B0u;
label_27e5b0:
    // 0x27e5b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E5B0u;
    {
        const bool branch_taken_0x27e5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5B0u;
        // 0x27e5b4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5b0) {
            ctx->pc = 0x27E5D0u;
            goto label_27e5d0;
        }
    }
    ctx->pc = 0x27E5B8u;
    // 0x27e5b8: 0x520003b1  beql        $s0, $zero, . + 4 + (0x3B1 << 2)
    ctx->pc = 0x27E5B8u;
    {
        const bool branch_taken_0x27e5b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e5b8) {
            ctx->pc = 0x27E5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E5B8u;
            // 0x27e5bc: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E5C0u;
    // 0x27e5c0: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E5C0u;
    SET_GPR_U32(ctx, 31, 0x27E5C8u);
    ctx->pc = 0x27E5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5C0u;
    // 0x27e5c4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E5C0u, 0x27E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5C8u;
label_27e5c8:
    // 0x27e5c8: 0x100003ad  b           . + 4 + (0x3AD << 2)
    ctx->pc = 0x27E5C8u;
    {
        const bool branch_taken_0x27e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5C8u;
        // 0x27e5cc: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5c8) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E5D0u;
label_27e5d0:
    // 0x27e5d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e5d4: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E5D4u;
    SET_GPR_U32(ctx, 31, 0x27E5DCu);
    ctx->pc = 0x27E5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5D4u;
    // 0x27e5d8: 0x24a59920  addiu       $a1, $a1, -0x66E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E5D4u, 0x27E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5DCu;
label_27e5dc:
    // 0x27e5dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E5DCu;
    {
        const bool branch_taken_0x27e5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5DCu;
        // 0x27e5e0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5dc) {
            ctx->pc = 0x27E5FCu;
            goto label_27e5fc;
        }
    }
    ctx->pc = 0x27E5E4u;
    // 0x27e5e4: 0x520003a6  beql        $s0, $zero, . + 4 + (0x3A6 << 2)
    ctx->pc = 0x27E5E4u;
    {
        const bool branch_taken_0x27e5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e5e4) {
            ctx->pc = 0x27E5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E5E4u;
            // 0x27e5e8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E5ECu;
    // 0x27e5ec: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E5ECu;
    SET_GPR_U32(ctx, 31, 0x27E5F4u);
    ctx->pc = 0x27E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5ECu;
    // 0x27e5f0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E5ECu, 0x27E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5F4u;
label_27e5f4:
    // 0x27e5f4: 0x100003a2  b           . + 4 + (0x3A2 << 2)
    ctx->pc = 0x27E5F4u;
    {
        const bool branch_taken_0x27e5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5F4u;
        // 0x27e5f8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5f4) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E5FCu;
label_27e5fc:
    // 0x27e5fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e600: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E600u;
    SET_GPR_U32(ctx, 31, 0x27E608u);
    ctx->pc = 0x27E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E600u;
    // 0x27e604: 0x24a59928  addiu       $a1, $a1, -0x66D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E600u, 0x27E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E608u;
label_27e608:
    // 0x27e608: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E608u;
    {
        const bool branch_taken_0x27e608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E608u;
        // 0x27e60c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e608) {
            ctx->pc = 0x27E628u;
            goto label_27e628;
        }
    }
    ctx->pc = 0x27E610u;
    // 0x27e610: 0x5200039b  beql        $s0, $zero, . + 4 + (0x39B << 2)
    ctx->pc = 0x27E610u;
    {
        const bool branch_taken_0x27e610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e610) {
            ctx->pc = 0x27E614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E610u;
            // 0x27e614: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E618u;
    // 0x27e618: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E618u;
    SET_GPR_U32(ctx, 31, 0x27E620u);
    ctx->pc = 0x27E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E618u;
    // 0x27e61c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E618u, 0x27E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E620u;
label_27e620:
    // 0x27e620: 0x10000397  b           . + 4 + (0x397 << 2)
    ctx->pc = 0x27E620u;
    {
        const bool branch_taken_0x27e620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E620u;
        // 0x27e624: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e620) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E628u;
label_27e628:
    // 0x27e628: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e62c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E62Cu;
    SET_GPR_U32(ctx, 31, 0x27E634u);
    ctx->pc = 0x27E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E62Cu;
    // 0x27e630: 0x24a59930  addiu       $a1, $a1, -0x66D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E62Cu, 0x27E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E634u;
label_27e634:
    // 0x27e634: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E634u;
    {
        const bool branch_taken_0x27e634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E634u;
        // 0x27e638: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e634) {
            ctx->pc = 0x27E654u;
            goto label_27e654;
        }
    }
    ctx->pc = 0x27E63Cu;
    // 0x27e63c: 0x52000390  beql        $s0, $zero, . + 4 + (0x390 << 2)
    ctx->pc = 0x27E63Cu;
    {
        const bool branch_taken_0x27e63c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e63c) {
            ctx->pc = 0x27E640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E63Cu;
            // 0x27e640: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E644u;
    // 0x27e644: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E644u;
    SET_GPR_U32(ctx, 31, 0x27E64Cu);
    ctx->pc = 0x27E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E644u;
    // 0x27e648: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E644u, 0x27E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E64Cu;
label_27e64c:
    // 0x27e64c: 0x1000038c  b           . + 4 + (0x38C << 2)
    ctx->pc = 0x27E64Cu;
    {
        const bool branch_taken_0x27e64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E64Cu;
        // 0x27e650: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e64c) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E654u;
label_27e654:
    // 0x27e654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e658: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E658u;
    SET_GPR_U32(ctx, 31, 0x27E660u);
    ctx->pc = 0x27E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E658u;
    // 0x27e65c: 0x24a59938  addiu       $a1, $a1, -0x66C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E658u, 0x27E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E660u;
label_27e660:
    // 0x27e660: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E660u;
    {
        const bool branch_taken_0x27e660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E660u;
        // 0x27e664: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e660) {
            ctx->pc = 0x27E680u;
            goto label_27e680;
        }
    }
    ctx->pc = 0x27E668u;
    // 0x27e668: 0x52000385  beql        $s0, $zero, . + 4 + (0x385 << 2)
    ctx->pc = 0x27E668u;
    {
        const bool branch_taken_0x27e668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e668) {
            ctx->pc = 0x27E66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E668u;
            // 0x27e66c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E670u;
    // 0x27e670: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E670u;
    SET_GPR_U32(ctx, 31, 0x27E678u);
    ctx->pc = 0x27E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E670u;
    // 0x27e674: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E670u, 0x27E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E678u;
label_27e678:
    // 0x27e678: 0x10000381  b           . + 4 + (0x381 << 2)
    ctx->pc = 0x27E678u;
    {
        const bool branch_taken_0x27e678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E678u;
        // 0x27e67c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e678) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E680u;
label_27e680:
    // 0x27e680: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e684: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E684u;
    SET_GPR_U32(ctx, 31, 0x27E68Cu);
    ctx->pc = 0x27E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E684u;
    // 0x27e688: 0x24a59940  addiu       $a1, $a1, -0x66C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E684u, 0x27E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E68Cu;
label_27e68c:
    // 0x27e68c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E68Cu;
    {
        const bool branch_taken_0x27e68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E68Cu;
        // 0x27e690: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e68c) {
            ctx->pc = 0x27E6ACu;
            goto label_27e6ac;
        }
    }
    ctx->pc = 0x27E694u;
    // 0x27e694: 0x5200037a  beql        $s0, $zero, . + 4 + (0x37A << 2)
    ctx->pc = 0x27E694u;
    {
        const bool branch_taken_0x27e694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e694) {
            ctx->pc = 0x27E698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E694u;
            // 0x27e698: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E69Cu;
    // 0x27e69c: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E69Cu;
    SET_GPR_U32(ctx, 31, 0x27E6A4u);
    ctx->pc = 0x27E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E69Cu;
    // 0x27e6a0: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E69Cu, 0x27E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6A4u;
label_27e6a4:
    // 0x27e6a4: 0x10000376  b           . + 4 + (0x376 << 2)
    ctx->pc = 0x27E6A4u;
    {
        const bool branch_taken_0x27e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6A4u;
        // 0x27e6a8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6a4) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E6ACu;
label_27e6ac:
    // 0x27e6ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6b0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E6B0u;
    SET_GPR_U32(ctx, 31, 0x27E6B8u);
    ctx->pc = 0x27E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6B0u;
    // 0x27e6b4: 0x24a59948  addiu       $a1, $a1, -0x66B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E6B0u, 0x27E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6B8u;
label_27e6b8:
    // 0x27e6b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E6B8u;
    {
        const bool branch_taken_0x27e6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6B8u;
        // 0x27e6bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6b8) {
            ctx->pc = 0x27E6D8u;
            goto label_27e6d8;
        }
    }
    ctx->pc = 0x27E6C0u;
    // 0x27e6c0: 0x5200036f  beql        $s0, $zero, . + 4 + (0x36F << 2)
    ctx->pc = 0x27E6C0u;
    {
        const bool branch_taken_0x27e6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e6c0) {
            ctx->pc = 0x27E6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E6C0u;
            // 0x27e6c4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E6C8u;
    // 0x27e6c8: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E6C8u;
    SET_GPR_U32(ctx, 31, 0x27E6D0u);
    ctx->pc = 0x27E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6C8u;
    // 0x27e6cc: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E6C8u, 0x27E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6D0u;
label_27e6d0:
    // 0x27e6d0: 0x1000036b  b           . + 4 + (0x36B << 2)
    ctx->pc = 0x27E6D0u;
    {
        const bool branch_taken_0x27e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6D0u;
        // 0x27e6d4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6d0) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E6D8u;
label_27e6d8:
    // 0x27e6d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6dc: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E6DCu;
    SET_GPR_U32(ctx, 31, 0x27E6E4u);
    ctx->pc = 0x27E6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6DCu;
    // 0x27e6e0: 0x24a59950  addiu       $a1, $a1, -0x66B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E6DCu, 0x27E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6E4u;
label_27e6e4:
    // 0x27e6e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E6E4u;
    {
        const bool branch_taken_0x27e6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6E4u;
        // 0x27e6e8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6e4) {
            ctx->pc = 0x27E704u;
            goto label_27e704;
        }
    }
    ctx->pc = 0x27E6ECu;
    // 0x27e6ec: 0x52000364  beql        $s0, $zero, . + 4 + (0x364 << 2)
    ctx->pc = 0x27E6ECu;
    {
        const bool branch_taken_0x27e6ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e6ec) {
            ctx->pc = 0x27E6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E6ECu;
            // 0x27e6f0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E6F4u;
    // 0x27e6f4: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E6F4u;
    SET_GPR_U32(ctx, 31, 0x27E6FCu);
    ctx->pc = 0x27E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6F4u;
    // 0x27e6f8: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E6F4u, 0x27E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6FCu;
label_27e6fc:
    // 0x27e6fc: 0x10000360  b           . + 4 + (0x360 << 2)
    ctx->pc = 0x27E6FCu;
    {
        const bool branch_taken_0x27e6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6FCu;
        // 0x27e700: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6fc) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E704u;
label_27e704:
    // 0x27e704: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e708: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E708u;
    SET_GPR_U32(ctx, 31, 0x27E710u);
    ctx->pc = 0x27E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E708u;
    // 0x27e70c: 0x24a59958  addiu       $a1, $a1, -0x66A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E708u, 0x27E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E710u;
label_27e710:
    // 0x27e710: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E710u;
    {
        const bool branch_taken_0x27e710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E710u;
        // 0x27e714: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e710) {
            ctx->pc = 0x27E730u;
            goto label_27e730;
        }
    }
    ctx->pc = 0x27E718u;
    // 0x27e718: 0x52000359  beql        $s0, $zero, . + 4 + (0x359 << 2)
    ctx->pc = 0x27E718u;
    {
        const bool branch_taken_0x27e718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e718) {
            ctx->pc = 0x27E71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E718u;
            // 0x27e71c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E720u;
    // 0x27e720: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E720u;
    SET_GPR_U32(ctx, 31, 0x27E728u);
    ctx->pc = 0x27E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E720u;
    // 0x27e724: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E720u, 0x27E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E728u;
label_27e728:
    // 0x27e728: 0x10000355  b           . + 4 + (0x355 << 2)
    ctx->pc = 0x27E728u;
    {
        const bool branch_taken_0x27e728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E728u;
        // 0x27e72c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e728) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E730u;
label_27e730:
    // 0x27e730: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e734: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E734u;
    SET_GPR_U32(ctx, 31, 0x27E73Cu);
    ctx->pc = 0x27E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E734u;
    // 0x27e738: 0x24a59960  addiu       $a1, $a1, -0x66A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E734u, 0x27E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E73Cu;
label_27e73c:
    // 0x27e73c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E73Cu;
    {
        const bool branch_taken_0x27e73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E73Cu;
        // 0x27e740: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e73c) {
            ctx->pc = 0x27E75Cu;
            goto label_27e75c;
        }
    }
    ctx->pc = 0x27E744u;
    // 0x27e744: 0x5200034e  beql        $s0, $zero, . + 4 + (0x34E << 2)
    ctx->pc = 0x27E744u;
    {
        const bool branch_taken_0x27e744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e744) {
            ctx->pc = 0x27E748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E744u;
            // 0x27e748: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E74Cu;
    // 0x27e74c: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E74Cu;
    SET_GPR_U32(ctx, 31, 0x27E754u);
    ctx->pc = 0x27E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E74Cu;
    // 0x27e750: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E74Cu, 0x27E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E754u;
label_27e754:
    // 0x27e754: 0x1000034a  b           . + 4 + (0x34A << 2)
    ctx->pc = 0x27E754u;
    {
        const bool branch_taken_0x27e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E754u;
        // 0x27e758: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e754) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E75Cu;
label_27e75c:
    // 0x27e75c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e760: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E760u;
    SET_GPR_U32(ctx, 31, 0x27E768u);
    ctx->pc = 0x27E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E760u;
    // 0x27e764: 0x24a59968  addiu       $a1, $a1, -0x6698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E760u, 0x27E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E768u;
label_27e768:
    // 0x27e768: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E768u;
    {
        const bool branch_taken_0x27e768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E768u;
        // 0x27e76c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e768) {
            ctx->pc = 0x27E788u;
            goto label_27e788;
        }
    }
    ctx->pc = 0x27E770u;
    // 0x27e770: 0x52000343  beql        $s0, $zero, . + 4 + (0x343 << 2)
    ctx->pc = 0x27E770u;
    {
        const bool branch_taken_0x27e770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e770) {
            ctx->pc = 0x27E774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E770u;
            // 0x27e774: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E778u;
    // 0x27e778: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E778u;
    SET_GPR_U32(ctx, 31, 0x27E780u);
    ctx->pc = 0x27E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E778u;
    // 0x27e77c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E778u, 0x27E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E780u;
label_27e780:
    // 0x27e780: 0x1000033f  b           . + 4 + (0x33F << 2)
    ctx->pc = 0x27E780u;
    {
        const bool branch_taken_0x27e780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E780u;
        // 0x27e784: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e780) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E788u;
label_27e788:
    // 0x27e788: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e78c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E78Cu;
    SET_GPR_U32(ctx, 31, 0x27E794u);
    ctx->pc = 0x27E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E78Cu;
    // 0x27e790: 0x24a59970  addiu       $a1, $a1, -0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E78Cu, 0x27E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E794u;
label_27e794:
    // 0x27e794: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E794u;
    {
        const bool branch_taken_0x27e794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E794u;
        // 0x27e798: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e794) {
            ctx->pc = 0x27E7B4u;
            goto label_27e7b4;
        }
    }
    ctx->pc = 0x27E79Cu;
    // 0x27e79c: 0x52000338  beql        $s0, $zero, . + 4 + (0x338 << 2)
    ctx->pc = 0x27E79Cu;
    {
        const bool branch_taken_0x27e79c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e79c) {
            ctx->pc = 0x27E7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E79Cu;
            // 0x27e7a0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E7A4u;
    // 0x27e7a4: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E7A4u;
    SET_GPR_U32(ctx, 31, 0x27E7ACu);
    ctx->pc = 0x27E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E7A4u;
    // 0x27e7a8: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E7A4u, 0x27E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7ACu;
label_27e7ac:
    // 0x27e7ac: 0x10000334  b           . + 4 + (0x334 << 2)
    ctx->pc = 0x27E7ACu;
    {
        const bool branch_taken_0x27e7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7ACu;
        // 0x27e7b0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7ac) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E7B4u;
label_27e7b4:
    // 0x27e7b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7b8: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E7B8u;
    SET_GPR_U32(ctx, 31, 0x27E7C0u);
    ctx->pc = 0x27E7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E7B8u;
    // 0x27e7bc: 0x24a59978  addiu       $a1, $a1, -0x6688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E7B8u, 0x27E7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7C0u;
label_27e7c0:
    // 0x27e7c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E7C0u;
    {
        const bool branch_taken_0x27e7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7C0u;
        // 0x27e7c4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7c0) {
            ctx->pc = 0x27E7E0u;
            goto label_27e7e0;
        }
    }
    ctx->pc = 0x27E7C8u;
    // 0x27e7c8: 0x5200032d  beql        $s0, $zero, . + 4 + (0x32D << 2)
    ctx->pc = 0x27E7C8u;
    {
        const bool branch_taken_0x27e7c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e7c8) {
            ctx->pc = 0x27E7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E7C8u;
            // 0x27e7cc: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E7D0u;
    // 0x27e7d0: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E7D0u;
    SET_GPR_U32(ctx, 31, 0x27E7D8u);
    ctx->pc = 0x27E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E7D0u;
    // 0x27e7d4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E7D0u, 0x27E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7D8u;
label_27e7d8:
    // 0x27e7d8: 0x10000329  b           . + 4 + (0x329 << 2)
    ctx->pc = 0x27E7D8u;
    {
        const bool branch_taken_0x27e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7D8u;
        // 0x27e7dc: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7d8) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E7E0u;
label_27e7e0:
    // 0x27e7e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7e4: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E7E4u;
    SET_GPR_U32(ctx, 31, 0x27E7ECu);
    ctx->pc = 0x27E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E7E4u;
    // 0x27e7e8: 0x24a59980  addiu       $a1, $a1, -0x6680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E7E4u, 0x27E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7ECu;
label_27e7ec:
    // 0x27e7ec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E7ECu;
    {
        const bool branch_taken_0x27e7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7ECu;
        // 0x27e7f0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7ec) {
            ctx->pc = 0x27E80Cu;
            goto label_27e80c;
        }
    }
    ctx->pc = 0x27E7F4u;
    // 0x27e7f4: 0x52000322  beql        $s0, $zero, . + 4 + (0x322 << 2)
    ctx->pc = 0x27E7F4u;
    {
        const bool branch_taken_0x27e7f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e7f4) {
            ctx->pc = 0x27E7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E7F4u;
            // 0x27e7f8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E7FCu;
    // 0x27e7fc: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E7FCu;
    SET_GPR_U32(ctx, 31, 0x27E804u);
    ctx->pc = 0x27E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E7FCu;
    // 0x27e800: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E7FCu, 0x27E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E804u;
label_27e804:
    // 0x27e804: 0x1000031e  b           . + 4 + (0x31E << 2)
    ctx->pc = 0x27E804u;
    {
        const bool branch_taken_0x27e804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E804u;
        // 0x27e808: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e804) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E80Cu;
label_27e80c:
    // 0x27e80c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e810: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E810u;
    SET_GPR_U32(ctx, 31, 0x27E818u);
    ctx->pc = 0x27E814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E810u;
    // 0x27e814: 0x24a59988  addiu       $a1, $a1, -0x6678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E810u, 0x27E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E818u;
label_27e818:
    // 0x27e818: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E818u;
    {
        const bool branch_taken_0x27e818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E818u;
        // 0x27e81c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e818) {
            ctx->pc = 0x27E838u;
            goto label_27e838;
        }
    }
    ctx->pc = 0x27E820u;
    // 0x27e820: 0x52000317  beql        $s0, $zero, . + 4 + (0x317 << 2)
    ctx->pc = 0x27E820u;
    {
        const bool branch_taken_0x27e820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e820) {
            ctx->pc = 0x27E824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E820u;
            // 0x27e824: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E828u;
    // 0x27e828: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E828u;
    SET_GPR_U32(ctx, 31, 0x27E830u);
    ctx->pc = 0x27E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E828u;
    // 0x27e82c: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E828u, 0x27E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E830u;
label_27e830:
    // 0x27e830: 0x10000313  b           . + 4 + (0x313 << 2)
    ctx->pc = 0x27E830u;
    {
        const bool branch_taken_0x27e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E830u;
        // 0x27e834: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e830) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E838u;
label_27e838:
    // 0x27e838: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e83c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E83Cu;
    SET_GPR_U32(ctx, 31, 0x27E844u);
    ctx->pc = 0x27E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E83Cu;
    // 0x27e840: 0x24a59990  addiu       $a1, $a1, -0x6670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E83Cu, 0x27E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E844u;
label_27e844:
    // 0x27e844: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E844u;
    {
        const bool branch_taken_0x27e844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E844u;
        // 0x27e848: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e844) {
            ctx->pc = 0x27E864u;
            goto label_27e864;
        }
    }
    ctx->pc = 0x27E84Cu;
    // 0x27e84c: 0x5200030c  beql        $s0, $zero, . + 4 + (0x30C << 2)
    ctx->pc = 0x27E84Cu;
    {
        const bool branch_taken_0x27e84c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e84c) {
            ctx->pc = 0x27E850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E84Cu;
            // 0x27e850: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E854u;
    // 0x27e854: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E854u;
    SET_GPR_U32(ctx, 31, 0x27E85Cu);
    ctx->pc = 0x27E858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E854u;
    // 0x27e858: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E854u, 0x27E85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E85Cu;
label_27e85c:
    // 0x27e85c: 0x10000308  b           . + 4 + (0x308 << 2)
    ctx->pc = 0x27E85Cu;
    {
        const bool branch_taken_0x27e85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E85Cu;
        // 0x27e860: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e85c) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E864u;
label_27e864:
    // 0x27e864: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e868: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E868u;
    SET_GPR_U32(ctx, 31, 0x27E870u);
    ctx->pc = 0x27E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E868u;
    // 0x27e86c: 0x24a599a0  addiu       $a1, $a1, -0x6660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E868u, 0x27E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E870u;
label_27e870:
    // 0x27e870: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E870u;
    {
        const bool branch_taken_0x27e870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E870u;
        // 0x27e874: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e870) {
            ctx->pc = 0x27E890u;
            goto label_27e890;
        }
    }
    ctx->pc = 0x27E878u;
    // 0x27e878: 0x52000301  beql        $s0, $zero, . + 4 + (0x301 << 2)
    ctx->pc = 0x27E878u;
    {
        const bool branch_taken_0x27e878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e878) {
            ctx->pc = 0x27E87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E878u;
            // 0x27e87c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E880u;
    // 0x27e880: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E880u;
    SET_GPR_U32(ctx, 31, 0x27E888u);
    ctx->pc = 0x27E884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E880u;
    // 0x27e884: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E880u, 0x27E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E888u;
label_27e888:
    // 0x27e888: 0x100002fd  b           . + 4 + (0x2FD << 2)
    ctx->pc = 0x27E888u;
    {
        const bool branch_taken_0x27e888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E888u;
        // 0x27e88c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e888) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E890u;
label_27e890:
    // 0x27e890: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e894: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E894u;
    SET_GPR_U32(ctx, 31, 0x27E89Cu);
    ctx->pc = 0x27E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E894u;
    // 0x27e898: 0x24a599b0  addiu       $a1, $a1, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E894u, 0x27E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E89Cu;
label_27e89c:
    // 0x27e89c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E89Cu;
    {
        const bool branch_taken_0x27e89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E89Cu;
        // 0x27e8a0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e89c) {
            ctx->pc = 0x27E8BCu;
            goto label_27e8bc;
        }
    }
    ctx->pc = 0x27E8A4u;
    // 0x27e8a4: 0x520002f6  beql        $s0, $zero, . + 4 + (0x2F6 << 2)
    ctx->pc = 0x27E8A4u;
    {
        const bool branch_taken_0x27e8a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e8a4) {
            ctx->pc = 0x27E8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E8A4u;
            // 0x27e8a8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E8ACu;
    // 0x27e8ac: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E8ACu;
    SET_GPR_U32(ctx, 31, 0x27E8B4u);
    ctx->pc = 0x27E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E8ACu;
    // 0x27e8b0: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E8ACu, 0x27E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8B4u;
label_27e8b4:
    // 0x27e8b4: 0x100002f2  b           . + 4 + (0x2F2 << 2)
    ctx->pc = 0x27E8B4u;
    {
        const bool branch_taken_0x27e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8B4u;
        // 0x27e8b8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8b4) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E8BCu;
label_27e8bc:
    // 0x27e8bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e8c0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E8C0u;
    SET_GPR_U32(ctx, 31, 0x27E8C8u);
    ctx->pc = 0x27E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E8C0u;
    // 0x27e8c4: 0x24a599c0  addiu       $a1, $a1, -0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E8C0u, 0x27E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8C8u;
label_27e8c8:
    // 0x27e8c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E8C8u;
    {
        const bool branch_taken_0x27e8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8C8u;
        // 0x27e8cc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8c8) {
            ctx->pc = 0x27E8E8u;
            goto label_27e8e8;
        }
    }
    ctx->pc = 0x27E8D0u;
    // 0x27e8d0: 0x520002eb  beql        $s0, $zero, . + 4 + (0x2EB << 2)
    ctx->pc = 0x27E8D0u;
    {
        const bool branch_taken_0x27e8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e8d0) {
            ctx->pc = 0x27E8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E8D0u;
            // 0x27e8d4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E8D8u;
    // 0x27e8d8: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E8D8u;
    SET_GPR_U32(ctx, 31, 0x27E8E0u);
    ctx->pc = 0x27E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E8D8u;
    // 0x27e8dc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E8D8u, 0x27E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8E0u;
label_27e8e0:
    // 0x27e8e0: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x27E8E0u;
    {
        const bool branch_taken_0x27e8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8E0u;
        // 0x27e8e4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8e0) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E8E8u;
label_27e8e8:
    // 0x27e8e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e8ec: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E8ECu;
    SET_GPR_U32(ctx, 31, 0x27E8F4u);
    ctx->pc = 0x27E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E8ECu;
    // 0x27e8f0: 0x24a599c8  addiu       $a1, $a1, -0x6638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E8ECu, 0x27E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8F4u;
label_27e8f4:
    // 0x27e8f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E8F4u;
    {
        const bool branch_taken_0x27e8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8F4u;
        // 0x27e8f8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8f4) {
            ctx->pc = 0x27E914u;
            goto label_27e914;
        }
    }
    ctx->pc = 0x27E8FCu;
    // 0x27e8fc: 0x520002e0  beql        $s0, $zero, . + 4 + (0x2E0 << 2)
    ctx->pc = 0x27E8FCu;
    {
        const bool branch_taken_0x27e8fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e8fc) {
            ctx->pc = 0x27E900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E8FCu;
            // 0x27e900: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E904u;
    // 0x27e904: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E904u;
    SET_GPR_U32(ctx, 31, 0x27E90Cu);
    ctx->pc = 0x27E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E904u;
    // 0x27e908: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E904u, 0x27E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E90Cu;
label_27e90c:
    // 0x27e90c: 0x100002dc  b           . + 4 + (0x2DC << 2)
    ctx->pc = 0x27E90Cu;
    {
        const bool branch_taken_0x27e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E90Cu;
        // 0x27e910: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e90c) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E914u;
label_27e914:
    // 0x27e914: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e918: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E918u;
    SET_GPR_U32(ctx, 31, 0x27E920u);
    ctx->pc = 0x27E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E918u;
    // 0x27e91c: 0x24a599d0  addiu       $a1, $a1, -0x6630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E918u, 0x27E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E920u;
label_27e920:
    // 0x27e920: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E920u;
    {
        const bool branch_taken_0x27e920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E920u;
        // 0x27e924: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e920) {
            ctx->pc = 0x27E940u;
            goto label_27e940;
        }
    }
    ctx->pc = 0x27E928u;
    // 0x27e928: 0x520002d5  beql        $s0, $zero, . + 4 + (0x2D5 << 2)
    ctx->pc = 0x27E928u;
    {
        const bool branch_taken_0x27e928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e928) {
            ctx->pc = 0x27E92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E928u;
            // 0x27e92c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E930u;
    // 0x27e930: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E930u;
    SET_GPR_U32(ctx, 31, 0x27E938u);
    ctx->pc = 0x27E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E930u;
    // 0x27e934: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E930u, 0x27E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E938u;
label_27e938:
    // 0x27e938: 0x100002d1  b           . + 4 + (0x2D1 << 2)
    ctx->pc = 0x27E938u;
    {
        const bool branch_taken_0x27e938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E938u;
        // 0x27e93c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e938) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E940u;
label_27e940:
    // 0x27e940: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e944: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E944u;
    SET_GPR_U32(ctx, 31, 0x27E94Cu);
    ctx->pc = 0x27E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E944u;
    // 0x27e948: 0x24a599d8  addiu       $a1, $a1, -0x6628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E944u, 0x27E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E94Cu;
label_27e94c:
    // 0x27e94c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E94Cu;
    {
        const bool branch_taken_0x27e94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E94Cu;
        // 0x27e950: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e94c) {
            ctx->pc = 0x27E96Cu;
            goto label_27e96c;
        }
    }
    ctx->pc = 0x27E954u;
    // 0x27e954: 0x520002ca  beql        $s0, $zero, . + 4 + (0x2CA << 2)
    ctx->pc = 0x27E954u;
    {
        const bool branch_taken_0x27e954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e954) {
            ctx->pc = 0x27E958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E954u;
            // 0x27e958: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E95Cu;
    // 0x27e95c: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E95Cu;
    SET_GPR_U32(ctx, 31, 0x27E964u);
    ctx->pc = 0x27E960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E95Cu;
    // 0x27e960: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E95Cu, 0x27E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E964u;
label_27e964:
    // 0x27e964: 0x100002c6  b           . + 4 + (0x2C6 << 2)
    ctx->pc = 0x27E964u;
    {
        const bool branch_taken_0x27e964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E964u;
        // 0x27e968: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e964) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E96Cu;
label_27e96c:
    // 0x27e96c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e970: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E970u;
    SET_GPR_U32(ctx, 31, 0x27E978u);
    ctx->pc = 0x27E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E970u;
    // 0x27e974: 0x24a599e0  addiu       $a1, $a1, -0x6620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E970u, 0x27E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E978u;
label_27e978:
    // 0x27e978: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27E978u;
    {
        const bool branch_taken_0x27e978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E978u;
        // 0x27e97c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e978) {
            ctx->pc = 0x27E9A0u;
            goto label_27e9a0;
        }
    }
    ctx->pc = 0x27E980u;
    // 0x27e980: 0x120002be  beqz        $s0, . + 4 + (0x2BE << 2)
    ctx->pc = 0x27E980u;
    {
        const bool branch_taken_0x27e980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E980u;
        // 0x27e984: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e980) {
            ctx->pc = 0x27F47Cu;
            goto label_27f47c;
        }
    }
    ctx->pc = 0x27E988u;
    // 0x27e988: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x27e988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x27e98c: 0x240600af  addiu       $a2, $zero, 0xAF
    ctx->pc = 0x27e98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x27e990: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x27E990u;
    SET_GPR_U32(ctx, 31, 0x27E998u);
    ctx->pc = 0x27E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E990u;
    // 0x27e994: 0x240700aa  addiu       $a3, $zero, 0xAA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x27E990u, 0x27E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E998u;
label_27e998:
    // 0x27e998: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x27E998u;
    {
        const bool branch_taken_0x27e998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E998u;
        // 0x27e99c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e998) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E9A0u;
label_27e9a0:
    // 0x27e9a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9a4: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E9A4u;
    SET_GPR_U32(ctx, 31, 0x27E9ACu);
    ctx->pc = 0x27E9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9A4u;
    // 0x27e9a8: 0x24a599e8  addiu       $a1, $a1, -0x6618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E9A4u, 0x27E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9ACu;
label_27e9ac:
    // 0x27e9ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E9ACu;
    {
        const bool branch_taken_0x27e9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E9ACu;
        // 0x27e9b0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9ac) {
            ctx->pc = 0x27E9CCu;
            goto label_27e9cc;
        }
    }
    ctx->pc = 0x27E9B4u;
    // 0x27e9b4: 0x520002b2  beql        $s0, $zero, . + 4 + (0x2B2 << 2)
    ctx->pc = 0x27E9B4u;
    {
        const bool branch_taken_0x27e9b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e9b4) {
            ctx->pc = 0x27E9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E9B4u;
            // 0x27e9b8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E9BCu;
    // 0x27e9bc: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E9BCu;
    SET_GPR_U32(ctx, 31, 0x27E9C4u);
    ctx->pc = 0x27E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9BCu;
    // 0x27e9c0: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E9BCu, 0x27E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9C4u;
label_27e9c4:
    // 0x27e9c4: 0x100002ae  b           . + 4 + (0x2AE << 2)
    ctx->pc = 0x27E9C4u;
    {
        const bool branch_taken_0x27e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E9C4u;
        // 0x27e9c8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9c4) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E9CCu;
label_27e9cc:
    // 0x27e9cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9d0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E9D0u;
    SET_GPR_U32(ctx, 31, 0x27E9D8u);
    ctx->pc = 0x27E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9D0u;
    // 0x27e9d4: 0x24a599f8  addiu       $a1, $a1, -0x6608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E9D0u, 0x27E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9D8u;
label_27e9d8:
    // 0x27e9d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E9D8u;
    {
        const bool branch_taken_0x27e9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E9D8u;
        // 0x27e9dc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9d8) {
            ctx->pc = 0x27E9F8u;
            goto label_27e9f8;
        }
    }
    ctx->pc = 0x27E9E0u;
    // 0x27e9e0: 0x520002a7  beql        $s0, $zero, . + 4 + (0x2A7 << 2)
    ctx->pc = 0x27E9E0u;
    {
        const bool branch_taken_0x27e9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e9e0) {
            ctx->pc = 0x27E9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E9E0u;
            // 0x27e9e4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E9E8u;
    // 0x27e9e8: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27E9E8u;
    SET_GPR_U32(ctx, 31, 0x27E9F0u);
    ctx->pc = 0x27E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9E8u;
    // 0x27e9ec: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27E9E8u, 0x27E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9F0u;
label_27e9f0:
    // 0x27e9f0: 0x100002a3  b           . + 4 + (0x2A3 << 2)
    ctx->pc = 0x27E9F0u;
    {
        const bool branch_taken_0x27e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E9F0u;
        // 0x27e9f4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9f0) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27E9F8u;
label_27e9f8:
    // 0x27e9f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27e9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9fc: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27E9FCu;
    SET_GPR_U32(ctx, 31, 0x27EA04u);
    ctx->pc = 0x27EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9FCu;
    // 0x27ea00: 0x24a59a08  addiu       $a1, $a1, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27E9FCu, 0x27EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA04u;
label_27ea04:
    // 0x27ea04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27EA04u;
    {
        const bool branch_taken_0x27ea04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA04u;
        // 0x27ea08: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea04) {
            ctx->pc = 0x27EA24u;
            goto label_27ea24;
        }
    }
    ctx->pc = 0x27EA0Cu;
    // 0x27ea0c: 0x5200029c  beql        $s0, $zero, . + 4 + (0x29C << 2)
    ctx->pc = 0x27EA0Cu;
    {
        const bool branch_taken_0x27ea0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea0c) {
            ctx->pc = 0x27EA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EA0Cu;
            // 0x27ea10: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EA14u;
    // 0x27ea14: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27EA14u;
    SET_GPR_U32(ctx, 31, 0x27EA1Cu);
    ctx->pc = 0x27EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA14u;
    // 0x27ea18: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27EA14u, 0x27EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA1Cu;
label_27ea1c:
    // 0x27ea1c: 0x10000298  b           . + 4 + (0x298 << 2)
    ctx->pc = 0x27EA1Cu;
    {
        const bool branch_taken_0x27ea1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA1Cu;
        // 0x27ea20: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea1c) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EA24u;
label_27ea24:
    // 0x27ea24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea28: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EA28u;
    SET_GPR_U32(ctx, 31, 0x27EA30u);
    ctx->pc = 0x27EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA28u;
    // 0x27ea2c: 0x24a59a18  addiu       $a1, $a1, -0x65E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EA28u, 0x27EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA30u;
label_27ea30:
    // 0x27ea30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27EA30u;
    {
        const bool branch_taken_0x27ea30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA30u;
        // 0x27ea34: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea30) {
            ctx->pc = 0x27EA50u;
            goto label_27ea50;
        }
    }
    ctx->pc = 0x27EA38u;
    // 0x27ea38: 0x52000291  beql        $s0, $zero, . + 4 + (0x291 << 2)
    ctx->pc = 0x27EA38u;
    {
        const bool branch_taken_0x27ea38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea38) {
            ctx->pc = 0x27EA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EA38u;
            // 0x27ea3c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EA40u;
    // 0x27ea40: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27EA40u;
    SET_GPR_U32(ctx, 31, 0x27EA48u);
    ctx->pc = 0x27EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA40u;
    // 0x27ea44: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27EA40u, 0x27EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA48u;
label_27ea48:
    // 0x27ea48: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x27EA48u;
    {
        const bool branch_taken_0x27ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA48u;
        // 0x27ea4c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea48) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EA50u;
label_27ea50:
    // 0x27ea50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea54: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EA54u;
    SET_GPR_U32(ctx, 31, 0x27EA5Cu);
    ctx->pc = 0x27EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA54u;
    // 0x27ea58: 0x24a59a30  addiu       $a1, $a1, -0x65D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EA54u, 0x27EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA5Cu;
label_27ea5c:
    // 0x27ea5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27EA5Cu;
    {
        const bool branch_taken_0x27ea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA5Cu;
        // 0x27ea60: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea5c) {
            ctx->pc = 0x27EA7Cu;
            goto label_27ea7c;
        }
    }
    ctx->pc = 0x27EA64u;
    // 0x27ea64: 0x52000286  beql        $s0, $zero, . + 4 + (0x286 << 2)
    ctx->pc = 0x27EA64u;
    {
        const bool branch_taken_0x27ea64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea64) {
            ctx->pc = 0x27EA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EA64u;
            // 0x27ea68: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EA6Cu;
    // 0x27ea6c: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27EA6Cu;
    SET_GPR_U32(ctx, 31, 0x27EA74u);
    ctx->pc = 0x27EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA6Cu;
    // 0x27ea70: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27EA6Cu, 0x27EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA74u;
label_27ea74:
    // 0x27ea74: 0x10000282  b           . + 4 + (0x282 << 2)
    ctx->pc = 0x27EA74u;
    {
        const bool branch_taken_0x27ea74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA74u;
        // 0x27ea78: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea74) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EA7Cu;
label_27ea7c:
    // 0x27ea7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea80: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EA80u;
    SET_GPR_U32(ctx, 31, 0x27EA88u);
    ctx->pc = 0x27EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA80u;
    // 0x27ea84: 0x24a59a48  addiu       $a1, $a1, -0x65B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EA80u, 0x27EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA88u;
label_27ea88:
    // 0x27ea88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27EA88u;
    {
        const bool branch_taken_0x27ea88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA88u;
        // 0x27ea8c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea88) {
            ctx->pc = 0x27EAA8u;
            goto label_27eaa8;
        }
    }
    ctx->pc = 0x27EA90u;
    // 0x27ea90: 0x5200027b  beql        $s0, $zero, . + 4 + (0x27B << 2)
    ctx->pc = 0x27EA90u;
    {
        const bool branch_taken_0x27ea90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea90) {
            ctx->pc = 0x27EA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EA90u;
            // 0x27ea94: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EA98u;
    // 0x27ea98: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27EA98u;
    SET_GPR_U32(ctx, 31, 0x27EAA0u);
    ctx->pc = 0x27EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EA98u;
    // 0x27ea9c: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27EA98u, 0x27EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAA0u;
label_27eaa0:
    // 0x27eaa0: 0x10000277  b           . + 4 + (0x277 << 2)
    ctx->pc = 0x27EAA0u;
    {
        const bool branch_taken_0x27eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAA0u;
        // 0x27eaa4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eaa0) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EAA8u;
label_27eaa8:
    // 0x27eaa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27eaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eaac: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EAACu;
    SET_GPR_U32(ctx, 31, 0x27EAB4u);
    ctx->pc = 0x27EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EAACu;
    // 0x27eab0: 0x24a59a60  addiu       $a1, $a1, -0x65A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EAACu, 0x27EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAB4u;
label_27eab4:
    // 0x27eab4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27EAB4u;
    {
        const bool branch_taken_0x27eab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAB4u;
        // 0x27eab8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eab4) {
            ctx->pc = 0x27EAD4u;
            goto label_27ead4;
        }
    }
    ctx->pc = 0x27EABCu;
    // 0x27eabc: 0x52000270  beql        $s0, $zero, . + 4 + (0x270 << 2)
    ctx->pc = 0x27EABCu;
    {
        const bool branch_taken_0x27eabc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eabc) {
            ctx->pc = 0x27EAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EABCu;
            // 0x27eac0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EAC4u;
    // 0x27eac4: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27EAC4u;
    SET_GPR_U32(ctx, 31, 0x27EACCu);
    ctx->pc = 0x27EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EAC4u;
    // 0x27eac8: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27EAC4u, 0x27EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EACCu;
label_27eacc:
    // 0x27eacc: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x27EACCu;
    {
        const bool branch_taken_0x27eacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EACCu;
        // 0x27ead0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eacc) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EAD4u;
label_27ead4:
    // 0x27ead4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ead4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ead8: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EAD8u;
    SET_GPR_U32(ctx, 31, 0x27EAE0u);
    ctx->pc = 0x27EADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EAD8u;
    // 0x27eadc: 0x24a59a70  addiu       $a1, $a1, -0x6590 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EAD8u, 0x27EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAE0u;
label_27eae0:
    // 0x27eae0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27EAE0u;
    {
        const bool branch_taken_0x27eae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAE0u;
        // 0x27eae4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eae0) {
            ctx->pc = 0x27EB00u;
            goto label_27eb00;
        }
    }
    ctx->pc = 0x27EAE8u;
    // 0x27eae8: 0x52000265  beql        $s0, $zero, . + 4 + (0x265 << 2)
    ctx->pc = 0x27EAE8u;
    {
        const bool branch_taken_0x27eae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eae8) {
            ctx->pc = 0x27EAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EAE8u;
            // 0x27eaec: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EAF0u;
    // 0x27eaf0: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27EAF0u;
    SET_GPR_U32(ctx, 31, 0x27EAF8u);
    ctx->pc = 0x27EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EAF0u;
    // 0x27eaf4: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27EAF0u, 0x27EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAF8u;
label_27eaf8:
    // 0x27eaf8: 0x10000261  b           . + 4 + (0x261 << 2)
    ctx->pc = 0x27EAF8u;
    {
        const bool branch_taken_0x27eaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAF8u;
        // 0x27eafc: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eaf8) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EB00u;
label_27eb00:
    // 0x27eb00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb04: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EB04u;
    SET_GPR_U32(ctx, 31, 0x27EB0Cu);
    ctx->pc = 0x27EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB04u;
    // 0x27eb08: 0x24a59a80  addiu       $a1, $a1, -0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EB04u, 0x27EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB0Cu;
label_27eb0c:
    // 0x27eb0c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27EB0Cu;
    {
        const bool branch_taken_0x27eb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB0Cu;
        // 0x27eb10: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb0c) {
            ctx->pc = 0x27EB2Cu;
            goto label_27eb2c;
        }
    }
    ctx->pc = 0x27EB14u;
    // 0x27eb14: 0x5200025a  beql        $s0, $zero, . + 4 + (0x25A << 2)
    ctx->pc = 0x27EB14u;
    {
        const bool branch_taken_0x27eb14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eb14) {
            ctx->pc = 0x27EB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EB14u;
            // 0x27eb18: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EB1Cu;
    // 0x27eb1c: 0xc09f8a8  jal         func_27E2A0
    ctx->pc = 0x27EB1Cu;
    SET_GPR_U32(ctx, 31, 0x27EB24u);
    ctx->pc = 0x27EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB1Cu;
    // 0x27eb20: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2A0u, 0x27EB1Cu, 0x27EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB24u;
label_27eb24:
    // 0x27eb24: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x27EB24u;
    {
        const bool branch_taken_0x27eb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB24u;
        // 0x27eb28: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb24) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27EB2Cu;
label_27eb2c:
    // 0x27eb2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27eb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb30: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EB30u;
    SET_GPR_U32(ctx, 31, 0x27EB38u);
    ctx->pc = 0x27EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB30u;
    // 0x27eb34: 0x24a59a90  addiu       $a1, $a1, -0x6570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EB30u, 0x27EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB38u;
label_27eb38:
    // 0x27eb38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EB38u;
    {
        const bool branch_taken_0x27eb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB38u;
        // 0x27eb3c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb38) {
            ctx->pc = 0x27EB4Cu;
            goto label_27eb4c;
        }
    }
    ctx->pc = 0x27EB40u;
    // 0x27eb40: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27eb40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27eb44: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x27EB44u;
    {
        const bool branch_taken_0x27eb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB44u;
        // 0x27eb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb44) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EB4Cu;
label_27eb4c:
    // 0x27eb4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27eb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb50: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EB50u;
    SET_GPR_U32(ctx, 31, 0x27EB58u);
    ctx->pc = 0x27EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB50u;
    // 0x27eb54: 0x24a59aa0  addiu       $a1, $a1, -0x6560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EB50u, 0x27EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB58u;
label_27eb58:
    // 0x27eb58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EB58u;
    {
        const bool branch_taken_0x27eb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB58u;
        // 0x27eb5c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb58) {
            ctx->pc = 0x27EB6Cu;
            goto label_27eb6c;
        }
    }
    ctx->pc = 0x27EB60u;
    // 0x27eb60: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27eb64: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x27EB64u;
    {
        const bool branch_taken_0x27eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB64u;
        // 0x27eb68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb64) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EB6Cu;
label_27eb6c:
    // 0x27eb6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27eb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb70: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EB70u;
    SET_GPR_U32(ctx, 31, 0x27EB78u);
    ctx->pc = 0x27EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB70u;
    // 0x27eb74: 0x24a59ab0  addiu       $a1, $a1, -0x6550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EB70u, 0x27EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB78u;
label_27eb78:
    // 0x27eb78: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EB78u;
    {
        const bool branch_taken_0x27eb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB78u;
        // 0x27eb7c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb78) {
            ctx->pc = 0x27EB8Cu;
            goto label_27eb8c;
        }
    }
    ctx->pc = 0x27EB80u;
    // 0x27eb80: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27eb84: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x27EB84u;
    {
        const bool branch_taken_0x27eb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB84u;
        // 0x27eb88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb84) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EB8Cu;
label_27eb8c:
    // 0x27eb8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27eb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb90: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EB90u;
    SET_GPR_U32(ctx, 31, 0x27EB98u);
    ctx->pc = 0x27EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB90u;
    // 0x27eb94: 0x24a59ac0  addiu       $a1, $a1, -0x6540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EB90u, 0x27EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB98u;
label_27eb98:
    // 0x27eb98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EB98u;
    {
        const bool branch_taken_0x27eb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB98u;
        // 0x27eb9c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb98) {
            ctx->pc = 0x27EBACu;
            goto label_27ebac;
        }
    }
    ctx->pc = 0x27EBA0u;
    // 0x27eba0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27eba4: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x27EBA4u;
    {
        const bool branch_taken_0x27eba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBA4u;
        // 0x27eba8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eba4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EBACu;
label_27ebac:
    // 0x27ebac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebb0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EBB0u;
    SET_GPR_U32(ctx, 31, 0x27EBB8u);
    ctx->pc = 0x27EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EBB0u;
    // 0x27ebb4: 0x24a59ad0  addiu       $a1, $a1, -0x6530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EBB0u, 0x27EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBB8u;
label_27ebb8:
    // 0x27ebb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EBB8u;
    {
        const bool branch_taken_0x27ebb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBB8u;
        // 0x27ebbc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebb8) {
            ctx->pc = 0x27EBCCu;
            goto label_27ebcc;
        }
    }
    ctx->pc = 0x27EBC0u;
    // 0x27ebc0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ebc4: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x27EBC4u;
    {
        const bool branch_taken_0x27ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBC4u;
        // 0x27ebc8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebc4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EBCCu;
label_27ebcc:
    // 0x27ebcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ebccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebd0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EBD0u;
    SET_GPR_U32(ctx, 31, 0x27EBD8u);
    ctx->pc = 0x27EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EBD0u;
    // 0x27ebd4: 0x24a59ae0  addiu       $a1, $a1, -0x6520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EBD0u, 0x27EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBD8u;
label_27ebd8:
    // 0x27ebd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EBD8u;
    {
        const bool branch_taken_0x27ebd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBD8u;
        // 0x27ebdc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebd8) {
            ctx->pc = 0x27EBECu;
            goto label_27ebec;
        }
    }
    ctx->pc = 0x27EBE0u;
    // 0x27ebe0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ebe4: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x27EBE4u;
    {
        const bool branch_taken_0x27ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBE4u;
        // 0x27ebe8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebe4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EBECu;
label_27ebec:
    // 0x27ebec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ebecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebf0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EBF0u;
    SET_GPR_U32(ctx, 31, 0x27EBF8u);
    ctx->pc = 0x27EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EBF0u;
    // 0x27ebf4: 0x24a59af0  addiu       $a1, $a1, -0x6510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EBF0u, 0x27EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBF8u;
label_27ebf8:
    // 0x27ebf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EBF8u;
    {
        const bool branch_taken_0x27ebf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBF8u;
        // 0x27ebfc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebf8) {
            ctx->pc = 0x27EC0Cu;
            goto label_27ec0c;
        }
    }
    ctx->pc = 0x27EC00u;
    // 0x27ec00: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ec04: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x27EC04u;
    {
        const bool branch_taken_0x27ec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC04u;
        // 0x27ec08: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec04) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EC0Cu;
label_27ec0c:
    // 0x27ec0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ec0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec10: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EC10u;
    SET_GPR_U32(ctx, 31, 0x27EC18u);
    ctx->pc = 0x27EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC10u;
    // 0x27ec14: 0x24a59b00  addiu       $a1, $a1, -0x6500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EC10u, 0x27EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC18u;
label_27ec18:
    // 0x27ec18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EC18u;
    {
        const bool branch_taken_0x27ec18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC18u;
        // 0x27ec1c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec18) {
            ctx->pc = 0x27EC2Cu;
            goto label_27ec2c;
        }
    }
    ctx->pc = 0x27EC20u;
    // 0x27ec20: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ec24: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x27EC24u;
    {
        const bool branch_taken_0x27ec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC24u;
        // 0x27ec28: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec24) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EC2Cu;
label_27ec2c:
    // 0x27ec2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ec2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec30: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EC30u;
    SET_GPR_U32(ctx, 31, 0x27EC38u);
    ctx->pc = 0x27EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC30u;
    // 0x27ec34: 0x24a59b10  addiu       $a1, $a1, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EC30u, 0x27EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC38u;
label_27ec38:
    // 0x27ec38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EC38u;
    {
        const bool branch_taken_0x27ec38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC38u;
        // 0x27ec3c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec38) {
            ctx->pc = 0x27EC4Cu;
            goto label_27ec4c;
        }
    }
    ctx->pc = 0x27EC40u;
    // 0x27ec40: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ec44: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x27EC44u;
    {
        const bool branch_taken_0x27ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC44u;
        // 0x27ec48: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec44) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EC4Cu;
label_27ec4c:
    // 0x27ec4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec50: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EC50u;
    SET_GPR_U32(ctx, 31, 0x27EC58u);
    ctx->pc = 0x27EC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC50u;
    // 0x27ec54: 0x24a59b20  addiu       $a1, $a1, -0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EC50u, 0x27EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC58u;
label_27ec58:
    // 0x27ec58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EC58u;
    {
        const bool branch_taken_0x27ec58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC58u;
        // 0x27ec5c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec58) {
            ctx->pc = 0x27EC6Cu;
            goto label_27ec6c;
        }
    }
    ctx->pc = 0x27EC60u;
    // 0x27ec60: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ec64: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x27EC64u;
    {
        const bool branch_taken_0x27ec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC64u;
        // 0x27ec68: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec64) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EC6Cu;
label_27ec6c:
    // 0x27ec6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ec6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec70: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EC70u;
    SET_GPR_U32(ctx, 31, 0x27EC78u);
    ctx->pc = 0x27EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC70u;
    // 0x27ec74: 0x24a59b30  addiu       $a1, $a1, -0x64D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EC70u, 0x27EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC78u;
label_27ec78:
    // 0x27ec78: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EC78u;
    {
        const bool branch_taken_0x27ec78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC78u;
        // 0x27ec7c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec78) {
            ctx->pc = 0x27EC8Cu;
            goto label_27ec8c;
        }
    }
    ctx->pc = 0x27EC80u;
    // 0x27ec80: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ec84: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x27EC84u;
    {
        const bool branch_taken_0x27ec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC84u;
        // 0x27ec88: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec84) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EC8Cu;
label_27ec8c:
    // 0x27ec8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ec8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec90: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EC90u;
    SET_GPR_U32(ctx, 31, 0x27EC98u);
    ctx->pc = 0x27EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC90u;
    // 0x27ec94: 0x24a59b40  addiu       $a1, $a1, -0x64C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EC90u, 0x27EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC98u;
label_27ec98:
    // 0x27ec98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EC98u;
    {
        const bool branch_taken_0x27ec98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC98u;
        // 0x27ec9c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec98) {
            ctx->pc = 0x27ECACu;
            goto label_27ecac;
        }
    }
    ctx->pc = 0x27ECA0u;
    // 0x27eca0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27eca4: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x27ECA4u;
    {
        const bool branch_taken_0x27eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECA4u;
        // 0x27eca8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eca4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27ECACu;
label_27ecac:
    // 0x27ecac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ecacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ecb0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27ECB0u;
    SET_GPR_U32(ctx, 31, 0x27ECB8u);
    ctx->pc = 0x27ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECB0u;
    // 0x27ecb4: 0x24a59b50  addiu       $a1, $a1, -0x64B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27ECB0u, 0x27ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECB8u;
label_27ecb8:
    // 0x27ecb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ECB8u;
    {
        const bool branch_taken_0x27ecb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECB8u;
        // 0x27ecbc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecb8) {
            ctx->pc = 0x27ECCCu;
            goto label_27eccc;
        }
    }
    ctx->pc = 0x27ECC0u;
    // 0x27ecc0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ecc4: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x27ECC4u;
    {
        const bool branch_taken_0x27ecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECC4u;
        // 0x27ecc8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecc4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27ECCCu;
label_27eccc:
    // 0x27eccc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ecccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ecd0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27ECD0u;
    SET_GPR_U32(ctx, 31, 0x27ECD8u);
    ctx->pc = 0x27ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECD0u;
    // 0x27ecd4: 0x24a59b68  addiu       $a1, $a1, -0x6498 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27ECD0u, 0x27ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECD8u;
label_27ecd8:
    // 0x27ecd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ECD8u;
    {
        const bool branch_taken_0x27ecd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECD8u;
        // 0x27ecdc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecd8) {
            ctx->pc = 0x27ECECu;
            goto label_27ecec;
        }
    }
    ctx->pc = 0x27ECE0u;
    // 0x27ece0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ece4: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x27ECE4u;
    {
        const bool branch_taken_0x27ece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECE4u;
        // 0x27ece8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ece4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27ECECu;
label_27ecec:
    // 0x27ecec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ececu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ecf0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27ECF0u;
    SET_GPR_U32(ctx, 31, 0x27ECF8u);
    ctx->pc = 0x27ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECF0u;
    // 0x27ecf4: 0x24a59b78  addiu       $a1, $a1, -0x6488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27ECF0u, 0x27ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECF8u;
label_27ecf8:
    // 0x27ecf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ECF8u;
    {
        const bool branch_taken_0x27ecf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECF8u;
        // 0x27ecfc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecf8) {
            ctx->pc = 0x27ED0Cu;
            goto label_27ed0c;
        }
    }
    ctx->pc = 0x27ED00u;
    // 0x27ed00: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ed04: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x27ED04u;
    {
        const bool branch_taken_0x27ed04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED04u;
        // 0x27ed08: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed04) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27ED0Cu;
label_27ed0c:
    // 0x27ed0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed10: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27ED10u;
    SET_GPR_U32(ctx, 31, 0x27ED18u);
    ctx->pc = 0x27ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED10u;
    // 0x27ed14: 0x24a59b90  addiu       $a1, $a1, -0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27ED10u, 0x27ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED18u;
label_27ed18:
    // 0x27ed18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED18u;
    {
        const bool branch_taken_0x27ed18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED18u;
        // 0x27ed1c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed18) {
            ctx->pc = 0x27ED2Cu;
            goto label_27ed2c;
        }
    }
    ctx->pc = 0x27ED20u;
    // 0x27ed20: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ed24: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x27ED24u;
    {
        const bool branch_taken_0x27ed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED24u;
        // 0x27ed28: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed24) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27ED2Cu;
label_27ed2c:
    // 0x27ed2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ed2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed30: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27ED30u;
    SET_GPR_U32(ctx, 31, 0x27ED38u);
    ctx->pc = 0x27ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED30u;
    // 0x27ed34: 0x24a59ba8  addiu       $a1, $a1, -0x6458 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27ED30u, 0x27ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED38u;
label_27ed38:
    // 0x27ed38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED38u;
    {
        const bool branch_taken_0x27ed38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED38u;
        // 0x27ed3c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed38) {
            ctx->pc = 0x27ED4Cu;
            goto label_27ed4c;
        }
    }
    ctx->pc = 0x27ED40u;
    // 0x27ed40: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ed44: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x27ED44u;
    {
        const bool branch_taken_0x27ed44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED44u;
        // 0x27ed48: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed44) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27ED4Cu;
label_27ed4c:
    // 0x27ed4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed50: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27ED50u;
    SET_GPR_U32(ctx, 31, 0x27ED58u);
    ctx->pc = 0x27ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED50u;
    // 0x27ed54: 0x24a59bc0  addiu       $a1, $a1, -0x6440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27ED50u, 0x27ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED58u;
label_27ed58:
    // 0x27ed58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED58u;
    {
        const bool branch_taken_0x27ed58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED58u;
        // 0x27ed5c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed58) {
            ctx->pc = 0x27ED6Cu;
            goto label_27ed6c;
        }
    }
    ctx->pc = 0x27ED60u;
    // 0x27ed60: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ed64: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x27ED64u;
    {
        const bool branch_taken_0x27ed64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED64u;
        // 0x27ed68: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed64) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27ED6Cu;
label_27ed6c:
    // 0x27ed6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ed6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed70: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27ED70u;
    SET_GPR_U32(ctx, 31, 0x27ED78u);
    ctx->pc = 0x27ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED70u;
    // 0x27ed74: 0x24a59bd8  addiu       $a1, $a1, -0x6428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27ED70u, 0x27ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED78u;
label_27ed78:
    // 0x27ed78: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED78u;
    {
        const bool branch_taken_0x27ed78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED78u;
        // 0x27ed7c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed78) {
            ctx->pc = 0x27ED8Cu;
            goto label_27ed8c;
        }
    }
    ctx->pc = 0x27ED80u;
    // 0x27ed80: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ed84: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x27ED84u;
    {
        const bool branch_taken_0x27ed84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED84u;
        // 0x27ed88: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed84) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27ED8Cu;
label_27ed8c:
    // 0x27ed8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ed8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed90: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27ED90u;
    SET_GPR_U32(ctx, 31, 0x27ED98u);
    ctx->pc = 0x27ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED90u;
    // 0x27ed94: 0x24a59bf0  addiu       $a1, $a1, -0x6410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27ED90u, 0x27ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED98u;
label_27ed98:
    // 0x27ed98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED98u;
    {
        const bool branch_taken_0x27ed98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED98u;
        // 0x27ed9c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed98) {
            ctx->pc = 0x27EDACu;
            goto label_27edac;
        }
    }
    ctx->pc = 0x27EDA0u;
    // 0x27eda0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27eda4: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x27EDA4u;
    {
        const bool branch_taken_0x27eda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDA4u;
        // 0x27eda8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eda4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EDACu;
label_27edac:
    // 0x27edac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27edacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edb0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EDB0u;
    SET_GPR_U32(ctx, 31, 0x27EDB8u);
    ctx->pc = 0x27EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDB0u;
    // 0x27edb4: 0x24a59c08  addiu       $a1, $a1, -0x63F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EDB0u, 0x27EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDB8u;
label_27edb8:
    // 0x27edb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EDB8u;
    {
        const bool branch_taken_0x27edb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDB8u;
        // 0x27edbc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edb8) {
            ctx->pc = 0x27EDCCu;
            goto label_27edcc;
        }
    }
    ctx->pc = 0x27EDC0u;
    // 0x27edc0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27edc4: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x27EDC4u;
    {
        const bool branch_taken_0x27edc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDC4u;
        // 0x27edc8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edc4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EDCCu;
label_27edcc:
    // 0x27edcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27edccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edd0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EDD0u;
    SET_GPR_U32(ctx, 31, 0x27EDD8u);
    ctx->pc = 0x27EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDD0u;
    // 0x27edd4: 0x24a59c18  addiu       $a1, $a1, -0x63E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EDD0u, 0x27EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDD8u;
label_27edd8:
    // 0x27edd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EDD8u;
    {
        const bool branch_taken_0x27edd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDD8u;
        // 0x27eddc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edd8) {
            ctx->pc = 0x27EDECu;
            goto label_27edec;
        }
    }
    ctx->pc = 0x27EDE0u;
    // 0x27ede0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ede4: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x27EDE4u;
    {
        const bool branch_taken_0x27ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDE4u;
        // 0x27ede8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ede4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EDECu;
label_27edec:
    // 0x27edec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27edecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edf0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EDF0u;
    SET_GPR_U32(ctx, 31, 0x27EDF8u);
    ctx->pc = 0x27EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDF0u;
    // 0x27edf4: 0x24a59c28  addiu       $a1, $a1, -0x63D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EDF0u, 0x27EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDF8u;
label_27edf8:
    // 0x27edf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EDF8u;
    {
        const bool branch_taken_0x27edf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDF8u;
        // 0x27edfc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edf8) {
            ctx->pc = 0x27EE0Cu;
            goto label_27ee0c;
        }
    }
    ctx->pc = 0x27EE00u;
    // 0x27ee00: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ee04: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x27EE04u;
    {
        const bool branch_taken_0x27ee04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE04u;
        // 0x27ee08: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee04) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EE0Cu;
label_27ee0c:
    // 0x27ee0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ee0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee10: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EE10u;
    SET_GPR_U32(ctx, 31, 0x27EE18u);
    ctx->pc = 0x27EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE10u;
    // 0x27ee14: 0x24a59c38  addiu       $a1, $a1, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EE10u, 0x27EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE18u;
label_27ee18:
    // 0x27ee18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EE18u;
    {
        const bool branch_taken_0x27ee18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE18u;
        // 0x27ee1c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee18) {
            ctx->pc = 0x27EE2Cu;
            goto label_27ee2c;
        }
    }
    ctx->pc = 0x27EE20u;
    // 0x27ee20: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ee24: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x27EE24u;
    {
        const bool branch_taken_0x27ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE24u;
        // 0x27ee28: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee24) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EE2Cu;
label_27ee2c:
    // 0x27ee2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee30: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EE30u;
    SET_GPR_U32(ctx, 31, 0x27EE38u);
    ctx->pc = 0x27EE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE30u;
    // 0x27ee34: 0x24a59c48  addiu       $a1, $a1, -0x63B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EE30u, 0x27EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE38u;
label_27ee38:
    // 0x27ee38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EE38u;
    {
        const bool branch_taken_0x27ee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE38u;
        // 0x27ee3c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee38) {
            ctx->pc = 0x27EE4Cu;
            goto label_27ee4c;
        }
    }
    ctx->pc = 0x27EE40u;
    // 0x27ee40: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ee40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ee44: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x27EE44u;
    {
        const bool branch_taken_0x27ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE44u;
        // 0x27ee48: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee44) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EE4Cu;
label_27ee4c:
    // 0x27ee4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ee4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee50: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EE50u;
    SET_GPR_U32(ctx, 31, 0x27EE58u);
    ctx->pc = 0x27EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE50u;
    // 0x27ee54: 0x24a59c58  addiu       $a1, $a1, -0x63A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EE50u, 0x27EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE58u;
label_27ee58:
    // 0x27ee58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EE58u;
    {
        const bool branch_taken_0x27ee58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE58u;
        // 0x27ee5c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee58) {
            ctx->pc = 0x27EE6Cu;
            goto label_27ee6c;
        }
    }
    ctx->pc = 0x27EE60u;
    // 0x27ee60: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ee64: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x27EE64u;
    {
        const bool branch_taken_0x27ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE64u;
        // 0x27ee68: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee64) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EE6Cu;
label_27ee6c:
    // 0x27ee6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee70: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EE70u;
    SET_GPR_U32(ctx, 31, 0x27EE78u);
    ctx->pc = 0x27EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE70u;
    // 0x27ee74: 0x24a59c68  addiu       $a1, $a1, -0x6398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EE70u, 0x27EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE78u;
label_27ee78:
    // 0x27ee78: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EE78u;
    {
        const bool branch_taken_0x27ee78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE78u;
        // 0x27ee7c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee78) {
            ctx->pc = 0x27EE8Cu;
            goto label_27ee8c;
        }
    }
    ctx->pc = 0x27EE80u;
    // 0x27ee80: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ee84: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x27EE84u;
    {
        const bool branch_taken_0x27ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE84u;
        // 0x27ee88: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee84) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EE8Cu;
label_27ee8c:
    // 0x27ee8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ee8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee90: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EE90u;
    SET_GPR_U32(ctx, 31, 0x27EE98u);
    ctx->pc = 0x27EE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE90u;
    // 0x27ee94: 0x24a59c78  addiu       $a1, $a1, -0x6388 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EE90u, 0x27EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE98u;
label_27ee98:
    // 0x27ee98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EE98u;
    {
        const bool branch_taken_0x27ee98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE98u;
        // 0x27ee9c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee98) {
            ctx->pc = 0x27EEACu;
            goto label_27eeac;
        }
    }
    ctx->pc = 0x27EEA0u;
    // 0x27eea0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27eea4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x27EEA4u;
    {
        const bool branch_taken_0x27eea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EEA4u;
        // 0x27eea8: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eea4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EEACu;
label_27eeac:
    // 0x27eeac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27eeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eeb0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EEB0u;
    SET_GPR_U32(ctx, 31, 0x27EEB8u);
    ctx->pc = 0x27EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EEB0u;
    // 0x27eeb4: 0x24a59c88  addiu       $a1, $a1, -0x6378 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EEB0u, 0x27EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEB8u;
label_27eeb8:
    // 0x27eeb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EEB8u;
    {
        const bool branch_taken_0x27eeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EEB8u;
        // 0x27eebc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eeb8) {
            ctx->pc = 0x27EECCu;
            goto label_27eecc;
        }
    }
    ctx->pc = 0x27EEC0u;
    // 0x27eec0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27eec4: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x27EEC4u;
    {
        const bool branch_taken_0x27eec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EEC4u;
        // 0x27eec8: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eec4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EECCu;
label_27eecc:
    // 0x27eecc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27eeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eed0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EED0u;
    SET_GPR_U32(ctx, 31, 0x27EED8u);
    ctx->pc = 0x27EED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EED0u;
    // 0x27eed4: 0x24a59c98  addiu       $a1, $a1, -0x6368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EED0u, 0x27EED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EED8u;
label_27eed8:
    // 0x27eed8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EED8u;
    {
        const bool branch_taken_0x27eed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EED8u;
        // 0x27eedc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eed8) {
            ctx->pc = 0x27EEECu;
            goto label_27eeec;
        }
    }
    ctx->pc = 0x27EEE0u;
    // 0x27eee0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27eee4: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x27EEE4u;
    {
        const bool branch_taken_0x27eee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EEE4u;
        // 0x27eee8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eee4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EEECu;
label_27eeec:
    // 0x27eeec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27eeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eef0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EEF0u;
    SET_GPR_U32(ctx, 31, 0x27EEF8u);
    ctx->pc = 0x27EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EEF0u;
    // 0x27eef4: 0x24a59ca8  addiu       $a1, $a1, -0x6358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EEF0u, 0x27EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEF8u;
label_27eef8:
    // 0x27eef8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EEF8u;
    {
        const bool branch_taken_0x27eef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EEF8u;
        // 0x27eefc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eef8) {
            ctx->pc = 0x27EF0Cu;
            goto label_27ef0c;
        }
    }
    ctx->pc = 0x27EF00u;
    // 0x27ef00: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ef04: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x27EF04u;
    {
        const bool branch_taken_0x27ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF04u;
        // 0x27ef08: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef04) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EF0Cu;
label_27ef0c:
    // 0x27ef0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ef0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef10: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EF10u;
    SET_GPR_U32(ctx, 31, 0x27EF18u);
    ctx->pc = 0x27EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF10u;
    // 0x27ef14: 0x24a59cb8  addiu       $a1, $a1, -0x6348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EF10u, 0x27EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF18u;
label_27ef18:
    // 0x27ef18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EF18u;
    {
        const bool branch_taken_0x27ef18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF18u;
        // 0x27ef1c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef18) {
            ctx->pc = 0x27EF2Cu;
            goto label_27ef2c;
        }
    }
    ctx->pc = 0x27EF20u;
    // 0x27ef20: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ef24: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x27EF24u;
    {
        const bool branch_taken_0x27ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF24u;
        // 0x27ef28: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef24) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EF2Cu;
label_27ef2c:
    // 0x27ef2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ef2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef30: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EF30u;
    SET_GPR_U32(ctx, 31, 0x27EF38u);
    ctx->pc = 0x27EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF30u;
    // 0x27ef34: 0x24a59cc8  addiu       $a1, $a1, -0x6338 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EF30u, 0x27EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF38u;
label_27ef38:
    // 0x27ef38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EF38u;
    {
        const bool branch_taken_0x27ef38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF38u;
        // 0x27ef3c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef38) {
            ctx->pc = 0x27EF4Cu;
            goto label_27ef4c;
        }
    }
    ctx->pc = 0x27EF40u;
    // 0x27ef40: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ef44: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x27EF44u;
    {
        const bool branch_taken_0x27ef44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF44u;
        // 0x27ef48: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef44) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EF4Cu;
label_27ef4c:
    // 0x27ef4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ef4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef50: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EF50u;
    SET_GPR_U32(ctx, 31, 0x27EF58u);
    ctx->pc = 0x27EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF50u;
    // 0x27ef54: 0x24a59ce0  addiu       $a1, $a1, -0x6320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EF50u, 0x27EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF58u;
label_27ef58:
    // 0x27ef58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EF58u;
    {
        const bool branch_taken_0x27ef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF58u;
        // 0x27ef5c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef58) {
            ctx->pc = 0x27EF6Cu;
            goto label_27ef6c;
        }
    }
    ctx->pc = 0x27EF60u;
    // 0x27ef60: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ef64: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x27EF64u;
    {
        const bool branch_taken_0x27ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF64u;
        // 0x27ef68: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef64) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EF6Cu;
label_27ef6c:
    // 0x27ef6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef70: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EF70u;
    SET_GPR_U32(ctx, 31, 0x27EF78u);
    ctx->pc = 0x27EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF70u;
    // 0x27ef74: 0x24a59cf0  addiu       $a1, $a1, -0x6310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EF70u, 0x27EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF78u;
label_27ef78:
    // 0x27ef78: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EF78u;
    {
        const bool branch_taken_0x27ef78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF78u;
        // 0x27ef7c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef78) {
            ctx->pc = 0x27EF8Cu;
            goto label_27ef8c;
        }
    }
    ctx->pc = 0x27EF80u;
    // 0x27ef80: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27ef84: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x27EF84u;
    {
        const bool branch_taken_0x27ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF84u;
        // 0x27ef88: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef84) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EF8Cu;
label_27ef8c:
    // 0x27ef8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef90: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EF90u;
    SET_GPR_U32(ctx, 31, 0x27EF98u);
    ctx->pc = 0x27EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF90u;
    // 0x27ef94: 0x24a59d00  addiu       $a1, $a1, -0x6300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EF90u, 0x27EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF98u;
label_27ef98:
    // 0x27ef98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EF98u;
    {
        const bool branch_taken_0x27ef98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF98u;
        // 0x27ef9c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef98) {
            ctx->pc = 0x27EFACu;
            goto label_27efac;
        }
    }
    ctx->pc = 0x27EFA0u;
    // 0x27efa0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27efa4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x27EFA4u;
    {
        const bool branch_taken_0x27efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFA4u;
        // 0x27efa8: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efa4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EFACu;
label_27efac:
    // 0x27efac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27efacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efb0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EFB0u;
    SET_GPR_U32(ctx, 31, 0x27EFB8u);
    ctx->pc = 0x27EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFB0u;
    // 0x27efb4: 0x24a59d10  addiu       $a1, $a1, -0x62F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EFB0u, 0x27EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFB8u;
label_27efb8:
    // 0x27efb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EFB8u;
    {
        const bool branch_taken_0x27efb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFB8u;
        // 0x27efbc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efb8) {
            ctx->pc = 0x27EFCCu;
            goto label_27efcc;
        }
    }
    ctx->pc = 0x27EFC0u;
    // 0x27efc0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27efc4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x27EFC4u;
    {
        const bool branch_taken_0x27efc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFC4u;
        // 0x27efc8: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efc4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EFCCu;
label_27efcc:
    // 0x27efcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27efccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efd0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EFD0u;
    SET_GPR_U32(ctx, 31, 0x27EFD8u);
    ctx->pc = 0x27EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFD0u;
    // 0x27efd4: 0x24a59d20  addiu       $a1, $a1, -0x62E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EFD0u, 0x27EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFD8u;
label_27efd8:
    // 0x27efd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EFD8u;
    {
        const bool branch_taken_0x27efd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFD8u;
        // 0x27efdc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efd8) {
            ctx->pc = 0x27EFECu;
            goto label_27efec;
        }
    }
    ctx->pc = 0x27EFE0u;
    // 0x27efe0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27efe4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x27EFE4u;
    {
        const bool branch_taken_0x27efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFE4u;
        // 0x27efe8: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efe4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27EFECu;
label_27efec:
    // 0x27efec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27efecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eff0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27EFF0u;
    SET_GPR_U32(ctx, 31, 0x27EFF8u);
    ctx->pc = 0x27EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFF0u;
    // 0x27eff4: 0x24a59d38  addiu       $a1, $a1, -0x62C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27EFF0u, 0x27EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFF8u;
label_27eff8:
    // 0x27eff8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EFF8u;
    {
        const bool branch_taken_0x27eff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFF8u;
        // 0x27effc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eff8) {
            ctx->pc = 0x27F00Cu;
            goto label_27f00c;
        }
    }
    ctx->pc = 0x27F000u;
    // 0x27f000: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f004: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x27F004u;
    {
        const bool branch_taken_0x27f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F004u;
        // 0x27f008: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f004) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F00Cu;
label_27f00c:
    // 0x27f00c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f010: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F010u;
    SET_GPR_U32(ctx, 31, 0x27F018u);
    ctx->pc = 0x27F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F010u;
    // 0x27f014: 0x24a59d50  addiu       $a1, $a1, -0x62B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F010u, 0x27F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F018u;
label_27f018:
    // 0x27f018: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F018u;
    {
        const bool branch_taken_0x27f018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F018u;
        // 0x27f01c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f018) {
            ctx->pc = 0x27F02Cu;
            goto label_27f02c;
        }
    }
    ctx->pc = 0x27F020u;
    // 0x27f020: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f024: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x27F024u;
    {
        const bool branch_taken_0x27f024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F024u;
        // 0x27f028: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f024) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F02Cu;
label_27f02c:
    // 0x27f02c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f030: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F030u;
    SET_GPR_U32(ctx, 31, 0x27F038u);
    ctx->pc = 0x27F034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F030u;
    // 0x27f034: 0x24a59d68  addiu       $a1, $a1, -0x6298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F030u, 0x27F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F038u;
label_27f038:
    // 0x27f038: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F038u;
    {
        const bool branch_taken_0x27f038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F038u;
        // 0x27f03c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f038) {
            ctx->pc = 0x27F04Cu;
            goto label_27f04c;
        }
    }
    ctx->pc = 0x27F040u;
    // 0x27f040: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f044: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x27F044u;
    {
        const bool branch_taken_0x27f044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F044u;
        // 0x27f048: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f044) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F04Cu;
label_27f04c:
    // 0x27f04c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f050: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F050u;
    SET_GPR_U32(ctx, 31, 0x27F058u);
    ctx->pc = 0x27F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F050u;
    // 0x27f054: 0x24a59d80  addiu       $a1, $a1, -0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F050u, 0x27F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F058u;
label_27f058:
    // 0x27f058: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F058u;
    {
        const bool branch_taken_0x27f058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F058u;
        // 0x27f05c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f058) {
            ctx->pc = 0x27F06Cu;
            goto label_27f06c;
        }
    }
    ctx->pc = 0x27F060u;
    // 0x27f060: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f064: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x27F064u;
    {
        const bool branch_taken_0x27f064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F064u;
        // 0x27f068: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f064) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F06Cu;
label_27f06c:
    // 0x27f06c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f070: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F070u;
    SET_GPR_U32(ctx, 31, 0x27F078u);
    ctx->pc = 0x27F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F070u;
    // 0x27f074: 0x24a59d98  addiu       $a1, $a1, -0x6268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F070u, 0x27F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F078u;
label_27f078:
    // 0x27f078: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F078u;
    {
        const bool branch_taken_0x27f078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F078u;
        // 0x27f07c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f078) {
            ctx->pc = 0x27F08Cu;
            goto label_27f08c;
        }
    }
    ctx->pc = 0x27F080u;
    // 0x27f080: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f084: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x27F084u;
    {
        const bool branch_taken_0x27f084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F084u;
        // 0x27f088: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f084) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F08Cu;
label_27f08c:
    // 0x27f08c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f090: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F090u;
    SET_GPR_U32(ctx, 31, 0x27F098u);
    ctx->pc = 0x27F094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F090u;
    // 0x27f094: 0x24a59db8  addiu       $a1, $a1, -0x6248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F090u, 0x27F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F098u;
label_27f098:
    // 0x27f098: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F098u;
    {
        const bool branch_taken_0x27f098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F098u;
        // 0x27f09c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f098) {
            ctx->pc = 0x27F0ACu;
            goto label_27f0ac;
        }
    }
    ctx->pc = 0x27F0A0u;
    // 0x27f0a0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f0a4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x27F0A4u;
    {
        const bool branch_taken_0x27f0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0A4u;
        // 0x27f0a8: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0a4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F0ACu;
label_27f0ac:
    // 0x27f0ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0b0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F0B0u;
    SET_GPR_U32(ctx, 31, 0x27F0B8u);
    ctx->pc = 0x27F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0B0u;
    // 0x27f0b4: 0x24a59dd8  addiu       $a1, $a1, -0x6228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F0B0u, 0x27F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0B8u;
label_27f0b8:
    // 0x27f0b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F0B8u;
    {
        const bool branch_taken_0x27f0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0B8u;
        // 0x27f0bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0b8) {
            ctx->pc = 0x27F0CCu;
            goto label_27f0cc;
        }
    }
    ctx->pc = 0x27F0C0u;
    // 0x27f0c0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f0c4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x27F0C4u;
    {
        const bool branch_taken_0x27f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0C4u;
        // 0x27f0c8: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0c4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F0CCu;
label_27f0cc:
    // 0x27f0cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0d0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F0D0u;
    SET_GPR_U32(ctx, 31, 0x27F0D8u);
    ctx->pc = 0x27F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0D0u;
    // 0x27f0d4: 0x24a59de8  addiu       $a1, $a1, -0x6218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F0D0u, 0x27F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0D8u;
label_27f0d8:
    // 0x27f0d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F0D8u;
    {
        const bool branch_taken_0x27f0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0D8u;
        // 0x27f0dc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0d8) {
            ctx->pc = 0x27F0ECu;
            goto label_27f0ec;
        }
    }
    ctx->pc = 0x27F0E0u;
    // 0x27f0e0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f0e4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x27F0E4u;
    {
        const bool branch_taken_0x27f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0E4u;
        // 0x27f0e8: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0e4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F0ECu;
label_27f0ec:
    // 0x27f0ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0f0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F0F0u;
    SET_GPR_U32(ctx, 31, 0x27F0F8u);
    ctx->pc = 0x27F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0F0u;
    // 0x27f0f4: 0x24a59df8  addiu       $a1, $a1, -0x6208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F0F0u, 0x27F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0F8u;
label_27f0f8:
    // 0x27f0f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F0F8u;
    {
        const bool branch_taken_0x27f0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0F8u;
        // 0x27f0fc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0f8) {
            ctx->pc = 0x27F10Cu;
            goto label_27f10c;
        }
    }
    ctx->pc = 0x27F100u;
    // 0x27f100: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f104: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27F104u;
    {
        const bool branch_taken_0x27f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F104u;
        // 0x27f108: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f104) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F10Cu;
label_27f10c:
    // 0x27f10c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f110: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F110u;
    SET_GPR_U32(ctx, 31, 0x27F118u);
    ctx->pc = 0x27F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F110u;
    // 0x27f114: 0x24a59e08  addiu       $a1, $a1, -0x61F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F110u, 0x27F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F118u;
label_27f118:
    // 0x27f118: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F118u;
    {
        const bool branch_taken_0x27f118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F118u;
        // 0x27f11c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f118) {
            ctx->pc = 0x27F12Cu;
            goto label_27f12c;
        }
    }
    ctx->pc = 0x27F120u;
    // 0x27f120: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f124: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27F124u;
    {
        const bool branch_taken_0x27f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F124u;
        // 0x27f128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f124) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F12Cu;
label_27f12c:
    // 0x27f12c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f130: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F130u;
    SET_GPR_U32(ctx, 31, 0x27F138u);
    ctx->pc = 0x27F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F130u;
    // 0x27f134: 0x24a59e20  addiu       $a1, $a1, -0x61E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F130u, 0x27F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F138u;
label_27f138:
    // 0x27f138: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F138u;
    {
        const bool branch_taken_0x27f138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F138u;
        // 0x27f13c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f138) {
            ctx->pc = 0x27F14Cu;
            goto label_27f14c;
        }
    }
    ctx->pc = 0x27F140u;
    // 0x27f140: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f144: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27F144u;
    {
        const bool branch_taken_0x27f144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F144u;
        // 0x27f148: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f144) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F14Cu;
label_27f14c:
    // 0x27f14c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f150: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F150u;
    SET_GPR_U32(ctx, 31, 0x27F158u);
    ctx->pc = 0x27F154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F150u;
    // 0x27f154: 0x24a59e38  addiu       $a1, $a1, -0x61C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F150u, 0x27F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F158u;
label_27f158:
    // 0x27f158: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F158u;
    {
        const bool branch_taken_0x27f158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F158u;
        // 0x27f15c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f158) {
            ctx->pc = 0x27F16Cu;
            goto label_27f16c;
        }
    }
    ctx->pc = 0x27F160u;
    // 0x27f160: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f164: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27F164u;
    {
        const bool branch_taken_0x27f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F164u;
        // 0x27f168: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f164) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F16Cu;
label_27f16c:
    // 0x27f16c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f170: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F170u;
    SET_GPR_U32(ctx, 31, 0x27F178u);
    ctx->pc = 0x27F174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F170u;
    // 0x27f174: 0x24a59e58  addiu       $a1, $a1, -0x61A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F170u, 0x27F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F178u;
label_27f178:
    // 0x27f178: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F178u;
    {
        const bool branch_taken_0x27f178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F178u;
        // 0x27f17c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f178) {
            ctx->pc = 0x27F18Cu;
            goto label_27f18c;
        }
    }
    ctx->pc = 0x27F180u;
    // 0x27f180: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f184: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27F184u;
    {
        const bool branch_taken_0x27f184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F184u;
        // 0x27f188: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f184) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F18Cu;
label_27f18c:
    // 0x27f18c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f190: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F190u;
    SET_GPR_U32(ctx, 31, 0x27F198u);
    ctx->pc = 0x27F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F190u;
    // 0x27f194: 0x24a59e78  addiu       $a1, $a1, -0x6188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F190u, 0x27F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F198u;
label_27f198:
    // 0x27f198: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F198u;
    {
        const bool branch_taken_0x27f198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F198u;
        // 0x27f19c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f198) {
            ctx->pc = 0x27F1ACu;
            goto label_27f1ac;
        }
    }
    ctx->pc = 0x27F1A0u;
    // 0x27f1a0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f1a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27F1A4u;
    {
        const bool branch_taken_0x27f1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1A4u;
        // 0x27f1a8: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1a4) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F1ACu;
label_27f1ac:
    // 0x27f1ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1b0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F1B0u;
    SET_GPR_U32(ctx, 31, 0x27F1B8u);
    ctx->pc = 0x27F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1B0u;
    // 0x27f1b4: 0x24a59e88  addiu       $a1, $a1, -0x6178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F1B0u, 0x27F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1B8u;
label_27f1b8:
    // 0x27f1b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F1B8u;
    {
        const bool branch_taken_0x27f1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1B8u;
        // 0x27f1bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1b8) {
            ctx->pc = 0x27F1DCu;
            goto label_27f1dc;
        }
    }
    ctx->pc = 0x27F1C0u;
    // 0x27f1c0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x27f1c4: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x27f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_27f1c8:
    // 0x27f1c8: 0x24844dd0  addiu       $a0, $a0, 0x4DD0
    ctx->pc = 0x27f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
    // 0x27f1cc: 0xc0abf52  jal         func_2AFD48
    ctx->pc = 0x27F1CCu;
    SET_GPR_U32(ctx, 31, 0x27F1D4u);
    ctx->pc = 0x27F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1CCu;
    // 0x27f1d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFD48u, 0x27F1CCu, 0x27F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1D4u;
label_27f1d4:
    // 0x27f1d4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x27F1D4u;
    {
        const bool branch_taken_0x27f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1D4u;
        // 0x27f1d8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1d4) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27F1DCu;
label_27f1dc:
    // 0x27f1dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1e0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F1E0u;
    SET_GPR_U32(ctx, 31, 0x27F1E8u);
    ctx->pc = 0x27F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1E0u;
    // 0x27f1e4: 0x24a59ea0  addiu       $a1, $a1, -0x6160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F1E0u, 0x27F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1E8u;
label_27f1e8:
    // 0x27f1e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F1E8u;
    {
        const bool branch_taken_0x27f1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1E8u;
        // 0x27f1ec: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1e8) {
            ctx->pc = 0x27F1F8u;
            goto label_27f1f8;
        }
    }
    ctx->pc = 0x27F1F0u;
    // 0x27f1f0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x27F1F0u;
    {
        const bool branch_taken_0x27f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1F0u;
        // 0x27f1f4: 0x240200f4  addiu       $v0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1f0) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F1F8u;
label_27f1f8:
    // 0x27f1f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1fc: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F1FCu;
    SET_GPR_U32(ctx, 31, 0x27F204u);
    ctx->pc = 0x27F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1FCu;
    // 0x27f200: 0x24a59eb0  addiu       $a1, $a1, -0x6150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F1FCu, 0x27F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F204u;
label_27f204:
    // 0x27f204: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F204u;
    {
        const bool branch_taken_0x27f204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F204u;
        // 0x27f208: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f204) {
            ctx->pc = 0x27F214u;
            goto label_27f214;
        }
    }
    ctx->pc = 0x27F20Cu;
    // 0x27f20c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x27F20Cu;
    {
        const bool branch_taken_0x27f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F20Cu;
        // 0x27f210: 0x240200f5  addiu       $v0, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f20c) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F214u;
label_27f214:
    // 0x27f214: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f218: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F218u;
    SET_GPR_U32(ctx, 31, 0x27F220u);
    ctx->pc = 0x27F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F218u;
    // 0x27f21c: 0x24a59eb8  addiu       $a1, $a1, -0x6148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F218u, 0x27F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F220u;
label_27f220:
    // 0x27f220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F220u;
    {
        const bool branch_taken_0x27f220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F220u;
        // 0x27f224: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f220) {
            ctx->pc = 0x27F230u;
            goto label_27f230;
        }
    }
    ctx->pc = 0x27F228u;
    // 0x27f228: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x27F228u;
    {
        const bool branch_taken_0x27f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F228u;
        // 0x27f22c: 0x240200f6  addiu       $v0, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f228) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F230u;
label_27f230:
    // 0x27f230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f234: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F234u;
    SET_GPR_U32(ctx, 31, 0x27F23Cu);
    ctx->pc = 0x27F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F234u;
    // 0x27f238: 0x24a59ec0  addiu       $a1, $a1, -0x6140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F234u, 0x27F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F23Cu;
label_27f23c:
    // 0x27f23c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F23Cu;
    {
        const bool branch_taken_0x27f23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F23Cu;
        // 0x27f240: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f23c) {
            ctx->pc = 0x27F24Cu;
            goto label_27f24c;
        }
    }
    ctx->pc = 0x27F244u;
    // 0x27f244: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x27F244u;
    {
        const bool branch_taken_0x27f244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F244u;
        // 0x27f248: 0x240200f7  addiu       $v0, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f244) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F24Cu;
label_27f24c:
    // 0x27f24c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f250: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F250u;
    SET_GPR_U32(ctx, 31, 0x27F258u);
    ctx->pc = 0x27F254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F250u;
    // 0x27f254: 0x24a59ec8  addiu       $a1, $a1, -0x6138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F250u, 0x27F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F258u;
label_27f258:
    // 0x27f258: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F258u;
    {
        const bool branch_taken_0x27f258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F258u;
        // 0x27f25c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f258) {
            ctx->pc = 0x27F27Cu;
            goto label_27f27c;
        }
    }
    ctx->pc = 0x27F260u;
    // 0x27f260: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x27f260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x27f264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f268: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x27f268u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x27f26c: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x27F26Cu;
    SET_GPR_U32(ctx, 31, 0x27F274u);
    ctx->pc = 0x27F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F26Cu;
    // 0x27f270: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x27F26Cu, 0x27F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F274u;
label_27f274:
    // 0x27f274: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x27F274u;
    {
        const bool branch_taken_0x27f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F274u;
        // 0x27f278: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f274) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F27Cu;
label_27f27c:
    // 0x27f27c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f280: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F280u;
    SET_GPR_U32(ctx, 31, 0x27F288u);
    ctx->pc = 0x27F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F280u;
    // 0x27f284: 0x24a59ed0  addiu       $a1, $a1, -0x6130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F280u, 0x27F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F288u;
label_27f288:
    // 0x27f288: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F288u;
    {
        const bool branch_taken_0x27f288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F288u;
        // 0x27f28c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f288) {
            ctx->pc = 0x27F2ACu;
            goto label_27f2ac;
        }
    }
    ctx->pc = 0x27F290u;
    // 0x27f290: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x27f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x27f294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f298: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x27f298u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x27f29c: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x27F29Cu;
    SET_GPR_U32(ctx, 31, 0x27F2A4u);
    ctx->pc = 0x27F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F29Cu;
    // 0x27f2a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x27F29Cu, 0x27F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2A4u;
label_27f2a4:
    // 0x27f2a4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x27F2A4u;
    {
        const bool branch_taken_0x27f2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2A4u;
        // 0x27f2a8: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2a4) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F2ACu;
label_27f2ac:
    // 0x27f2ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2b0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F2B0u;
    SET_GPR_U32(ctx, 31, 0x27F2B8u);
    ctx->pc = 0x27F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2B0u;
    // 0x27f2b4: 0x24a59ed8  addiu       $a1, $a1, -0x6128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F2B0u, 0x27F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2B8u;
label_27f2b8:
    // 0x27f2b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F2B8u;
    {
        const bool branch_taken_0x27f2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2B8u;
        // 0x27f2bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2b8) {
            ctx->pc = 0x27F2DCu;
            goto label_27f2dc;
        }
    }
    ctx->pc = 0x27F2C0u;
    // 0x27f2c0: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x27f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x27f2c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2c8: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x27f2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x27f2cc: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x27F2CCu;
    SET_GPR_U32(ctx, 31, 0x27F2D4u);
    ctx->pc = 0x27F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2CCu;
    // 0x27f2d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x27F2CCu, 0x27F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2D4u;
label_27f2d4:
    // 0x27f2d4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x27F2D4u;
    {
        const bool branch_taken_0x27f2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2D4u;
        // 0x27f2d8: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2d4) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F2DCu;
label_27f2dc:
    // 0x27f2dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2e0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F2E0u;
    SET_GPR_U32(ctx, 31, 0x27F2E8u);
    ctx->pc = 0x27F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2E0u;
    // 0x27f2e4: 0x24a59ee0  addiu       $a1, $a1, -0x6120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F2E0u, 0x27F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2E8u;
label_27f2e8:
    // 0x27f2e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F2E8u;
    {
        const bool branch_taken_0x27f2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2E8u;
        // 0x27f2ec: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2e8) {
            ctx->pc = 0x27F30Cu;
            goto label_27f30c;
        }
    }
    ctx->pc = 0x27F2F0u;
    // 0x27f2f0: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x27f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x27f2f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2f8: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x27f2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x27f2fc: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x27F2FCu;
    SET_GPR_U32(ctx, 31, 0x27F304u);
    ctx->pc = 0x27F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2FCu;
    // 0x27f300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x27F2FCu, 0x27F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F304u;
label_27f304:
    // 0x27f304: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x27F304u;
    {
        const bool branch_taken_0x27f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F304u;
        // 0x27f308: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f304) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F30Cu;
label_27f30c:
    // 0x27f30c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f310: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F310u;
    SET_GPR_U32(ctx, 31, 0x27F318u);
    ctx->pc = 0x27F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F310u;
    // 0x27f314: 0x24a59ee8  addiu       $a1, $a1, -0x6118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F310u, 0x27F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F318u;
label_27f318:
    // 0x27f318: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x27F318u;
    {
        const bool branch_taken_0x27f318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F318u;
        // 0x27f31c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f318) {
            ctx->pc = 0x27F47Cu;
            goto label_27f47c;
        }
    }
    ctx->pc = 0x27F320u;
    // 0x27f320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f324: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F324u;
    SET_GPR_U32(ctx, 31, 0x27F32Cu);
    ctx->pc = 0x27F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F324u;
    // 0x27f328: 0x24a59ef8  addiu       $a1, $a1, -0x6108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F324u, 0x27F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F32Cu;
label_27f32c:
    // 0x27f32c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x27F32Cu;
    {
        const bool branch_taken_0x27f32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F32Cu;
        // 0x27f330: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f32c) {
            ctx->pc = 0x27F47Cu;
            goto label_27f47c;
        }
    }
    ctx->pc = 0x27F334u;
    // 0x27f334: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f338: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F338u;
    SET_GPR_U32(ctx, 31, 0x27F340u);
    ctx->pc = 0x27F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F338u;
    // 0x27f33c: 0x24a59f08  addiu       $a1, $a1, -0x60F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F338u, 0x27F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F340u;
label_27f340:
    // 0x27f340: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F340u;
    {
        const bool branch_taken_0x27f340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F340u;
        // 0x27f344: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f340) {
            ctx->pc = 0x27F350u;
            goto label_27f350;
        }
    }
    ctx->pc = 0x27F348u;
    // 0x27f348: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x27F348u;
    {
        const bool branch_taken_0x27f348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F348u;
        // 0x27f34c: 0x240200fe  addiu       $v0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f348) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F350u;
label_27f350:
    // 0x27f350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f354: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F354u;
    SET_GPR_U32(ctx, 31, 0x27F35Cu);
    ctx->pc = 0x27F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F354u;
    // 0x27f358: 0x24a59f10  addiu       $a1, $a1, -0x60F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F354u, 0x27F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F35Cu;
label_27f35c:
    // 0x27f35c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F35Cu;
    {
        const bool branch_taken_0x27f35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F35Cu;
        // 0x27f360: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f35c) {
            ctx->pc = 0x27F36Cu;
            goto label_27f36c;
        }
    }
    ctx->pc = 0x27F364u;
    // 0x27f364: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x27F364u;
    {
        const bool branch_taken_0x27f364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F364u;
        // 0x27f368: 0x240200fb  addiu       $v0, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f364) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F36Cu;
label_27f36c:
    // 0x27f36c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f370: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F370u;
    SET_GPR_U32(ctx, 31, 0x27F378u);
    ctx->pc = 0x27F374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F370u;
    // 0x27f374: 0x24a59f18  addiu       $a1, $a1, -0x60E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F370u, 0x27F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F378u;
label_27f378:
    // 0x27f378: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F378u;
    {
        const bool branch_taken_0x27f378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F378u;
        // 0x27f37c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f378) {
            ctx->pc = 0x27F388u;
            goto label_27f388;
        }
    }
    ctx->pc = 0x27F380u;
    // 0x27f380: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x27F380u;
    {
        const bool branch_taken_0x27f380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F380u;
        // 0x27f384: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f380) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F388u;
label_27f388:
    // 0x27f388: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f38c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F38Cu;
    SET_GPR_U32(ctx, 31, 0x27F394u);
    ctx->pc = 0x27F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F38Cu;
    // 0x27f390: 0x24a59f20  addiu       $a1, $a1, -0x60E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F38Cu, 0x27F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F394u;
label_27f394:
    // 0x27f394: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F394u;
    {
        const bool branch_taken_0x27f394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F394u;
        // 0x27f398: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f394) {
            ctx->pc = 0x27F3A4u;
            goto label_27f3a4;
        }
    }
    ctx->pc = 0x27F39Cu;
    // 0x27f39c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x27F39Cu;
    {
        const bool branch_taken_0x27f39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F39Cu;
        // 0x27f3a0: 0x240200f8  addiu       $v0, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f39c) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F3A4u;
label_27f3a4:
    // 0x27f3a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3a8: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F3A8u;
    SET_GPR_U32(ctx, 31, 0x27F3B0u);
    ctx->pc = 0x27F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3A8u;
    // 0x27f3ac: 0x24a59f28  addiu       $a1, $a1, -0x60D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F3A8u, 0x27F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3B0u;
label_27f3b0:
    // 0x27f3b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F3B0u;
    {
        const bool branch_taken_0x27f3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3B0u;
        // 0x27f3b4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3b0) {
            ctx->pc = 0x27F3C0u;
            goto label_27f3c0;
        }
    }
    ctx->pc = 0x27F3B8u;
    // 0x27f3b8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27F3B8u;
    {
        const bool branch_taken_0x27f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3B8u;
        // 0x27f3bc: 0x240200f9  addiu       $v0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3b8) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F3C0u;
label_27f3c0:
    // 0x27f3c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3c4: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F3C4u;
    SET_GPR_U32(ctx, 31, 0x27F3CCu);
    ctx->pc = 0x27F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3C4u;
    // 0x27f3c8: 0x24a59f30  addiu       $a1, $a1, -0x60D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F3C4u, 0x27F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3CCu;
label_27f3cc:
    // 0x27f3cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F3CCu;
    {
        const bool branch_taken_0x27f3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3CCu;
        // 0x27f3d0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3cc) {
            ctx->pc = 0x27F3DCu;
            goto label_27f3dc;
        }
    }
    ctx->pc = 0x27F3D4u;
    // 0x27f3d4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27F3D4u;
    {
        const bool branch_taken_0x27f3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3D4u;
        // 0x27f3d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3d4) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F3DCu;
label_27f3dc:
    // 0x27f3dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3e0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F3E0u;
    SET_GPR_U32(ctx, 31, 0x27F3E8u);
    ctx->pc = 0x27F3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3E0u;
    // 0x27f3e4: 0x24a59f38  addiu       $a1, $a1, -0x60C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F3E0u, 0x27F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3E8u;
label_27f3e8:
    // 0x27f3e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F3E8u;
    {
        const bool branch_taken_0x27f3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3E8u;
        // 0x27f3ec: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3e8) {
            ctx->pc = 0x27F3F8u;
            goto label_27f3f8;
        }
    }
    ctx->pc = 0x27F3F0u;
    // 0x27f3f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27F3F0u;
    {
        const bool branch_taken_0x27f3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3F0u;
        // 0x27f3f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3f0) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F3F8u;
label_27f3f8:
    // 0x27f3f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3fc: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F3FCu;
    SET_GPR_U32(ctx, 31, 0x27F404u);
    ctx->pc = 0x27F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3FCu;
    // 0x27f400: 0x24a59f40  addiu       $a1, $a1, -0x60C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F3FCu, 0x27F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F404u;
label_27f404:
    // 0x27f404: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F404u;
    {
        const bool branch_taken_0x27f404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F404u;
        // 0x27f408: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f404) {
            ctx->pc = 0x27F414u;
            goto label_27f414;
        }
    }
    ctx->pc = 0x27F40Cu;
    // 0x27f40c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F40Cu;
    {
        const bool branch_taken_0x27f40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F40Cu;
        // 0x27f410: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f40c) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F414u;
label_27f414:
    // 0x27f414: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f418: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F418u;
    SET_GPR_U32(ctx, 31, 0x27F420u);
    ctx->pc = 0x27F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F418u;
    // 0x27f41c: 0x24a59f48  addiu       $a1, $a1, -0x60B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F418u, 0x27F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F420u;
label_27f420:
    // 0x27f420: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F420u;
    {
        const bool branch_taken_0x27f420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F420u;
        // 0x27f424: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f420) {
            ctx->pc = 0x27F444u;
            goto label_27f444;
        }
    }
    ctx->pc = 0x27F428u;
    // 0x27f428: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27f42c:
    // 0x27f42c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f430: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x27f430u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x27f434: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x27F434u;
    SET_GPR_U32(ctx, 31, 0x27F43Cu);
    ctx->pc = 0x27F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F434u;
    // 0x27f438: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x27F434u, 0x27F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F43Cu;
label_27f43c:
    // 0x27f43c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27F43Cu;
    {
        const bool branch_taken_0x27f43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F43Cu;
        // 0x27f440: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f43c) {
            ctx->pc = 0x27F480u;
            goto label_27f480;
        }
    }
    ctx->pc = 0x27F444u;
label_27f444:
    // 0x27f444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f448: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x27F448u;
    SET_GPR_U32(ctx, 31, 0x27F450u);
    ctx->pc = 0x27F44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F448u;
    // 0x27f44c: 0x24a59f50  addiu       $a1, $a1, -0x60B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x27F448u, 0x27F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F450u;
label_27f450:
    // 0x27f450: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F450u;
    {
        const bool branch_taken_0x27f450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F450u;
        // 0x27f454: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f450) {
            ctx->pc = 0x27F468u;
            goto label_27f468;
        }
    }
    ctx->pc = 0x27F458u;
    // 0x27f458: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27f458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27f45c: 0x2484b0e0  addiu       $a0, $a0, -0x4F20
    ctx->pc = 0x27f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947040));
    // 0x27f460: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27F460u;
    {
        const bool branch_taken_0x27f460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F460u;
        // 0x27f464: 0x24a59f58  addiu       $a1, $a1, -0x60A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f460) {
            ctx->pc = 0x27F4BCu;
            goto label_27f4bc;
        }
    }
    ctx->pc = 0x27F468u;
label_27f468:
    // 0x27f468: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x27f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27f46c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f470: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x27f470u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x27f474: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x27F474u;
    SET_GPR_U32(ctx, 31, 0x27F47Cu);
    ctx->pc = 0x27F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F474u;
    // 0x27f478: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x27F474u, 0x27F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F47Cu;
label_27f47c:
    // 0x27f47c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x27f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27f480:
    // 0x27f480: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x27f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x27f484: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x27f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x27f488: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x27f488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x27f48c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x27f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x27f490: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x27f490u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27f494: 0x5482000e  bnel        $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27F494u;
    {
        const bool branch_taken_0x27f494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f494) {
            ctx->pc = 0x27F498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F494u;
            // 0x27f498: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F4D0u;
            goto label_27f4d0;
        }
    }
    ctx->pc = 0x27F49Cu;
    // 0x27f49c: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x27f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x27f4a0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x27f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x27f4a4: 0x1000fb98  b           . + 4 + (-0x468 << 2)
    ctx->pc = 0x27F4A4u;
    {
        const bool branch_taken_0x27f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4A4u;
        // 0x27f4a8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4a4) {
            ctx->pc = 0x27E308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e308;
        }
    }
    ctx->pc = 0x27F4ACu;
label_27f4ac:
    // 0x27f4ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x27f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x27f4b0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27f4b4: 0x2484b0e0  addiu       $a0, $a0, -0x4F20
    ctx->pc = 0x27f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947040));
    // 0x27f4b8: 0x24a59890  addiu       $a1, $a1, -0x6770
    ctx->pc = 0x27f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940816));
label_27f4bc:
    // 0x27f4bc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x27F4BCu;
    SET_GPR_U32(ctx, 31, 0x27F4C4u);
    ctx->pc = 0x27F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F4BCu;
    // 0x27f4c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27F4BCu, 0x27F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4C4u;
label_27f4c4:
    // 0x27f4c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27F4C4u;
    {
        const bool branch_taken_0x27f4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4C4u;
        // 0x27f4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4c4) {
            ctx->pc = 0x27F4E0u;
            goto label_27f4e0;
        }
    }
    ctx->pc = 0x27F4CCu;
label_27f4cc:
    // 0x27f4cc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x27f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27f4d0:
    // 0x27f4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f4d4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x27f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x27f4d8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x27f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x27f4dc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x27f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_27f4e0:
    // 0x27f4e0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x27f4e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f4e4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x27f4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27f4e8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27f4e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f4ec: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x27f4ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27f4f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27f4f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f4f4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x27f4f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27f4f8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27f4f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f4fc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x27f4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x27f500: 0x3e00008  jr          $ra
    ctx->pc = 0x27F500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F500u;
        // 0x27f504: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F508u;
    // 0x27f508: 0x0  nop
    ctx->pc = 0x27f508u;
    // NOP
    // 0x27f50c: 0x0  nop
    ctx->pc = 0x27f50cu;
    // NOP
    // 0x27f510: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27f514: 0x0  nop
    ctx->pc = 0x27f514u;
    // NOP
    ctx->pc = 0x27f518u;
}
