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

// Function: sub_002564C8
// Address: 0x2564c8 - 0x256668
void sub_002564C8_0x2564c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002564C8_0x2564c8");
#endif

    switch (ctx->pc) {
        case 0x2564c8u: goto label_2564c8;
        case 0x2564ccu: goto label_2564cc;
        case 0x2564d0u: goto label_2564d0;
        case 0x2564d4u: goto label_2564d4;
        case 0x2564d8u: goto label_2564d8;
        case 0x2564dcu: goto label_2564dc;
        case 0x2564e0u: goto label_2564e0;
        case 0x2564e4u: goto label_2564e4;
        case 0x2564e8u: goto label_2564e8;
        case 0x2564ecu: goto label_2564ec;
        case 0x2564f0u: goto label_2564f0;
        case 0x2564f4u: goto label_2564f4;
        case 0x2564f8u: goto label_2564f8;
        case 0x2564fcu: goto label_2564fc;
        case 0x256500u: goto label_256500;
        case 0x256504u: goto label_256504;
        case 0x256508u: goto label_256508;
        case 0x25650cu: goto label_25650c;
        case 0x256510u: goto label_256510;
        case 0x256514u: goto label_256514;
        case 0x256518u: goto label_256518;
        case 0x25651cu: goto label_25651c;
        case 0x256520u: goto label_256520;
        case 0x256524u: goto label_256524;
        case 0x256528u: goto label_256528;
        case 0x25652cu: goto label_25652c;
        case 0x256530u: goto label_256530;
        case 0x256534u: goto label_256534;
        case 0x256538u: goto label_256538;
        case 0x25653cu: goto label_25653c;
        case 0x256540u: goto label_256540;
        case 0x256544u: goto label_256544;
        case 0x256548u: goto label_256548;
        case 0x25654cu: goto label_25654c;
        case 0x256550u: goto label_256550;
        case 0x256554u: goto label_256554;
        case 0x256558u: goto label_256558;
        case 0x25655cu: goto label_25655c;
        case 0x256560u: goto label_256560;
        case 0x256564u: goto label_256564;
        case 0x256568u: goto label_256568;
        case 0x25656cu: goto label_25656c;
        case 0x256570u: goto label_256570;
        case 0x256574u: goto label_256574;
        case 0x256578u: goto label_256578;
        case 0x25657cu: goto label_25657c;
        case 0x256580u: goto label_256580;
        case 0x256584u: goto label_256584;
        case 0x256588u: goto label_256588;
        case 0x25658cu: goto label_25658c;
        case 0x256590u: goto label_256590;
        case 0x256594u: goto label_256594;
        case 0x256598u: goto label_256598;
        case 0x25659cu: goto label_25659c;
        case 0x2565a0u: goto label_2565a0;
        case 0x2565a4u: goto label_2565a4;
        case 0x2565a8u: goto label_2565a8;
        case 0x2565acu: goto label_2565ac;
        case 0x2565b0u: goto label_2565b0;
        case 0x2565b4u: goto label_2565b4;
        case 0x2565b8u: goto label_2565b8;
        case 0x2565bcu: goto label_2565bc;
        case 0x2565c0u: goto label_2565c0;
        case 0x2565c4u: goto label_2565c4;
        case 0x2565c8u: goto label_2565c8;
        case 0x2565ccu: goto label_2565cc;
        case 0x2565d0u: goto label_2565d0;
        case 0x2565d4u: goto label_2565d4;
        case 0x2565d8u: goto label_2565d8;
        case 0x2565dcu: goto label_2565dc;
        case 0x2565e0u: goto label_2565e0;
        case 0x2565e4u: goto label_2565e4;
        case 0x2565e8u: goto label_2565e8;
        case 0x2565ecu: goto label_2565ec;
        case 0x2565f0u: goto label_2565f0;
        case 0x2565f4u: goto label_2565f4;
        case 0x2565f8u: goto label_2565f8;
        case 0x2565fcu: goto label_2565fc;
        case 0x256600u: goto label_256600;
        case 0x256604u: goto label_256604;
        case 0x256608u: goto label_256608;
        case 0x25660cu: goto label_25660c;
        case 0x256610u: goto label_256610;
        case 0x256614u: goto label_256614;
        case 0x256618u: goto label_256618;
        case 0x25661cu: goto label_25661c;
        case 0x256620u: goto label_256620;
        case 0x256624u: goto label_256624;
        case 0x256628u: goto label_256628;
        case 0x25662cu: goto label_25662c;
        case 0x256630u: goto label_256630;
        case 0x256634u: goto label_256634;
        case 0x256638u: goto label_256638;
        case 0x25663cu: goto label_25663c;
        case 0x256640u: goto label_256640;
        case 0x256644u: goto label_256644;
        case 0x256648u: goto label_256648;
        case 0x25664cu: goto label_25664c;
        case 0x256650u: goto label_256650;
        case 0x256654u: goto label_256654;
        case 0x256658u: goto label_256658;
        case 0x25665cu: goto label_25665c;
        case 0x256660u: goto label_256660;
        case 0x256664u: goto label_256664;
        default: break;
    }

    ctx->pc = 0x2564c8u;

label_2564c8:
    // 0x2564c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2564c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2564cc:
    // 0x2564cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2564ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2564d0:
    // 0x2564d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2564d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2564d4:
    // 0x2564d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2564d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2564d8:
    // 0x2564d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2564d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2564dc:
    // 0x2564dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2564dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2564e0:
    // 0x2564e0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2564e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2564e4:
    // 0x2564e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2564e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2564e8:
    // 0x2564e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2564e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2564ec:
    // 0x2564ec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2564ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2564f0:
    // 0x2564f0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2564f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2564f4:
    // 0x2564f4: 0x8c6201c0  lw          $v0, 0x1C0($v1)
    ctx->pc = 0x2564f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_2564f8:
    // 0x2564f8: 0x40f809  jalr        $v0
label_2564fc:
    if (ctx->pc == 0x2564FCu) {
        ctx->pc = 0x2564FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564F8u;
        // 0x2564fc: 0x3c12004c  lui         $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256500u;
        goto label_256500;
    }
    ctx->pc = 0x2564F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256500u);
        ctx->pc = 0x2564FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564F8u;
        // 0x2564fc: 0x3c12004c  lui         $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2564F8u, 0x256500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256500u;
label_256500:
    // 0x256500: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x256500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_256504:
    // 0x256504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x256504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256508:
    // 0x256508: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x256508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_25650c:
    // 0x25650c: 0x40f809  jalr        $v0
label_256510:
    if (ctx->pc == 0x256510u) {
        ctx->pc = 0x256510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25650Cu;
        // 0x256510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256514u;
        goto label_256514;
    }
    ctx->pc = 0x25650Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256514u);
        ctx->pc = 0x256510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25650Cu;
        // 0x256510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25650Cu, 0x256514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256514u;
label_256514:
    // 0x256514: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x256514u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_256518:
    // 0x256518: 0xc095814  jal         func_256050
label_25651c:
    if (ctx->pc == 0x25651Cu) {
        ctx->pc = 0x25651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256518u;
        // 0x25651c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256520u;
        goto label_256520;
    }
    ctx->pc = 0x256518u;
    SET_GPR_U32(ctx, 31, 0x256520u);
    ctx->pc = 0x25651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256518u;
    // 0x25651c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256050u, 0x256518u, 0x256520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256520u;
label_256520:
    // 0x256520: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x256520u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_256524:
    // 0x256524: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x256524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_256528:
    // 0x256528: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x256528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_25652c:
    // 0x25652c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x25652cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_256530:
    // 0x256530: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x256530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
label_256534:
    // 0x256534: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x256534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_256538:
    // 0x256538: 0x73db8  dsll        $a3, $a3, 22
    ctx->pc = 0x256538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 22);
label_25653c:
    // 0x25653c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_256540:
    // 0x256540: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x256540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_256544:
    // 0x256544: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x256544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_256548:
    // 0x256548: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x256548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25654c:
    // 0x25654c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x25654cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_256550:
    // 0x256550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_256554:
    // 0x256554: 0xc08fed2  jal         func_23FB48
label_256558:
    if (ctx->pc == 0x256558u) {
        ctx->pc = 0x256558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256554u;
        // 0x256558: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25655Cu;
        goto label_25655c;
    }
    ctx->pc = 0x256554u;
    SET_GPR_U32(ctx, 31, 0x25655Cu);
    ctx->pc = 0x256558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256554u;
    // 0x256558: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x256554u, 0x25655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25655Cu;
label_25655c:
    // 0x25655c: 0xc0953c0  jal         func_254F00
label_256560:
    if (ctx->pc == 0x256560u) {
        ctx->pc = 0x256560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25655Cu;
        // 0x256560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256564u;
        goto label_256564;
    }
    ctx->pc = 0x25655Cu;
    SET_GPR_U32(ctx, 31, 0x256564u);
    ctx->pc = 0x256560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25655Cu;
    // 0x256560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F00u, 0x25655Cu, 0x256564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256564u;
label_256564:
    // 0x256564: 0xc0953a6  jal         func_254E98
label_256568:
    if (ctx->pc == 0x256568u) {
        ctx->pc = 0x256568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256564u;
        // 0x256568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25656Cu;
        goto label_25656c;
    }
    ctx->pc = 0x256564u;
    SET_GPR_U32(ctx, 31, 0x25656Cu);
    ctx->pc = 0x256568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256564u;
    // 0x256568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E98u, 0x256564u, 0x25656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25656Cu;
label_25656c:
    // 0x25656c: 0x26020534  addiu       $v0, $s0, 0x534
    ctx->pc = 0x25656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1332));
label_256570:
    // 0x256570: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x256570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_256574:
    // 0x256574: 0x0  nop
    ctx->pc = 0x256574u;
    // NOP
label_256578:
    // 0x256578: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x256578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
label_25657c:
    // 0x25657c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_256580:
    // 0x256580: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x256580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_256584:
    // 0x256584: 0x0  nop
    ctx->pc = 0x256584u;
    // NOP
label_256588:
    // 0x256588: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
label_25658c:
    if (ctx->pc == 0x25658Cu) {
        ctx->pc = 0x25658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256588u;
        // 0x25658c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256590u;
        goto label_256590;
    }
    ctx->pc = 0x256588u;
    {
        const bool branch_taken_0x256588 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x25658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256588u;
        // 0x25658c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256588) {
            ctx->pc = 0x256578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256578;
        }
    }
    ctx->pc = 0x256590u;
label_256590:
    // 0x256590: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x256590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_256594:
    // 0x256594: 0xc0abe3e  jal         func_2AF8F8
label_256598:
    if (ctx->pc == 0x256598u) {
        ctx->pc = 0x256598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256594u;
        // 0x256598: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25659Cu;
        goto label_25659c;
    }
    ctx->pc = 0x256594u;
    SET_GPR_U32(ctx, 31, 0x25659Cu);
    ctx->pc = 0x256598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256594u;
    // 0x256598: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF8F8u, 0x256594u, 0x25659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25659Cu;
label_25659c:
    // 0x25659c: 0xae402470  sw          $zero, 0x2470($s2)
    ctx->pc = 0x25659cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 9328), GPR_U32(ctx, 0));
label_2565a0:
    // 0x2565a0: 0x26422470  addiu       $v0, $s2, 0x2470
    ctx->pc = 0x2565a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9328));
label_2565a4:
    // 0x2565a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2565a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2565a8:
    // 0x2565a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2565a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2565ac:
    // 0x2565ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2565acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2565b0:
    // 0x2565b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2565b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2565b4:
    // 0x2565b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2565b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2565b8:
    // 0x2565b8: 0xc069d3e  jal         func_1A74F8
label_2565bc:
    if (ctx->pc == 0x2565BCu) {
        ctx->pc = 0x2565BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565B8u;
        // 0x2565bc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565C0u;
        goto label_2565c0;
    }
    ctx->pc = 0x2565B8u;
    SET_GPR_U32(ctx, 31, 0x2565C0u);
    ctx->pc = 0x2565BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2565B8u;
    // 0x2565bc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A74F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A74F8u, 0x2565B8u, 0x2565C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2565C0u;
label_2565c0:
    // 0x2565c0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2565c4:
    if (ctx->pc == 0x2565C4u) {
        ctx->pc = 0x2565C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565C0u;
        // 0x2565c4: 0x8e060334  lw          $a2, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565C8u;
        goto label_2565c8;
    }
    ctx->pc = 0x2565C0u;
    {
        const bool branch_taken_0x2565c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2565c0) {
            ctx->pc = 0x2565C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2565C0u;
            // 0x2565c4: 0x8e060334  lw          $a2, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2565F0u;
            goto label_2565f0;
        }
    }
    ctx->pc = 0x2565C8u;
label_2565c8:
    // 0x2565c8: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2565c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2565cc:
    // 0x2565cc: 0xc06b85c  jal         func_1AE170
label_2565d0:
    if (ctx->pc == 0x2565D0u) {
        ctx->pc = 0x2565D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565CCu;
        // 0x2565d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565D4u;
        goto label_2565d4;
    }
    ctx->pc = 0x2565CCu;
    SET_GPR_U32(ctx, 31, 0x2565D4u);
    ctx->pc = 0x2565D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2565CCu;
    // 0x2565d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x2565CCu, 0x2565D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2565D4u;
label_2565d4:
    // 0x2565d4: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2565d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2565d8:
    // 0x2565d8: 0xc06c546  jal         func_1B1518
label_2565dc:
    if (ctx->pc == 0x2565DCu) {
        ctx->pc = 0x2565DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565D8u;
        // 0x2565dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565E0u;
        goto label_2565e0;
    }
    ctx->pc = 0x2565D8u;
    SET_GPR_U32(ctx, 31, 0x2565E0u);
    ctx->pc = 0x2565DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2565D8u;
    // 0x2565dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x2565D8u, 0x2565E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2565E0u;
label_2565e0:
    // 0x2565e0: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2565e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2565e4:
    // 0x2565e4: 0xc06bfc8  jal         func_1AFF20
label_2565e8:
    if (ctx->pc == 0x2565E8u) {
        ctx->pc = 0x2565E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565E4u;
        // 0x2565e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565ECu;
        goto label_2565ec;
    }
    ctx->pc = 0x2565E4u;
    SET_GPR_U32(ctx, 31, 0x2565ECu);
    ctx->pc = 0x2565E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2565E4u;
    // 0x2565e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x2565E4u, 0x2565ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2565ECu;
label_2565ec:
    // 0x2565ec: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x2565ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2565f0:
    // 0x2565f0: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2565f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_2565f4:
    // 0x2565f4: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_2565f8:
    if (ctx->pc == 0x2565F8u) {
        ctx->pc = 0x2565F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565F4u;
        // 0x2565f8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565FCu;
        goto label_2565fc;
    }
    ctx->pc = 0x2565F4u;
    {
        const bool branch_taken_0x2565f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2565F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565F4u;
        // 0x2565f8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565f4) {
            ctx->pc = 0x25662Cu;
            goto label_25662c;
        }
    }
    ctx->pc = 0x2565FCu;
label_2565fc:
    // 0x2565fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2565fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256600:
    // 0x256600: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x256600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_256604:
    // 0x256604: 0x0  nop
    ctx->pc = 0x256604u;
    // NOP
label_256608:
    // 0x256608: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25660c:
    // 0x25660c: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
label_256610:
    if (ctx->pc == 0x256610u) {
        ctx->pc = 0x256610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25660Cu;
        // 0x256610: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256614u;
        goto label_256614;
    }
    ctx->pc = 0x25660Cu;
    {
        const bool branch_taken_0x25660c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25660c) {
            ctx->pc = 0x256610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25660Cu;
            // 0x256610: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25662Cu;
            goto label_25662c;
        }
    }
    ctx->pc = 0x256614u;
label_256614:
    // 0x256614: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x256614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_256618:
    // 0x256618: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x256618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_25661c:
    // 0x25661c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_256620:
    if (ctx->pc == 0x256620u) {
        ctx->pc = 0x256620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25661Cu;
        // 0x256620: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256624u;
        goto label_256624;
    }
    ctx->pc = 0x25661Cu;
    {
        const bool branch_taken_0x25661c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25661Cu;
        // 0x256620: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25661c) {
            ctx->pc = 0x256608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256608;
        }
    }
    ctx->pc = 0x256624u;
label_256624:
    // 0x256624: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x256624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_256628:
    // 0x256628: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x256628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_25662c:
    // 0x25662c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25662cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_256630:
    // 0x256630: 0xc073fde  jal         func_1CFF78
label_256634:
    if (ctx->pc == 0x256634u) {
        ctx->pc = 0x256634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256630u;
        // 0x256634: 0x24a563d8  addiu       $a1, $a1, 0x63D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256638u;
        goto label_256638;
    }
    ctx->pc = 0x256630u;
    SET_GPR_U32(ctx, 31, 0x256638u);
    ctx->pc = 0x256634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256630u;
    // 0x256634: 0x24a563d8  addiu       $a1, $a1, 0x63D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x256630u, 0x256638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256638u;
label_256638:
    // 0x256638: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x256638u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_25663c:
    // 0x25663c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x25663cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_256640:
    // 0x256640: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x256640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
label_256644:
    // 0x256644: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x256644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_256648:
    // 0x256648: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x256648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25664c:
    // 0x25664c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25664cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_256650:
    // 0x256650: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x256650u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
label_256654:
    // 0x256654: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x256654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_256658:
    // 0x256658: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x256658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_25665c:
    // 0x25665c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_256660:
    // 0x256660: 0x3e00008  jr          $ra
label_256664:
    if (ctx->pc == 0x256664u) {
        ctx->pc = 0x256664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256660u;
        // 0x256664: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256668u;
        goto label_fallthrough_0x256660;
    }
    ctx->pc = 0x256660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256660u;
        // 0x256664: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x256660:
    ctx->pc = 0x256668u;
}
