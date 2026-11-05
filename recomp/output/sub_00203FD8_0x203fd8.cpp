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

// Function: sub_00203FD8
// Address: 0x203fd8 - 0x204770
void sub_00203FD8_0x203fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203FD8_0x203fd8");
#endif

    switch (ctx->pc) {
        case 0x204018u: goto label_204018;
        case 0x20402cu: goto label_20402c;
        case 0x204044u: goto label_204044;
        case 0x204058u: goto label_204058;
        case 0x204070u: goto label_204070;
        case 0x204088u: goto label_204088;
        case 0x204098u: goto label_204098;
        case 0x2040a8u: goto label_2040a8;
        case 0x2040b4u: goto label_2040b4;
        case 0x2040ccu: goto label_2040cc;
        case 0x2040d4u: goto label_2040d4;
        case 0x2040e4u: goto label_2040e4;
        case 0x2040f0u: goto label_2040f0;
        case 0x204100u: goto label_204100;
        case 0x204118u: goto label_204118;
        case 0x204138u: goto label_204138;
        case 0x204140u: goto label_204140;
        case 0x204154u: goto label_204154;
        case 0x204160u: goto label_204160;
        case 0x204168u: goto label_204168;
        case 0x204174u: goto label_204174;
        case 0x204180u: goto label_204180;
        case 0x204190u: goto label_204190;
        case 0x2041a8u: goto label_2041a8;
        case 0x2041b0u: goto label_2041b0;
        case 0x2041bcu: goto label_2041bc;
        case 0x2041d0u: goto label_2041d0;
        case 0x2041ecu: goto label_2041ec;
        case 0x2041f4u: goto label_2041f4;
        case 0x204200u: goto label_204200;
        case 0x204214u: goto label_204214;
        case 0x204230u: goto label_204230;
        case 0x204238u: goto label_204238;
        case 0x204244u: goto label_204244;
        case 0x204250u: goto label_204250;
        case 0x204270u: goto label_204270;
        case 0x204288u: goto label_204288;
        case 0x204290u: goto label_204290;
        case 0x2042a4u: goto label_2042a4;
        case 0x2042bcu: goto label_2042bc;
        case 0x2042ccu: goto label_2042cc;
        case 0x2042e8u: goto label_2042e8;
        case 0x204300u: goto label_204300;
        case 0x204338u: goto label_204338;
        case 0x204340u: goto label_204340;
        case 0x204354u: goto label_204354;
        case 0x204368u: goto label_204368;
        case 0x204384u: goto label_204384;
        case 0x20439cu: goto label_20439c;
        case 0x2043b0u: goto label_2043b0;
        case 0x2043d0u: goto label_2043d0;
        case 0x2043f8u: goto label_2043f8;
        case 0x204430u: goto label_204430;
        case 0x20443cu: goto label_20443c;
        case 0x204458u: goto label_204458;
        case 0x204498u: goto label_204498;
        case 0x2044acu: goto label_2044ac;
        case 0x2044ccu: goto label_2044cc;
        case 0x2044e0u: goto label_2044e0;
        case 0x2044f8u: goto label_2044f8;
        case 0x204570u: goto label_204570;
        case 0x204640u: goto label_204640;
        case 0x204648u: goto label_204648;
        case 0x204650u: goto label_204650;
        case 0x20468cu: goto label_20468c;
        case 0x204694u: goto label_204694;
        case 0x20469cu: goto label_20469c;
        case 0x2046b4u: goto label_2046b4;
        case 0x2046ccu: goto label_2046cc;
        case 0x2046d4u: goto label_2046d4;
        case 0x2046f0u: goto label_2046f0;
        case 0x204714u: goto label_204714;
        case 0x204720u: goto label_204720;
        case 0x20472cu: goto label_20472c;
        case 0x204738u: goto label_204738;
        default: break;
    }

    ctx->pc = 0x203fd8u;

    // 0x203fd8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x203fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x203fdc: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x203fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
    // 0x203fe0: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x203fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x203fe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fe8: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x203fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x203fec: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x203fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
    // 0x203ff0: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x203ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
    // 0x203ff4: 0xffb50188  sd          $s5, 0x188($sp)
    ctx->pc = 0x203ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 21));
    // 0x203ff8: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x203ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x203ffc: 0xffb70198  sd          $s7, 0x198($sp)
    ctx->pc = 0x203ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 23));
    // 0x204000: 0xffbe01a0  sd          $fp, 0x1A0($sp)
    ctx->pc = 0x204000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 30));
    // 0x204004: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x204004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x204008: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x204008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x20400c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x20400cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x204010: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x204010u;
    SET_GPR_U32(ctx, 31, 0x204018u);
    ctx->pc = 0x204014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204010u;
    // 0x204014: 0xae201b9c  sw          $zero, 0x1B9C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 7068), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x204010u, 0x204018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204018u;
label_204018:
    // 0x204018: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x204018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x20401c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20401cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204020: 0x8c6693b8  lw          $a2, -0x6C48($v1)
    ctx->pc = 0x204020u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F93B8u));
    // 0x204024: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x204024u;
    SET_GPR_U32(ctx, 31, 0x20402Cu);
    ctx->pc = 0x204028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204024u;
    // 0x204028: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x204024u, 0x20402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20402Cu;
label_20402c:
    // 0x20402c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x20402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x204030: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x204030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204034: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x204034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x204038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20403c: 0xc09dd98  jal         func_277660
    ctx->pc = 0x20403Cu;
    SET_GPR_U32(ctx, 31, 0x204044u);
    ctx->pc = 0x204040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20403Cu;
    // 0x204040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x20403Cu, 0x204044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204044u;
label_204044:
    // 0x204044: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204044u;
    {
        const bool branch_taken_0x204044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204044u;
        // 0x204048: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204044) {
            ctx->pc = 0x204060u;
            goto label_204060;
        }
    }
    ctx->pc = 0x20404Cu;
    // 0x20404c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204050: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x204050u;
    SET_GPR_U32(ctx, 31, 0x204058u);
    ctx->pc = 0x204054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204050u;
    // 0x204054: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x204050u, 0x204058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204058u;
label_204058:
    // 0x204058: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x204058u;
    {
        const bool branch_taken_0x204058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204058u;
        // 0x20405c: 0xdfb00160  ld          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204058) {
            ctx->pc = 0x20473Cu;
            goto label_20473c;
        }
    }
    ctx->pc = 0x204060u;
label_204060:
    // 0x204060: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x204060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x204064: 0x24a50980  addiu       $a1, $a1, 0x980
    ctx->pc = 0x204064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2432));
    // 0x204068: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x204068u;
    SET_GPR_U32(ctx, 31, 0x204070u);
    ctx->pc = 0x20406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204068u;
    // 0x20406c: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x204068u, 0x204070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204070u;
label_204070:
    // 0x204070: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x204070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204074: 0x26221ba0  addiu       $v0, $s1, 0x1BA0
    ctx->pc = 0x204074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 7072));
    // 0x204078: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x204078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20407c: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x20407cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x204080: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x204080u;
    SET_GPR_U32(ctx, 31, 0x204088u);
    ctx->pc = 0x204084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204080u;
    // 0x204084: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x204080u, 0x204088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204088u;
label_204088:
    // 0x204088: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x204088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20408c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x20408cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x204090: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x204090u;
    SET_GPR_U32(ctx, 31, 0x204098u);
    ctx->pc = 0x204094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204090u;
    // 0x204094: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x204090u, 0x204098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204098u;
label_204098:
    // 0x204098: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x204098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x20409c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x20409cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2040a0: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x2040a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
    // 0x2040a4: 0x0  nop
    ctx->pc = 0x2040a4u;
    // NOP
label_2040a8:
    // 0x2040a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2040a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2040ACu;
    SET_GPR_U32(ctx, 31, 0x2040B4u);
    ctx->pc = 0x2040B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040ACu;
    // 0x2040b0: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2040ACu, 0x2040B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040B4u;
label_2040b4:
    // 0x2040b4: 0x0  nop
    ctx->pc = 0x2040b4u;
    // NOP
    // 0x2040b8: 0x1695fffb  bne         $s4, $s5, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2040B8u;
    {
        const bool branch_taken_0x2040b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        ctx->pc = 0x2040BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040B8u;
        // 0x2040bc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040b8) {
            ctx->pc = 0x2040A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2040a8;
        }
    }
    ctx->pc = 0x2040C0u;
    // 0x2040c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2040c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2040c4: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x2040C4u;
    SET_GPR_U32(ctx, 31, 0x2040CCu);
    ctx->pc = 0x2040C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040C4u;
    // 0x2040c8: 0x241e00b0  addiu       $fp, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x2040C4u, 0x2040CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040CCu;
label_2040cc:
    // 0x2040cc: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x2040CCu;
    SET_GPR_U32(ctx, 31, 0x2040D4u);
    ctx->pc = 0x2040D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040CCu;
    // 0x2040d0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x2040CCu, 0x2040D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040D4u;
label_2040d4:
    // 0x2040d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2040d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2040d8: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x2040d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2040dc: 0xc080676  jal         func_2019D8
    ctx->pc = 0x2040DCu;
    SET_GPR_U32(ctx, 31, 0x2040E4u);
    ctx->pc = 0x2040E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040DCu;
    // 0x2040e0: 0xafa300e4  sw          $v1, 0xE4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2019D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2019D8u, 0x2040DCu, 0x2040E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040E4u;
label_2040e4:
    // 0x2040e4: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x2040E4u;
    {
        const bool branch_taken_0x2040e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040E4u;
        // 0x2040e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040e4) {
            ctx->pc = 0x2046ACu;
            goto label_2046ac;
        }
    }
    ctx->pc = 0x2040ECu;
    // 0x2040ec: 0x0  nop
    ctx->pc = 0x2040ecu;
    // NOP
label_2040f0:
    // 0x2040f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2040f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2040f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040f8: 0xc0811dc  jal         func_204770
    ctx->pc = 0x2040F8u;
    SET_GPR_U32(ctx, 31, 0x204100u);
    ctx->pc = 0x2040FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040F8u;
    // 0x2040fc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204770u, 0x2040F8u, 0x204100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204100u;
label_204100:
    // 0x204100: 0x1440016a  bnez        $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x204100u;
    {
        const bool branch_taken_0x204100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204100u;
        // 0x204104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204100) {
            ctx->pc = 0x2046ACu;
            goto label_2046ac;
        }
    }
    ctx->pc = 0x204108u;
    // 0x204108: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20410c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x204110: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204110u;
    SET_GPR_U32(ctx, 31, 0x204118u);
    ctx->pc = 0x204114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204110u;
    // 0x204114: 0x24a50990  addiu       $a1, $a1, 0x990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204110u, 0x204118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204118u;
label_204118:
    // 0x204118: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20411c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x20411Cu;
    {
        const bool branch_taken_0x20411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20411Cu;
        // 0x204120: 0x3c170046  lui         $s7, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20411c) {
            ctx->pc = 0x204260u;
            goto label_204260;
        }
    }
    ctx->pc = 0x204124u;
    // 0x204124: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x204124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x204128: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x204128u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    // 0x20412c: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x20412cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x204130: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x204130u;
    {
        const bool branch_taken_0x204130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204130u;
        // 0x204134: 0x3c140046  lui         $s4, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204130) {
            ctx->pc = 0x204244u;
            goto label_204244;
        }
    }
    ctx->pc = 0x204138u;
label_204138:
    // 0x204138: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204138u;
    SET_GPR_U32(ctx, 31, 0x204140u);
    ctx->pc = 0x20413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204138u;
    // 0x20413c: 0x26e509a0  addiu       $a1, $s7, 0x9A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204138u, 0x204140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204140u;
label_204140:
    // 0x204140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204144: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x204144u;
    {
        const bool branch_taken_0x204144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204144u;
        // 0x204148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204144) {
            ctx->pc = 0x204188u;
            goto label_204188;
        }
    }
    ctx->pc = 0x20414Cu;
    // 0x20414c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20414Cu;
    SET_GPR_U32(ctx, 31, 0x204154u);
    ctx->pc = 0x204150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20414Cu;
    // 0x204150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20414Cu, 0x204154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204154u;
label_204154:
    // 0x204154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204158: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x204158u;
    SET_GPR_U32(ctx, 31, 0x204160u);
    ctx->pc = 0x20415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204158u;
    // 0x20415c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x204158u, 0x204160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204160u;
label_204160:
    // 0x204160: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x204160u;
    SET_GPR_U32(ctx, 31, 0x204168u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x204160u, 0x204168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204168u;
label_204168:
    // 0x204168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20416c: 0xc0821ce  jal         func_208738
    ctx->pc = 0x20416Cu;
    SET_GPR_U32(ctx, 31, 0x204174u);
    ctx->pc = 0x204170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20416Cu;
    // 0x204170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x20416Cu, 0x204174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204174u;
label_204174:
    // 0x204174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204178: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x204178u;
    SET_GPR_U32(ctx, 31, 0x204180u);
    ctx->pc = 0x20417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204178u;
    // 0x20417c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x204178u, 0x204180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204180u;
label_204180:
    // 0x204180: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x204180u;
    {
        const bool branch_taken_0x204180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204180u;
        // 0x204184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204180) {
            ctx->pc = 0x204248u;
            goto label_204248;
        }
    }
    ctx->pc = 0x204188u;
label_204188:
    // 0x204188: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204188u;
    SET_GPR_U32(ctx, 31, 0x204190u);
    ctx->pc = 0x20418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204188u;
    // 0x20418c: 0x26c509a8  addiu       $a1, $s6, 0x9A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204188u, 0x204190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204190u;
label_204190:
    // 0x204190: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204194: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x204194u;
    {
        const bool branch_taken_0x204194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204194u;
        // 0x204198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204194) {
            ctx->pc = 0x2041C4u;
            goto label_2041c4;
        }
    }
    ctx->pc = 0x20419Cu;
    // 0x20419c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x20419cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2041a0: 0xc09e056  jal         func_278158
    ctx->pc = 0x2041A0u;
    SET_GPR_U32(ctx, 31, 0x2041A8u);
    ctx->pc = 0x2041A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041A0u;
    // 0x2041a4: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2041A0u, 0x2041A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041A8u;
label_2041a8:
    // 0x2041a8: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x2041A8u;
    SET_GPR_U32(ctx, 31, 0x2041B0u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x2041A8u, 0x2041B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041B0u;
label_2041b0:
    // 0x2041b0: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2041b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2041b4: 0xc0821d8  jal         func_208760
    ctx->pc = 0x2041B4u;
    SET_GPR_U32(ctx, 31, 0x2041BCu);
    ctx->pc = 0x2041B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041B4u;
    // 0x2041b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208760u, 0x2041B4u, 0x2041BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041BCu;
label_2041bc:
    // 0x2041bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2041BCu;
    {
        const bool branch_taken_0x2041bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041BCu;
        // 0x2041c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041bc) {
            ctx->pc = 0x204248u;
            goto label_204248;
        }
    }
    ctx->pc = 0x2041C4u;
label_2041c4:
    // 0x2041c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2041c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2041c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2041C8u;
    SET_GPR_U32(ctx, 31, 0x2041D0u);
    ctx->pc = 0x2041CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041C8u;
    // 0x2041cc: 0x26a509b8  addiu       $a1, $s5, 0x9B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2041C8u, 0x2041D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041D0u;
label_2041d0:
    // 0x2041d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2041d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2041d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2041D4u;
    {
        const bool branch_taken_0x2041d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041D4u;
        // 0x2041d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041d4) {
            ctx->pc = 0x204208u;
            goto label_204208;
        }
    }
    ctx->pc = 0x2041DCu;
    // 0x2041dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2041dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2041e0: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x2041e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2041e4: 0xc09e056  jal         func_278158
    ctx->pc = 0x2041E4u;
    SET_GPR_U32(ctx, 31, 0x2041ECu);
    ctx->pc = 0x2041E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041E4u;
    // 0x2041e8: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2041E4u, 0x2041ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041ECu;
label_2041ec:
    // 0x2041ec: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x2041ECu;
    SET_GPR_U32(ctx, 31, 0x2041F4u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x2041ECu, 0x2041F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041F4u;
label_2041f4:
    // 0x2041f4: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x2041f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2041f8: 0xc0821dc  jal         func_208770
    ctx->pc = 0x2041F8u;
    SET_GPR_U32(ctx, 31, 0x204200u);
    ctx->pc = 0x2041FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041F8u;
    // 0x2041fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208770u, 0x2041F8u, 0x204200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204200u;
label_204200:
    // 0x204200: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x204200u;
    {
        const bool branch_taken_0x204200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204200u;
        // 0x204204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204200) {
            ctx->pc = 0x204248u;
            goto label_204248;
        }
    }
    ctx->pc = 0x204208u;
label_204208:
    // 0x204208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20420c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20420Cu;
    SET_GPR_U32(ctx, 31, 0x204214u);
    ctx->pc = 0x204210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20420Cu;
    // 0x204210: 0x268509d8  addiu       $a1, $s4, 0x9D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20420Cu, 0x204214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204214u;
label_204214:
    // 0x204214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204218: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x204218u;
    {
        const bool branch_taken_0x204218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204218u;
        // 0x20421c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204218) {
            ctx->pc = 0x204244u;
            goto label_204244;
        }
    }
    ctx->pc = 0x204220u;
    // 0x204220: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204224: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x204224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x204228: 0xc09e056  jal         func_278158
    ctx->pc = 0x204228u;
    SET_GPR_U32(ctx, 31, 0x204230u);
    ctx->pc = 0x20422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204228u;
    // 0x20422c: 0xafa20128  sw          $v0, 0x128($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x204228u, 0x204230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204230u;
label_204230:
    // 0x204230: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x204230u;
    SET_GPR_U32(ctx, 31, 0x204238u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x204230u, 0x204238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204238u;
label_204238:
    // 0x204238: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x204238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x20423c: 0xc0821e0  jal         func_208780
    ctx->pc = 0x20423Cu;
    SET_GPR_U32(ctx, 31, 0x204244u);
    ctx->pc = 0x204240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20423Cu;
    // 0x204240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208780u, 0x20423Cu, 0x204244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204244u;
label_204244:
    // 0x204244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204248:
    // 0x204248: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x204248u;
    SET_GPR_U32(ctx, 31, 0x204250u);
    ctx->pc = 0x20424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204248u;
    // 0x20424c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x204248u, 0x204250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204250u;
label_204250:
    // 0x204250: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x204250u;
    {
        const bool branch_taken_0x204250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204250u;
        // 0x204254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204250) {
            ctx->pc = 0x204138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204138;
        }
    }
    ctx->pc = 0x204258u;
    // 0x204258: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x204258u;
    {
        const bool branch_taken_0x204258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204258u;
        // 0x20425c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204258) {
            ctx->pc = 0x2046ACu;
            goto label_2046ac;
        }
    }
    ctx->pc = 0x204260u;
label_204260:
    // 0x204260: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x204260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x204264: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x204264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x204268: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204268u;
    SET_GPR_U32(ctx, 31, 0x204270u);
    ctx->pc = 0x20426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204268u;
    // 0x20426c: 0x24a509f0  addiu       $a1, $a1, 0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204268u, 0x204270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204270u;
label_204270:
    // 0x204270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204274: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x204274u;
    {
        const bool branch_taken_0x204274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204274u;
        // 0x204278: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204274) {
            ctx->pc = 0x2042F0u;
            goto label_2042f0;
        }
    }
    ctx->pc = 0x20427Cu;
    // 0x20427c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x20427cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x204280: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x204280u;
    {
        const bool branch_taken_0x204280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204280u;
        // 0x204284: 0xafa4012c  sw          $a0, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204280) {
            ctx->pc = 0x2042B0u;
            goto label_2042b0;
        }
    }
    ctx->pc = 0x204288u;
label_204288:
    // 0x204288: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204288u;
    SET_GPR_U32(ctx, 31, 0x204290u);
    ctx->pc = 0x20428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204288u;
    // 0x20428c: 0x260509f8  addiu       $a1, $s0, 0x9F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204288u, 0x204290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204290u;
label_204290:
    // 0x204290: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204294u;
    {
        const bool branch_taken_0x204294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204294u;
        // 0x204298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204294) {
            ctx->pc = 0x2042B0u;
            goto label_2042b0;
        }
    }
    ctx->pc = 0x20429Cu;
    // 0x20429c: 0xc09e056  jal         func_278158
    ctx->pc = 0x20429Cu;
    SET_GPR_U32(ctx, 31, 0x2042A4u);
    ctx->pc = 0x2042A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20429Cu;
    // 0x2042a0: 0x27a5012c  addiu       $a1, $sp, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x20429Cu, 0x2042A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042A4u;
label_2042a4:
    // 0x2042a4: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x2042a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x2042a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2042a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2042ac: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x2042acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_2042b0:
    // 0x2042b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2042b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042b4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2042B4u;
    SET_GPR_U32(ctx, 31, 0x2042BCu);
    ctx->pc = 0x2042B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042B4u;
    // 0x2042b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2042B4u, 0x2042BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042BCu;
label_2042bc:
    // 0x2042bc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2042BCu;
    {
        const bool branch_taken_0x2042bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2042C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042BCu;
        // 0x2042c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042bc) {
            ctx->pc = 0x204288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204288;
        }
    }
    ctx->pc = 0x2042C4u;
    // 0x2042c4: 0xc080fee  jal         func_203FB8
    ctx->pc = 0x2042C4u;
    SET_GPR_U32(ctx, 31, 0x2042CCu);
    ctx->pc = 0x2042C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042C4u;
    // 0x2042c8: 0x8fa4012c  lw          $a0, 0x12C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FB8u, 0x2042C4u, 0x2042CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042CCu;
label_2042cc:
    // 0x2042cc: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2042CCu;
    {
        const bool branch_taken_0x2042cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042CCu;
        // 0x2042d0: 0x8fa2012c  lw          $v0, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042cc) {
            ctx->pc = 0x2046A8u;
            goto label_2046a8;
        }
    }
    ctx->pc = 0x2042D4u;
    // 0x2042d4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2042d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2042d8: 0x24649b28  addiu       $a0, $v1, -0x64D8
    ctx->pc = 0x2042d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941480));
    // 0x2042dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2042dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042e0: 0xc07fe78  jal         func_1FF9E0
    ctx->pc = 0x2042E0u;
    SET_GPR_U32(ctx, 31, 0x2042E8u);
    ctx->pc = 0x2042E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042E0u;
    // 0x2042e4: 0xae221b90  sw          $v0, 0x1B90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 7056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9E0u, 0x2042E0u, 0x2042E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042E8u;
label_2042e8:
    // 0x2042e8: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2042E8u;
    {
        const bool branch_taken_0x2042e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042E8u;
        // 0x2042ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042e8) {
            ctx->pc = 0x2046ACu;
            goto label_2046ac;
        }
    }
    ctx->pc = 0x2042F0u;
label_2042f0:
    // 0x2042f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2042f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2042f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2042f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2042f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2042F8u;
    SET_GPR_U32(ctx, 31, 0x204300u);
    ctx->pc = 0x2042FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042F8u;
    // 0x2042fc: 0x24a509f8  addiu       $a1, $a1, 0x9F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2042F8u, 0x204300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204300u;
label_204300:
    // 0x204300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204304: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x204304u;
    {
        const bool branch_taken_0x204304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204304u;
        // 0x204308: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204304) {
            ctx->pc = 0x204400u;
            goto label_204400;
        }
    }
    ctx->pc = 0x20430Cu;
    // 0x20430c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204310: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x204310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x204314: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x204314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x204318: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x204318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20431c: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x20431cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x204320: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x204320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x204324: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x204324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204328: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x204328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x20432c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x20432Cu;
    {
        const bool branch_taken_0x20432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20432Cu;
        // 0x204330: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20432c) {
            ctx->pc = 0x2043C4u;
            goto label_2043c4;
        }
    }
    ctx->pc = 0x204334u;
    // 0x204334: 0x0  nop
    ctx->pc = 0x204334u;
    // NOP
label_204338:
    // 0x204338: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204338u;
    SET_GPR_U32(ctx, 31, 0x204340u);
    ctx->pc = 0x20433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204338u;
    // 0x20433c: 0x26a50a08  addiu       $a1, $s5, 0xA08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204338u, 0x204340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204340u;
label_204340:
    // 0x204340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204344: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x204344u;
    {
        const bool branch_taken_0x204344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204344u;
        // 0x204348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204344) {
            ctx->pc = 0x204378u;
            goto label_204378;
        }
    }
    ctx->pc = 0x20434Cu;
    // 0x20434c: 0xc09e056  jal         func_278158
    ctx->pc = 0x20434Cu;
    SET_GPR_U32(ctx, 31, 0x204354u);
    ctx->pc = 0x204350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20434Cu;
    // 0x204350: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x20434Cu, 0x204354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204354u;
label_204354:
    // 0x204354: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x204354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x204358: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x204358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20435c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20435cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204360: 0xc080fee  jal         func_203FB8
    ctx->pc = 0x204360u;
    SET_GPR_U32(ctx, 31, 0x204368u);
    ctx->pc = 0x204364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204360u;
    // 0x204364: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FB8u, 0x204360u, 0x204368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204368u;
label_204368:
    // 0x204368: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x204368u;
    {
        const bool branch_taken_0x204368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204368) {
            ctx->pc = 0x20436Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204368u;
            // 0x20436c: 0xafb40130  sw          $s4, 0x130($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2043C4u;
            goto label_2043c4;
        }
    }
    ctx->pc = 0x204370u;
    // 0x204370: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x204370u;
    {
        const bool branch_taken_0x204370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204370u;
        // 0x204374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204370) {
            ctx->pc = 0x2043C8u;
            goto label_2043c8;
        }
    }
    ctx->pc = 0x204378u;
label_204378:
    // 0x204378: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20437c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20437Cu;
    SET_GPR_U32(ctx, 31, 0x204384u);
    ctx->pc = 0x204380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20437Cu;
    // 0x204380: 0x26050a18  addiu       $a1, $s0, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20437Cu, 0x204384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204384u;
label_204384:
    // 0x204384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204388: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204388u;
    {
        const bool branch_taken_0x204388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204388u;
        // 0x20438c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204388) {
            ctx->pc = 0x2043A8u;
            goto label_2043a8;
        }
    }
    ctx->pc = 0x204390u;
    // 0x204390: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204394: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204394u;
    SET_GPR_U32(ctx, 31, 0x20439Cu);
    ctx->pc = 0x204398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204394u;
    // 0x204398: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204394u, 0x20439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20439Cu;
label_20439c:
    // 0x20439c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20439cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2043a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2043A0u;
    {
        const bool branch_taken_0x2043a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043A0u;
        // 0x2043a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043a0) {
            ctx->pc = 0x2043C4u;
            goto label_2043c4;
        }
    }
    ctx->pc = 0x2043A8u;
label_2043a8:
    // 0x2043a8: 0xc09e056  jal         func_278158
    ctx->pc = 0x2043A8u;
    SET_GPR_U32(ctx, 31, 0x2043B0u);
    ctx->pc = 0x2043ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2043A8u;
    // 0x2043ac: 0x27a50134  addiu       $a1, $sp, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2043A8u, 0x2043B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043B0u;
label_2043b0:
    // 0x2043b0: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2043b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2043b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2043b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2043b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2043b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2043bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2043bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2043c0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x2043c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_2043c4:
    // 0x2043c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2043c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2043c8:
    // 0x2043c8: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2043C8u;
    SET_GPR_U32(ctx, 31, 0x2043D0u);
    ctx->pc = 0x2043CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2043C8u;
    // 0x2043cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2043C8u, 0x2043D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043D0u;
label_2043d0:
    // 0x2043d0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2043D0u;
    {
        const bool branch_taken_0x2043d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2043D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043D0u;
        // 0x2043d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043d0) {
            ctx->pc = 0x204338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204338;
        }
    }
    ctx->pc = 0x2043D8u;
    // 0x2043d8: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2043d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2043dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2043dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2043e0: 0x10a200b1  beq         $a1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2043E0u;
    {
        const bool branch_taken_0x2043e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2043E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043E0u;
        // 0x2043e4: 0x3c03004a  lui         $v1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043e0) {
            ctx->pc = 0x2046A8u;
            goto label_2046a8;
        }
    }
    ctx->pc = 0x2043E8u;
    // 0x2043e8: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x2043e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x2043ec: 0x24649b28  addiu       $a0, $v1, -0x64D8
    ctx->pc = 0x2043ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941480));
    // 0x2043f0: 0xc07feec  jal         func_1FFBB0
    ctx->pc = 0x2043F0u;
    SET_GPR_U32(ctx, 31, 0x2043F8u);
    ctx->pc = 0x2043F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2043F0u;
    // 0x2043f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBB0u, 0x2043F0u, 0x2043F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043F8u;
label_2043f8:
    // 0x2043f8: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2043F8u;
    {
        const bool branch_taken_0x2043f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043F8u;
        // 0x2043fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043f8) {
            ctx->pc = 0x2046ACu;
            goto label_2046ac;
        }
    }
    ctx->pc = 0x204400u;
label_204400:
    // 0x204400: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x204400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204404: 0xafa400e4  sw          $a0, 0xE4($sp)
    ctx->pc = 0x204404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
    // 0x204408: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x204408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x20440c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x20440cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x204410: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x204410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x204414: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x204414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x204418: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x204418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20441c: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x20441cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x204420: 0x27b700a0  addiu       $s7, $sp, 0xA0
    ctx->pc = 0x204420u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x204424: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x204424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x204428: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x204428u;
    {
        const bool branch_taken_0x204428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204428u;
        // 0x20442c: 0xafa3014c  sw          $v1, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204428) {
            ctx->pc = 0x2044ECu;
            goto label_2044ec;
        }
    }
    ctx->pc = 0x204430u;
label_204430:
    // 0x204430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204434: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204434u;
    SET_GPR_U32(ctx, 31, 0x20443Cu);
    ctx->pc = 0x204438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204434u;
    // 0x204438: 0x24a50a20  addiu       $a1, $a1, 0xA20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204434u, 0x20443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20443Cu;
label_20443c:
    // 0x20443c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20443cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204440: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x204440u;
    {
        const bool branch_taken_0x204440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204440u;
        // 0x204444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204440) {
            ctx->pc = 0x204488u;
            goto label_204488;
        }
    }
    ctx->pc = 0x204448u;
    // 0x204448: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x204448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x20444c: 0x27a6013c  addiu       $a2, $sp, 0x13C
    ctx->pc = 0x20444cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x204450: 0xc09df62  jal         func_277D88
    ctx->pc = 0x204450u;
    SET_GPR_U32(ctx, 31, 0x204458u);
    ctx->pc = 0x204454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204450u;
    // 0x204454: 0x27a70140  addiu       $a3, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x204450u, 0x204458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204458u;
label_204458:
    // 0x204458: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x204458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20445c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x20445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204460: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x204460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x204464: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x204464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x204468: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x204468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x20446c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20446cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x204470: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x204470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204474: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x204474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x204478: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x204478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20447c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20447cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x204480: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x204480u;
    {
        const bool branch_taken_0x204480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204480u;
        // 0x204484: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204480) {
            ctx->pc = 0x2044ECu;
            goto label_2044ec;
        }
    }
    ctx->pc = 0x204488u;
label_204488:
    // 0x204488: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x204488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20448c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20448cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204490: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204490u;
    SET_GPR_U32(ctx, 31, 0x204498u);
    ctx->pc = 0x204494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204490u;
    // 0x204494: 0x24a50a28  addiu       $a1, $a1, 0xA28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204490u, 0x204498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204498u;
label_204498:
    // 0x204498: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20449c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20449Cu;
    {
        const bool branch_taken_0x20449c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20449Cu;
        // 0x2044a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20449c) {
            ctx->pc = 0x2044BCu;
            goto label_2044bc;
        }
    }
    ctx->pc = 0x2044A4u;
    // 0x2044a4: 0xc09e056  jal         func_278158
    ctx->pc = 0x2044A4u;
    SET_GPR_U32(ctx, 31, 0x2044ACu);
    ctx->pc = 0x2044A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044A4u;
    // 0x2044a8: 0x27a500e4  addiu       $a1, $sp, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2044A4u, 0x2044ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2044ACu;
label_2044ac:
    // 0x2044ac: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2044acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2044b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2044b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2044B4u;
    {
        const bool branch_taken_0x2044b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044B4u;
        // 0x2044b8: 0xafa200e4  sw          $v0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044b4) {
            ctx->pc = 0x2044ECu;
            goto label_2044ec;
        }
    }
    ctx->pc = 0x2044BCu;
label_2044bc:
    // 0x2044bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2044bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2044c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2044c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2044c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2044C4u;
    SET_GPR_U32(ctx, 31, 0x2044CCu);
    ctx->pc = 0x2044C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044C4u;
    // 0x2044c8: 0x24a50a38  addiu       $a1, $a1, 0xA38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2044C4u, 0x2044CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2044CCu;
label_2044cc:
    // 0x2044cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2044ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2044d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2044D0u;
    {
        const bool branch_taken_0x2044d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044D0u;
        // 0x2044d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044d0) {
            ctx->pc = 0x2044ECu;
            goto label_2044ec;
        }
    }
    ctx->pc = 0x2044D8u;
    // 0x2044d8: 0xc09e056  jal         func_278158
    ctx->pc = 0x2044D8u;
    SET_GPR_U32(ctx, 31, 0x2044E0u);
    ctx->pc = 0x2044DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044D8u;
    // 0x2044dc: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2044D8u, 0x2044E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2044E0u;
label_2044e0:
    // 0x2044e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2044e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2044e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2044e8: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2044e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_2044ec:
    // 0x2044ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2044ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2044f0: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2044F0u;
    SET_GPR_U32(ctx, 31, 0x2044F8u);
    ctx->pc = 0x2044F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044F0u;
    // 0x2044f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2044F0u, 0x2044F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2044F8u;
label_2044f8:
    // 0x2044f8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2044F8u;
    {
        const bool branch_taken_0x2044f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2044FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044F8u;
        // 0x2044fc: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044f8) {
            ctx->pc = 0x204430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204430;
        }
    }
    ctx->pc = 0x204500u;
    // 0x204500: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x204500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x204504: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x204504u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x204508: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x204508u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20450c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x20450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204510: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x204510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204514: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x204514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204518: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x204518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20451c: 0xc7a5011c  lwc1        $f5, 0x11C($sp)
    ctx->pc = 0x20451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x204520: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x204520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x204524: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x204524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x204528: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x204528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x20452c: 0xe7a5010c  swc1        $f5, 0x10C($sp)
    ctx->pc = 0x20452cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x204530: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x204530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x204534: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x204534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x204538: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x204538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20453c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x20453cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x204540: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x204540u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x204544: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x204544u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x204548: 0x46000004  c1          0x4
    ctx->pc = 0x204548u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20454c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204550: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x204550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204554: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x204554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x204558: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x204558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20455c: 0x5e1818  mult        $v1, $v0, $fp
    ctx->pc = 0x20455cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x204560: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x204560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x204564: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x204564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x204568: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x204568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20456c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x20456cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_204570:
    // 0x204570: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x204570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204574: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x204574u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204578: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x204578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x20457c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x204580: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x204580u;
    {
        const bool branch_taken_0x204580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x204584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204580u;
        // 0x204584: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204580) {
            ctx->pc = 0x204570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204570;
        }
    }
    ctx->pc = 0x204588u;
    // 0x204588: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x204588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x20458c: 0x24c40040  addiu       $a0, $a2, 0x40
    ctx->pc = 0x20458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x204590: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x204590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x204594: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x204594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x204598: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x204598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x20459c: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x20459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2045a0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2045a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2045a4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2045a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2045a8: 0xf8c10060  sqc2        $vf1, 0x60($a2)
    ctx->pc = 0x2045a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2045ac: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x2045acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2045b0: 0x24c50070  addiu       $a1, $a2, 0x70
    ctx->pc = 0x2045b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x2045b4: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x2045b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2045b8: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x2045b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x2045bc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2045bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2045c0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2045c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2045c4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2045c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2045c8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2045c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2045cc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2045ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2045d0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2045d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2045d4: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x2045d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2045d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2045d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2045dc: 0xf8c10090  sqc2        $vf1, 0x90($a2)
    ctx->pc = 0x2045dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2045e0: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x2045e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2045e4: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x2045e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2045e8: 0xa0a20010  sb          $v0, 0x10($a1)
    ctx->pc = 0x2045e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2045ec: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2045ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2045f0: 0xe4c000a0  swc1        $f0, 0xA0($a2)
    ctx->pc = 0x2045f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 160), bits); }
    // 0x2045f4: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2045f8: 0xacc200a4  sw          $v0, 0xA4($a2)
    ctx->pc = 0x2045f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 2));
    // 0x2045fc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2045fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x204600: 0xacc300a8  sw          $v1, 0xA8($a2)
    ctx->pc = 0x204600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 3));
    // 0x204604: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x204604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204608: 0x5e2018  mult        $a0, $v0, $fp
    ctx->pc = 0x204608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20460c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x20460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x204610: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x204610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204614: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x204614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204618: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x204618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20461c: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x20461cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x204620: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x204620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x204624: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x204624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x204628: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x204628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x20462c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20462cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x204630: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x204630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x204634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204638: 0xc07a846  jal         func_1EA118
    ctx->pc = 0x204638u;
    SET_GPR_U32(ctx, 31, 0x204640u);
    ctx->pc = 0x20463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204638u;
    // 0x20463c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA118u, 0x204638u, 0x204640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204640u;
label_204640:
    // 0x204640: 0xc0f7508  jal         func_3DD420
    ctx->pc = 0x204640u;
    SET_GPR_U32(ctx, 31, 0x204648u);
    ctx->pc = 0x204644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204640u;
    // 0x204644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD420u, 0x204640u, 0x204648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204648u;
label_204648:
    // 0x204648: 0xc07a880  jal         func_1EA200
    ctx->pc = 0x204648u;
    SET_GPR_U32(ctx, 31, 0x204650u);
    ctx->pc = 0x20464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204648u;
    // 0x20464c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA200u, 0x204648u, 0x204650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204650u;
label_204650:
    // 0x204650: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x204650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204654: 0x5e2018  mult        $a0, $v0, $fp
    ctx->pc = 0x204654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x204658: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x204658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x20465c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x20465cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204660: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x204660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204664: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x204664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204668: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x204668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x20466c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x204670: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x204670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x204674: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x204674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x204678: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x204678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x20467c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20467cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x204680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204684: 0xc07a846  jal         func_1EA118
    ctx->pc = 0x204684u;
    SET_GPR_U32(ctx, 31, 0x20468Cu);
    ctx->pc = 0x204688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204684u;
    // 0x204688: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA118u, 0x204684u, 0x20468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20468Cu;
label_20468c:
    // 0x20468c: 0xc0f7508  jal         func_3DD420
    ctx->pc = 0x20468Cu;
    SET_GPR_U32(ctx, 31, 0x204694u);
    ctx->pc = 0x204690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20468Cu;
    // 0x204690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD420u, 0x20468Cu, 0x204694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204694u;
label_204694:
    // 0x204694: 0xc07a880  jal         func_1EA200
    ctx->pc = 0x204694u;
    SET_GPR_U32(ctx, 31, 0x20469Cu);
    ctx->pc = 0x204698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204694u;
    // 0x204698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA200u, 0x204694u, 0x20469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20469Cu;
label_20469c:
    // 0x20469c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2046a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2046a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2046a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2046a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2046a8:
    // 0x2046a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2046a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2046ac:
    // 0x2046ac: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x2046ACu;
    SET_GPR_U32(ctx, 31, 0x2046B4u);
    ctx->pc = 0x2046B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046ACu;
    // 0x2046b0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x2046ACu, 0x2046B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046B4u;
label_2046b4:
    // 0x2046b4: 0x5440fe8e  bnel        $v0, $zero, . + 4 + (-0x172 << 2)
    ctx->pc = 0x2046B4u;
    {
        const bool branch_taken_0x2046b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046b4) {
            ctx->pc = 0x2046B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2046B4u;
            // 0x2046b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2040F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2040f0;
        }
    }
    ctx->pc = 0x2046BCu;
    // 0x2046bc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2046bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2046c0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x2046c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2046c4: 0xc080624  jal         func_201890
    ctx->pc = 0x2046C4u;
    SET_GPR_U32(ctx, 31, 0x2046CCu);
    ctx->pc = 0x2046C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046C4u;
    // 0x2046c8: 0x24449b28  addiu       $a0, $v0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201890u, 0x2046C4u, 0x2046CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046CCu;
label_2046cc:
    // 0x2046cc: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x2046CCu;
    SET_GPR_U32(ctx, 31, 0x2046D4u);
    ctx->pc = 0x2046D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046CCu;
    // 0x2046d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x2046CCu, 0x2046D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046D4u;
label_2046d4:
    // 0x2046d4: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x2046d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2046d8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2046d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2046dc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2046DCu;
    {
        const bool branch_taken_0x2046dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2046E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046DCu;
        // 0x2046e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046dc) {
            ctx->pc = 0x20470Cu;
            goto label_20470c;
        }
    }
    ctx->pc = 0x2046E4u;
    // 0x2046e4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2046e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2046e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2046e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2046ec: 0x0  nop
    ctx->pc = 0x2046ecu;
    // NOP
label_2046f0:
    // 0x2046f0: 0x0  nop
    ctx->pc = 0x2046f0u;
    // NOP
    // 0x2046f4: 0x0  nop
    ctx->pc = 0x2046f4u;
    // NOP
    // 0x2046f8: 0x0  nop
    ctx->pc = 0x2046f8u;
    // NOP
    // 0x2046fc: 0x0  nop
    ctx->pc = 0x2046fcu;
    // NOP
    // 0x204700: 0x1482fffb  bne         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x204700u;
    {
        const bool branch_taken_0x204700 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x204704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204700u;
        // 0x204704: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204700) {
            ctx->pc = 0x2046F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2046f0;
        }
    }
    ctx->pc = 0x204708u;
    // 0x204708: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20470c:
    // 0x20470c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x20470Cu;
    SET_GPR_U32(ctx, 31, 0x204714u);
    ctx->pc = 0x204710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20470Cu;
    // 0x204710: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20470Cu, 0x204714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204714u;
label_204714:
    // 0x204714: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x204714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x204718: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x204718u;
    SET_GPR_U32(ctx, 31, 0x204720u);
    ctx->pc = 0x20471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204718u;
    // 0x20471c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x204718u, 0x204720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204720u;
label_204720:
    // 0x204720: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x204720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x204724: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x204724u;
    SET_GPR_U32(ctx, 31, 0x20472Cu);
    ctx->pc = 0x204728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204724u;
    // 0x204728: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x204724u, 0x20472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20472Cu;
label_20472c:
    // 0x20472c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204730: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x204730u;
    SET_GPR_U32(ctx, 31, 0x204738u);
    ctx->pc = 0x204734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204730u;
    // 0x204734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x204730u, 0x204738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204738u;
label_204738:
    // 0x204738: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x204738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_20473c:
    // 0x20473c: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x20473cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x204740: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x204740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x204744: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x204744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x204748: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x204748u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x20474c: 0xdfb50188  ld          $s5, 0x188($sp)
    ctx->pc = 0x20474cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x204750: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x204750u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x204754: 0xdfb70198  ld          $s7, 0x198($sp)
    ctx->pc = 0x204754u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x204758: 0xdfbe01a0  ld          $fp, 0x1A0($sp)
    ctx->pc = 0x204758u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x20475c: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x20475cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x204760: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x204760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x204764: 0x3e00008  jr          $ra
    ctx->pc = 0x204764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204764u;
        // 0x204768: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20476Cu;
    // 0x20476c: 0x0  nop
    ctx->pc = 0x20476cu;
    // NOP
    ctx->pc = 0x204770u;
}
