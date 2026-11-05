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

// Function: sub_00353278
// Address: 0x353278 - 0x353768
void sub_00353278_0x353278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353278_0x353278");
#endif

    switch (ctx->pc) {
        case 0x35330cu: goto label_35330c;
        case 0x353318u: goto label_353318;
        case 0x353320u: goto label_353320;
        case 0x353340u: goto label_353340;
        case 0x353354u: goto label_353354;
        case 0x353360u: goto label_353360;
        case 0x35336cu: goto label_35336c;
        case 0x353378u: goto label_353378;
        case 0x353388u: goto label_353388;
        case 0x35339cu: goto label_35339c;
        case 0x3533b4u: goto label_3533b4;
        case 0x3533ccu: goto label_3533cc;
        case 0x3533e4u: goto label_3533e4;
        case 0x3533fcu: goto label_3533fc;
        case 0x353414u: goto label_353414;
        case 0x35342cu: goto label_35342c;
        case 0x353468u: goto label_353468;
        case 0x353474u: goto label_353474;
        case 0x353490u: goto label_353490;
        case 0x3534a0u: goto label_3534a0;
        case 0x3534bcu: goto label_3534bc;
        case 0x3534ccu: goto label_3534cc;
        case 0x353500u: goto label_353500;
        case 0x353510u: goto label_353510;
        case 0x353534u: goto label_353534;
        case 0x353544u: goto label_353544;
        case 0x35355cu: goto label_35355c;
        case 0x35356cu: goto label_35356c;
        case 0x353588u: goto label_353588;
        case 0x353598u: goto label_353598;
        case 0x3535b0u: goto label_3535b0;
        case 0x3535c0u: goto label_3535c0;
        case 0x3535dcu: goto label_3535dc;
        case 0x3535ecu: goto label_3535ec;
        case 0x353604u: goto label_353604;
        case 0x353614u: goto label_353614;
        case 0x353630u: goto label_353630;
        case 0x353640u: goto label_353640;
        case 0x353658u: goto label_353658;
        case 0x353668u: goto label_353668;
        case 0x353684u: goto label_353684;
        case 0x353694u: goto label_353694;
        case 0x3536acu: goto label_3536ac;
        case 0x3536bcu: goto label_3536bc;
        case 0x3536d4u: goto label_3536d4;
        case 0x3536e0u: goto label_3536e0;
        case 0x3536f4u: goto label_3536f4;
        case 0x353704u: goto label_353704;
        case 0x353710u: goto label_353710;
        case 0x35371cu: goto label_35371c;
        case 0x353728u: goto label_353728;
        case 0x353730u: goto label_353730;
        default: break;
    }

    ctx->pc = 0x353278u;

    // 0x353278: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x353278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35327c: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x35327cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x353280: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x353280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x353284: 0x3c0a0048  lui         $t2, 0x48
    ctx->pc = 0x353284u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
    // 0x353288: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x353288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x35328c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x35328cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x353290: 0x3c0b0048  lui         $t3, 0x48
    ctx->pc = 0x353290u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)72 << 16));
    // 0x353294: 0x3c0c0048  lui         $t4, 0x48
    ctx->pc = 0x353294u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)72 << 16));
    // 0x353298: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x353298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x35329c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3532a0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3532a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3532a4: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x3532a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x3532a8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3532a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3532ac: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x3532acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x3532b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3532b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3532b4: 0x9245c8d8  lbu         $a1, -0x3728($s2)
    ctx->pc = 0x3532b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x3FC8D8u));
    // 0x3532b8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3532b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3532bc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3532bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x3532c0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3532c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3532c4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x3532c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x3532c8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3532c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3532cc: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x3532ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x3532d0: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x3532d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x3532d4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x3532d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x3532d8: 0xa4622d08  sh          $v0, 0x2D08($v1)
    ctx->pc = 0x3532d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482D08u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x482D08u, _value); } while (0);
    // 0x3532dc: 0xa5202c56  sh          $zero, 0x2C56($t1)
    ctx->pc = 0x3532dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C56u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x482C56u, _value); } while (0);
    // 0x3532e0: 0xa5402c54  sh          $zero, 0x2C54($t2)
    ctx->pc = 0x3532e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x482C54u, _value); } while (0);
    // 0x3532e4: 0xad602d00  sw          $zero, 0x2D00($t3)
    ctx->pc = 0x3532e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482D00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D00u, _value); } while (0);
    // 0x3532e8: 0xad802d04  sw          $zero, 0x2D04($t4)
    ctx->pc = 0x3532e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482D04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D04u, _value); } while (0);
    // 0x3532ec: 0xacc02d0c  sw          $zero, 0x2D0C($a2)
    ctx->pc = 0x3532ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482D0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D0Cu, _value); } while (0);
    // 0x3532f0: 0xa0802d11  sb          $zero, 0x2D11($a0)
    ctx->pc = 0x3532f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482D11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482D11u, _value); } while (0);
    // 0x3532f4: 0xa1002d10  sb          $zero, 0x2D10($t0)
    ctx->pc = 0x3532f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482D10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482D10u, _value); } while (0);
    // 0x3532f8: 0x14a0010b  bnez        $a1, . + 4 + (0x10B << 2)
    ctx->pc = 0x3532F8u;
    {
        const bool branch_taken_0x3532f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3532FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532F8u;
        // 0x3532fc: 0xa0f0c510  sb          $s0, -0x3AF0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4294952208), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532f8) {
            ctx->pc = 0x353728u;
            goto label_353728;
        }
    }
    ctx->pc = 0x353300u;
    // 0x353300: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x353300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353304: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x353304u;
    SET_GPR_U32(ctx, 31, 0x35330Cu);
    ctx->pc = 0x353308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353304u;
    // 0x353308: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x353304u, 0x35330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35330Cu;
label_35330c:
    // 0x35330c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x35330cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x353310: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x353310u;
    SET_GPR_U32(ctx, 31, 0x353318u);
    ctx->pc = 0x353314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353310u;
    // 0x353314: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x353310u, 0x353318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353318u;
label_353318:
    // 0x353318: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x353318u;
    SET_GPR_U32(ctx, 31, 0x353320u);
    ctx->pc = 0x35331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353318u;
    // 0x35331c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x353318u, 0x353320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353320u;
label_353320:
    // 0x353320: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x353320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x353324: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x353324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x353328: 0x2471fe40  addiu       $s1, $v1, -0x1C0
    ctx->pc = 0x353328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x35332c: 0xa250c8d8  sb          $s0, -0x3728($s2)
    ctx->pc = 0x35332cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294953176), (uint8_t)GPR_U32(ctx, 16));
    // 0x353330: 0x24a5ef78  addiu       $a1, $a1, -0x1088
    ctx->pc = 0x353330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963064));
    // 0x353334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353338: 0xc09dd98  jal         func_277660
    ctx->pc = 0x353338u;
    SET_GPR_U32(ctx, 31, 0x353340u);
    ctx->pc = 0x35333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353338u;
    // 0x35333c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x353338u, 0x353340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353340u;
label_353340:
    // 0x353340: 0x144000ea  bnez        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x353340u;
    {
        const bool branch_taken_0x353340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353340u;
        // 0x353344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353340) {
            ctx->pc = 0x3536ECu;
            goto label_3536ec;
        }
    }
    ctx->pc = 0x353348u;
    // 0x353348: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x353348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35334c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35334Cu;
    SET_GPR_U32(ctx, 31, 0x353354u);
    ctx->pc = 0x353350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35334Cu;
    // 0x353350: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35334Cu, 0x353354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353354u;
label_353354:
    // 0x353354: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x353354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x353358: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x353358u;
    SET_GPR_U32(ctx, 31, 0x353360u);
    ctx->pc = 0x35335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353358u;
    // 0x35335c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x353358u, 0x353360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353360u;
label_353360:
    // 0x353360: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x353360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353364: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x353364u;
    SET_GPR_U32(ctx, 31, 0x35336Cu);
    ctx->pc = 0x353368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353364u;
    // 0x353368: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x353364u, 0x35336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35336Cu;
label_35336c:
    // 0x35336c: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x35336Cu;
    {
        const bool branch_taken_0x35336c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35336Cu;
        // 0x353370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35336c) {
            ctx->pc = 0x353734u;
            goto label_353734;
        }
    }
    ctx->pc = 0x353374u;
    // 0x353374: 0x0  nop
    ctx->pc = 0x353374u;
    // NOP
label_353378:
    // 0x353378: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x35337c: 0x24a56740  addiu       $a1, $a1, 0x6740
    ctx->pc = 0x35337cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26432));
    // 0x353380: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x353380u;
    SET_GPR_U32(ctx, 31, 0x353388u);
    ctx->pc = 0x353384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353380u;
    // 0x353384: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x353380u, 0x353388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353388u;
label_353388:
    // 0x353388: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x353388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35338c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x35338cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x353390: 0x24a56748  addiu       $a1, $a1, 0x6748
    ctx->pc = 0x353390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26440));
    // 0x353394: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x353394u;
    SET_GPR_U32(ctx, 31, 0x35339Cu);
    ctx->pc = 0x353398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353394u;
    // 0x353398: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x353394u, 0x35339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35339Cu;
label_35339c:
    // 0x35339c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x35339cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3533a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3533a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3533a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3533a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3533a8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3533a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3533ac: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3533ACu;
    SET_GPR_U32(ctx, 31, 0x3533B4u);
    ctx->pc = 0x3533B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3533ACu;
    // 0x3533b0: 0x24a56750  addiu       $a1, $a1, 0x6750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3533ACu, 0x3533B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3533B4u;
label_3533b4:
    // 0x3533b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3533b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3533b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3533b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3533bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3533bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3533c0: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3533c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3533c4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3533C4u;
    SET_GPR_U32(ctx, 31, 0x3533CCu);
    ctx->pc = 0x3533C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3533C4u;
    // 0x3533c8: 0x24a56758  addiu       $a1, $a1, 0x6758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3533C4u, 0x3533CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3533CCu;
label_3533cc:
    // 0x3533cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3533ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3533d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3533d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3533d4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3533d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3533d8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3533d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3533dc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3533DCu;
    SET_GPR_U32(ctx, 31, 0x3533E4u);
    ctx->pc = 0x3533E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3533DCu;
    // 0x3533e0: 0x24a56768  addiu       $a1, $a1, 0x6768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3533DCu, 0x3533E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3533E4u;
label_3533e4:
    // 0x3533e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3533e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3533e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3533e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3533ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3533ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3533f0: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3533f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3533f4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3533F4u;
    SET_GPR_U32(ctx, 31, 0x3533FCu);
    ctx->pc = 0x3533F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3533F4u;
    // 0x3533f8: 0x24a56770  addiu       $a1, $a1, 0x6770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3533F4u, 0x3533FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3533FCu;
label_3533fc:
    // 0x3533fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3533fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353400: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x353400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x353404: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x353408: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x353408u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x35340c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x35340Cu;
    SET_GPR_U32(ctx, 31, 0x353414u);
    ctx->pc = 0x353410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35340Cu;
    // 0x353410: 0x24a56778  addiu       $a1, $a1, 0x6778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x35340Cu, 0x353414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353414u;
label_353414:
    // 0x353414: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x353414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x353418: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x353418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35341c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x35341cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x353420: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x353420u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x353424: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x353424u;
    SET_GPR_U32(ctx, 31, 0x35342Cu);
    ctx->pc = 0x353428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353424u;
    // 0x353428: 0x24a56788  addiu       $a1, $a1, 0x6788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x353424u, 0x35342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35342Cu;
label_35342c:
    // 0x35342c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x35342cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x353430: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x353430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x353434: 0x2472cbd4  addiu       $s2, $v1, -0x342C
    ctx->pc = 0x353434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953940));
    // 0x353438: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x353438u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x35343c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x353440: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x353440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x353444: 0x26560004  addiu       $s6, $s2, 0x4
    ctx->pc = 0x353444u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x353448: 0x26550008  addiu       $s5, $s2, 0x8
    ctx->pc = 0x353448u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x35344c: 0x2654000c  addiu       $s4, $s2, 0xC
    ctx->pc = 0x35344cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x353450: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x353450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x353454: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x353454u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x353458: 0x245eedd8  addiu       $fp, $v0, -0x1228
    ctx->pc = 0x353458u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962648));
    // 0x35345c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x35345Cu;
    {
        const bool branch_taken_0x35345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35345Cu;
        // 0x353460: 0x2477edf8  addiu       $s7, $v1, -0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35345c) {
            ctx->pc = 0x3536D4u;
            goto label_3536d4;
        }
    }
    ctx->pc = 0x353464u;
    // 0x353464: 0x0  nop
    ctx->pc = 0x353464u;
    // NOP
label_353468:
    // 0x353468: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x353468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35346c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x35346Cu;
    SET_GPR_U32(ctx, 31, 0x353474u);
    ctx->pc = 0x353470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35346Cu;
    // 0x353470: 0x24a56798  addiu       $a1, $a1, 0x6798 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x35346Cu, 0x353474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353474u;
label_353474:
    // 0x353474: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x353474u;
    {
        const bool branch_taken_0x353474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353474) {
            ctx->pc = 0x353478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353474u;
            // 0x353478: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353494u;
            goto label_353494;
        }
    }
    ctx->pc = 0x35347Cu;
    // 0x35347c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x353480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353484: 0x2442ee18  addiu       $v0, $v0, -0x11E8
    ctx->pc = 0x353484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962712));
    // 0x353488: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x353488u;
    SET_GPR_U32(ctx, 31, 0x353490u);
    ctx->pc = 0x35348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353488u;
    // 0x35348c: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x353488u, 0x353490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353490u;
label_353490:
    // 0x353490: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_353494:
    // 0x353494: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x353494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353498: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x353498u;
    SET_GPR_U32(ctx, 31, 0x3534A0u);
    ctx->pc = 0x35349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353498u;
    // 0x35349c: 0x24a567a0  addiu       $a1, $a1, 0x67A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x353498u, 0x3534A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3534A0u;
label_3534a0:
    // 0x3534a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3534A0u;
    {
        const bool branch_taken_0x3534a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3534a0) {
            ctx->pc = 0x3534A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3534A0u;
            // 0x3534a4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3534C0u;
            goto label_3534c0;
        }
    }
    ctx->pc = 0x3534A8u;
    // 0x3534a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3534a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3534ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3534acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3534b0: 0x2442ee38  addiu       $v0, $v0, -0x11C8
    ctx->pc = 0x3534b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962744));
    // 0x3534b4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x3534B4u;
    SET_GPR_U32(ctx, 31, 0x3534BCu);
    ctx->pc = 0x3534B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3534B4u;
    // 0x3534b8: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x3534B4u, 0x3534BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3534BCu;
label_3534bc:
    // 0x3534bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3534bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3534c0:
    // 0x3534c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3534c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3534c4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3534C4u;
    SET_GPR_U32(ctx, 31, 0x3534CCu);
    ctx->pc = 0x3534C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3534C4u;
    // 0x3534c8: 0x24a567b0  addiu       $a1, $a1, 0x67B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3534C4u, 0x3534CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3534CCu;
label_3534cc:
    // 0x3534cc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3534CCu;
    {
        const bool branch_taken_0x3534cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3534cc) {
            ctx->pc = 0x3534D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3534CCu;
            // 0x3534d0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353504u;
            goto label_353504;
        }
    }
    ctx->pc = 0x3534D4u;
    // 0x3534d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3534d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3534d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3534d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3534dc: 0x2442ee58  addiu       $v0, $v0, -0x11A8
    ctx->pc = 0x3534dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962776));
    // 0x3534e0: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x3534e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3534e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3534e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3534e8: 0x2442ee78  addiu       $v0, $v0, -0x1188
    ctx->pc = 0x3534e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962808));
    // 0x3534ec: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x3534ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3534f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3534f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3534f4: 0x2442ee98  addiu       $v0, $v0, -0x1168
    ctx->pc = 0x3534f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962840));
    // 0x3534f8: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x3534F8u;
    SET_GPR_U32(ctx, 31, 0x353500u);
    ctx->pc = 0x3534FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3534F8u;
    // 0x3534fc: 0x2023821  addu        $a3, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x3534F8u, 0x353500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353500u;
label_353500:
    // 0x353500: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_353504:
    // 0x353504: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x353504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353508: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x353508u;
    SET_GPR_U32(ctx, 31, 0x353510u);
    ctx->pc = 0x35350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353508u;
    // 0x35350c: 0x24a567b8  addiu       $a1, $a1, 0x67B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x353508u, 0x353510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353510u;
label_353510:
    // 0x353510: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x353510u;
    {
        const bool branch_taken_0x353510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353510) {
            ctx->pc = 0x353514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353510u;
            // 0x353514: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353538u;
            goto label_353538;
        }
    }
    ctx->pc = 0x353518u;
    // 0x353518: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x353518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x35351c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353520: 0x2442eeb8  addiu       $v0, $v0, -0x1148
    ctx->pc = 0x353520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962872));
    // 0x353524: 0x21e3021  addu        $a2, $s0, $fp
    ctx->pc = 0x353524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x353528: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x353528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x35352c: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x35352Cu;
    SET_GPR_U32(ctx, 31, 0x353534u);
    ctx->pc = 0x353530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35352Cu;
    // 0x353530: 0x2173821  addu        $a3, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x35352Cu, 0x353534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353534u;
label_353534:
    // 0x353534: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_353538:
    // 0x353538: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x353538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35353c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x35353Cu;
    SET_GPR_U32(ctx, 31, 0x353544u);
    ctx->pc = 0x353540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35353Cu;
    // 0x353540: 0x24a567c0  addiu       $a1, $a1, 0x67C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x35353Cu, 0x353544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353544u;
label_353544:
    // 0x353544: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x353544u;
    {
        const bool branch_taken_0x353544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353544) {
            ctx->pc = 0x353548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353544u;
            // 0x353548: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353560u;
            goto label_353560;
        }
    }
    ctx->pc = 0x35354Cu;
    // 0x35354c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x35354cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x353550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353554: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x353554u;
    SET_GPR_U32(ctx, 31, 0x35355Cu);
    ctx->pc = 0x353558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353554u;
    // 0x353558: 0x24a5cbc0  addiu       $a1, $a1, -0x3440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x353554u, 0x35355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35355Cu;
label_35355c:
    // 0x35355c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x35355cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_353560:
    // 0x353560: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x353560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353564: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x353564u;
    SET_GPR_U32(ctx, 31, 0x35356Cu);
    ctx->pc = 0x353568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353564u;
    // 0x353568: 0x24a567d8  addiu       $a1, $a1, 0x67D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x353564u, 0x35356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35356Cu;
label_35356c:
    // 0x35356c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35356Cu;
    {
        const bool branch_taken_0x35356c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35356c) {
            ctx->pc = 0x353570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35356Cu;
            // 0x353570: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35358Cu;
            goto label_35358c;
        }
    }
    ctx->pc = 0x353574u;
    // 0x353574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353578: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x353578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35357c: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x35357cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x353580: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x353580u;
    SET_GPR_U32(ctx, 31, 0x353588u);
    ctx->pc = 0x353584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353580u;
    // 0x353584: 0x26470028  addiu       $a3, $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x353580u, 0x353588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353588u;
label_353588:
    // 0x353588: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_35358c:
    // 0x35358c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x35358cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353590: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x353590u;
    SET_GPR_U32(ctx, 31, 0x353598u);
    ctx->pc = 0x353594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353590u;
    // 0x353594: 0x24a567f0  addiu       $a1, $a1, 0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x353590u, 0x353598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353598u;
label_353598:
    // 0x353598: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x353598u;
    {
        const bool branch_taken_0x353598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353598) {
            ctx->pc = 0x35359Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353598u;
            // 0x35359c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3535B4u;
            goto label_3535b4;
        }
    }
    ctx->pc = 0x3535A0u;
    // 0x3535a0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3535a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3535a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3535a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3535a8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x3535A8u;
    SET_GPR_U32(ctx, 31, 0x3535B0u);
    ctx->pc = 0x3535ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535A8u;
    // 0x3535ac: 0x24a5cbc4  addiu       $a1, $a1, -0x343C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953924));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x3535A8u, 0x3535B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535B0u;
label_3535b0:
    // 0x3535b0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3535b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3535b4:
    // 0x3535b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3535b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3535b8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3535B8u;
    SET_GPR_U32(ctx, 31, 0x3535C0u);
    ctx->pc = 0x3535BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535B8u;
    // 0x3535bc: 0x24a56808  addiu       $a1, $a1, 0x6808 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3535B8u, 0x3535C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535C0u;
label_3535c0:
    // 0x3535c0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3535C0u;
    {
        const bool branch_taken_0x3535c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3535c0) {
            ctx->pc = 0x3535C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3535C0u;
            // 0x3535c4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3535E0u;
            goto label_3535e0;
        }
    }
    ctx->pc = 0x3535C8u;
    // 0x3535c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3535c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3535cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3535ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3535d0: 0x26c60014  addiu       $a2, $s6, 0x14
    ctx->pc = 0x3535d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x3535d4: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x3535D4u;
    SET_GPR_U32(ctx, 31, 0x3535DCu);
    ctx->pc = 0x3535D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535D4u;
    // 0x3535d8: 0x26c70028  addiu       $a3, $s6, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x3535D4u, 0x3535DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535DCu;
label_3535dc:
    // 0x3535dc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3535dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3535e0:
    // 0x3535e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3535e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3535e4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3535E4u;
    SET_GPR_U32(ctx, 31, 0x3535ECu);
    ctx->pc = 0x3535E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535E4u;
    // 0x3535e8: 0x24a56820  addiu       $a1, $a1, 0x6820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3535E4u, 0x3535ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535ECu;
label_3535ec:
    // 0x3535ec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3535ECu;
    {
        const bool branch_taken_0x3535ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3535ec) {
            ctx->pc = 0x3535F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3535ECu;
            // 0x3535f0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353608u;
            goto label_353608;
        }
    }
    ctx->pc = 0x3535F4u;
    // 0x3535f4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3535f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3535f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3535f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3535fc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x3535FCu;
    SET_GPR_U32(ctx, 31, 0x353604u);
    ctx->pc = 0x353600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535FCu;
    // 0x353600: 0x24a5cbc8  addiu       $a1, $a1, -0x3438 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x3535FCu, 0x353604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353604u;
label_353604:
    // 0x353604: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_353608:
    // 0x353608: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x353608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35360c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x35360Cu;
    SET_GPR_U32(ctx, 31, 0x353614u);
    ctx->pc = 0x353610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35360Cu;
    // 0x353610: 0x24a56838  addiu       $a1, $a1, 0x6838 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x35360Cu, 0x353614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353614u;
label_353614:
    // 0x353614: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x353614u;
    {
        const bool branch_taken_0x353614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353614) {
            ctx->pc = 0x353618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353614u;
            // 0x353618: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353634u;
            goto label_353634;
        }
    }
    ctx->pc = 0x35361Cu;
    // 0x35361c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353620: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x353620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353624: 0x26a60014  addiu       $a2, $s5, 0x14
    ctx->pc = 0x353624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x353628: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x353628u;
    SET_GPR_U32(ctx, 31, 0x353630u);
    ctx->pc = 0x35362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353628u;
    // 0x35362c: 0x26a70028  addiu       $a3, $s5, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x353628u, 0x353630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353630u;
label_353630:
    // 0x353630: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_353634:
    // 0x353634: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x353634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353638: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x353638u;
    SET_GPR_U32(ctx, 31, 0x353640u);
    ctx->pc = 0x35363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353638u;
    // 0x35363c: 0x24a56848  addiu       $a1, $a1, 0x6848 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x353638u, 0x353640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353640u;
label_353640:
    // 0x353640: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x353640u;
    {
        const bool branch_taken_0x353640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353640) {
            ctx->pc = 0x353644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353640u;
            // 0x353644: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35365Cu;
            goto label_35365c;
        }
    }
    ctx->pc = 0x353648u;
    // 0x353648: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x353648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x35364c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353650: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x353650u;
    SET_GPR_U32(ctx, 31, 0x353658u);
    ctx->pc = 0x353654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353650u;
    // 0x353654: 0x24a5cbcc  addiu       $a1, $a1, -0x3434 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953932));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x353650u, 0x353658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353658u;
label_353658:
    // 0x353658: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_35365c:
    // 0x35365c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x35365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353660: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x353660u;
    SET_GPR_U32(ctx, 31, 0x353668u);
    ctx->pc = 0x353664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353660u;
    // 0x353664: 0x24a56860  addiu       $a1, $a1, 0x6860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x353660u, 0x353668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353668u;
label_353668:
    // 0x353668: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x353668u;
    {
        const bool branch_taken_0x353668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353668) {
            ctx->pc = 0x35366Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353668u;
            // 0x35366c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353688u;
            goto label_353688;
        }
    }
    ctx->pc = 0x353670u;
    // 0x353670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353674: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x353674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353678: 0x26860014  addiu       $a2, $s4, 0x14
    ctx->pc = 0x353678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x35367c: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x35367Cu;
    SET_GPR_U32(ctx, 31, 0x353684u);
    ctx->pc = 0x353680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35367Cu;
    // 0x353680: 0x26870028  addiu       $a3, $s4, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x35367Cu, 0x353684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353684u;
label_353684:
    // 0x353684: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_353688:
    // 0x353688: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x353688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35368c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x35368Cu;
    SET_GPR_U32(ctx, 31, 0x353694u);
    ctx->pc = 0x353690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35368Cu;
    // 0x353690: 0x24a56870  addiu       $a1, $a1, 0x6870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x35368Cu, 0x353694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353694u;
label_353694:
    // 0x353694: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x353694u;
    {
        const bool branch_taken_0x353694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353694) {
            ctx->pc = 0x353698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353694u;
            // 0x353698: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3536B0u;
            goto label_3536b0;
        }
    }
    ctx->pc = 0x35369Cu;
    // 0x35369c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x35369cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3536a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3536a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3536a4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x3536A4u;
    SET_GPR_U32(ctx, 31, 0x3536ACu);
    ctx->pc = 0x3536A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536A4u;
    // 0x3536a8: 0x24a5cbd0  addiu       $a1, $a1, -0x3430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x3536A4u, 0x3536ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536ACu;
label_3536ac:
    // 0x3536ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3536acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3536b0:
    // 0x3536b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3536b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3536b4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3536B4u;
    SET_GPR_U32(ctx, 31, 0x3536BCu);
    ctx->pc = 0x3536B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536B4u;
    // 0x3536b8: 0x24a56888  addiu       $a1, $a1, 0x6888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3536B4u, 0x3536BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536BCu;
label_3536bc:
    // 0x3536bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3536BCu;
    {
        const bool branch_taken_0x3536bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3536C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536BCu;
        // 0x3536c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536bc) {
            ctx->pc = 0x3536D8u;
            goto label_3536d8;
        }
    }
    ctx->pc = 0x3536C4u;
    // 0x3536c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3536c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3536c8: 0x26660014  addiu       $a2, $s3, 0x14
    ctx->pc = 0x3536c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x3536cc: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x3536CCu;
    SET_GPR_U32(ctx, 31, 0x3536D4u);
    ctx->pc = 0x3536D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536CCu;
    // 0x3536d0: 0x26670028  addiu       $a3, $s3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x3536CCu, 0x3536D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536D4u;
label_3536d4:
    // 0x3536d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3536d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3536d8:
    // 0x3536d8: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x3536D8u;
    SET_GPR_U32(ctx, 31, 0x3536E0u);
    ctx->pc = 0x3536DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536D8u;
    // 0x3536dc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x3536D8u, 0x3536E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536E0u;
label_3536e0:
    // 0x3536e0: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x3536E0u;
    {
        const bool branch_taken_0x3536e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3536E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536E0u;
        // 0x3536e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536e0) {
            ctx->pc = 0x353468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353468;
        }
    }
    ctx->pc = 0x3536E8u;
    // 0x3536e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3536e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3536ec:
    // 0x3536ec: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x3536ECu;
    SET_GPR_U32(ctx, 31, 0x3536F4u);
    ctx->pc = 0x3536F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536ECu;
    // 0x3536f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x3536ECu, 0x3536F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536F4u;
label_3536f4:
    // 0x3536f4: 0x1440ff20  bnez        $v0, . + 4 + (-0xE0 << 2)
    ctx->pc = 0x3536F4u;
    {
        const bool branch_taken_0x3536f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3536F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536F4u;
        // 0x3536f8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536f4) {
            ctx->pc = 0x353378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353378;
        }
    }
    ctx->pc = 0x3536FCu;
    // 0x3536fc: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x3536FCu;
    SET_GPR_U32(ctx, 31, 0x353704u);
    ctx->pc = 0x353700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536FCu;
    // 0x353700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x3536FCu, 0x353704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353704u;
label_353704:
    // 0x353704: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x353704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353708: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x353708u;
    SET_GPR_U32(ctx, 31, 0x353710u);
    ctx->pc = 0x35370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353708u;
    // 0x35370c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x353708u, 0x353710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353710u;
label_353710:
    // 0x353710: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x353710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x353714: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x353714u;
    SET_GPR_U32(ctx, 31, 0x35371Cu);
    ctx->pc = 0x353718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353714u;
    // 0x353718: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x353714u, 0x35371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35371Cu;
label_35371c:
    // 0x35371c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353720: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x353720u;
    SET_GPR_U32(ctx, 31, 0x353728u);
    ctx->pc = 0x353724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353720u;
    // 0x353724: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x353720u, 0x353728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353728u;
label_353728:
    // 0x353728: 0xc0d51c8  jal         func_354720
    ctx->pc = 0x353728u;
    SET_GPR_U32(ctx, 31, 0x353730u);
    ctx->pc = 0x354720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354720u, 0x353728u, 0x353730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353730u;
label_353730:
    // 0x353730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353734:
    // 0x353734: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x353734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353738: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x353738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35373c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x35373cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353740: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x353740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353744: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x353744u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x353748: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x353748u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35374c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x35374cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x353750: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x353750u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x353754: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x353754u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x353758: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x353758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x35375c: 0x3e00008  jr          $ra
    ctx->pc = 0x35375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35375Cu;
        // 0x353760: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353764u;
    // 0x353764: 0x0  nop
    ctx->pc = 0x353764u;
    // NOP
    ctx->pc = 0x353768u;
}
