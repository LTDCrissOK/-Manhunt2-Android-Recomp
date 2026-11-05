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

// Function: sub_002463E0
// Address: 0x2463e0 - 0x246540
void sub_002463E0_0x2463e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002463E0_0x2463e0");
#endif

    switch (ctx->pc) {
        case 0x2463e0u: goto label_2463e0;
        case 0x2463e4u: goto label_2463e4;
        case 0x2463e8u: goto label_2463e8;
        case 0x2463ecu: goto label_2463ec;
        case 0x2463f0u: goto label_2463f0;
        case 0x2463f4u: goto label_2463f4;
        case 0x2463f8u: goto label_2463f8;
        case 0x2463fcu: goto label_2463fc;
        case 0x246400u: goto label_246400;
        case 0x246404u: goto label_246404;
        case 0x246408u: goto label_246408;
        case 0x24640cu: goto label_24640c;
        case 0x246410u: goto label_246410;
        case 0x246414u: goto label_246414;
        case 0x246418u: goto label_246418;
        case 0x24641cu: goto label_24641c;
        case 0x246420u: goto label_246420;
        case 0x246424u: goto label_246424;
        case 0x246428u: goto label_246428;
        case 0x24642cu: goto label_24642c;
        case 0x246430u: goto label_246430;
        case 0x246434u: goto label_246434;
        case 0x246438u: goto label_246438;
        case 0x24643cu: goto label_24643c;
        case 0x246440u: goto label_246440;
        case 0x246444u: goto label_246444;
        case 0x246448u: goto label_246448;
        case 0x24644cu: goto label_24644c;
        case 0x246450u: goto label_246450;
        case 0x246454u: goto label_246454;
        case 0x246458u: goto label_246458;
        case 0x24645cu: goto label_24645c;
        case 0x246460u: goto label_246460;
        case 0x246464u: goto label_246464;
        case 0x246468u: goto label_246468;
        case 0x24646cu: goto label_24646c;
        case 0x246470u: goto label_246470;
        case 0x246474u: goto label_246474;
        case 0x246478u: goto label_246478;
        case 0x24647cu: goto label_24647c;
        case 0x246480u: goto label_246480;
        case 0x246484u: goto label_246484;
        case 0x246488u: goto label_246488;
        case 0x24648cu: goto label_24648c;
        case 0x246490u: goto label_246490;
        case 0x246494u: goto label_246494;
        case 0x246498u: goto label_246498;
        case 0x24649cu: goto label_24649c;
        case 0x2464a0u: goto label_2464a0;
        case 0x2464a4u: goto label_2464a4;
        case 0x2464a8u: goto label_2464a8;
        case 0x2464acu: goto label_2464ac;
        case 0x2464b0u: goto label_2464b0;
        case 0x2464b4u: goto label_2464b4;
        case 0x2464b8u: goto label_2464b8;
        case 0x2464bcu: goto label_2464bc;
        case 0x2464c0u: goto label_2464c0;
        case 0x2464c4u: goto label_2464c4;
        case 0x2464c8u: goto label_2464c8;
        case 0x2464ccu: goto label_2464cc;
        case 0x2464d0u: goto label_2464d0;
        case 0x2464d4u: goto label_2464d4;
        case 0x2464d8u: goto label_2464d8;
        case 0x2464dcu: goto label_2464dc;
        case 0x2464e0u: goto label_2464e0;
        case 0x2464e4u: goto label_2464e4;
        case 0x2464e8u: goto label_2464e8;
        case 0x2464ecu: goto label_2464ec;
        case 0x2464f0u: goto label_2464f0;
        case 0x2464f4u: goto label_2464f4;
        case 0x2464f8u: goto label_2464f8;
        case 0x2464fcu: goto label_2464fc;
        case 0x246500u: goto label_246500;
        case 0x246504u: goto label_246504;
        case 0x246508u: goto label_246508;
        case 0x24650cu: goto label_24650c;
        case 0x246510u: goto label_246510;
        case 0x246514u: goto label_246514;
        case 0x246518u: goto label_246518;
        case 0x24651cu: goto label_24651c;
        case 0x246520u: goto label_246520;
        case 0x246524u: goto label_246524;
        case 0x246528u: goto label_246528;
        case 0x24652cu: goto label_24652c;
        case 0x246530u: goto label_246530;
        case 0x246534u: goto label_246534;
        case 0x246538u: goto label_246538;
        case 0x24653cu: goto label_24653c;
        default: break;
    }

    ctx->pc = 0x2463e0u;

label_2463e0:
    // 0x2463e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2463e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2463e4:
    // 0x2463e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2463e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2463e8:
    // 0x2463e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2463e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2463ec:
    // 0x2463ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2463ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2463f0:
    // 0x2463f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2463f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2463f4:
    // 0x2463f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2463f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2463f8:
    // 0x2463f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2463f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2463fc:
    // 0x2463fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2463fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_246400:
    // 0x246400: 0xc08fed2  jal         func_23FB48
label_246404:
    if (ctx->pc == 0x246404u) {
        ctx->pc = 0x246404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246400u;
        // 0x246404: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246408u;
        goto label_246408;
    }
    ctx->pc = 0x246400u;
    SET_GPR_U32(ctx, 31, 0x246408u);
    ctx->pc = 0x246404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246400u;
    // 0x246404: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x246400u, 0x246408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246408u;
label_246408:
    // 0x246408: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x246408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_24640c:
    // 0x24640c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x24640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_246410:
    // 0x246410: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x246410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_246414:
    // 0x246414: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x246414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_246418:
    // 0x246418: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x246418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_24641c:
    // 0x24641c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x24641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_246420:
    // 0x246420: 0x907201a5  lbu         $s2, 0x1A5($v1)
    ctx->pc = 0x246420u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 421)));
label_246424:
    // 0x246424: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_246428:
    // 0x246428: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24642c:
    // 0x24642c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x24642cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246430:
    // 0x246430: 0x2622fa66  addiu       $v0, $s1, -0x59A
    ctx->pc = 0x246430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965862));
label_246434:
    // 0x246434: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x246434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_246438:
    // 0x246438: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_24643c:
    if (ctx->pc == 0x24643Cu) {
        ctx->pc = 0x24643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246438u;
        // 0x24643c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246440u;
        goto label_246440;
    }
    ctx->pc = 0x246438u;
    {
        const bool branch_taken_0x246438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246438u;
        // 0x24643c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246438) {
            ctx->pc = 0x2464B0u;
            goto label_2464b0;
        }
    }
    ctx->pc = 0x246440u;
label_246440:
    // 0x246440: 0xc096a4a  jal         func_25A928
label_246444:
    if (ctx->pc == 0x246444u) {
        ctx->pc = 0x246444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246440u;
        // 0x246444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246448u;
        goto label_246448;
    }
    ctx->pc = 0x246440u;
    SET_GPR_U32(ctx, 31, 0x246448u);
    ctx->pc = 0x246444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246440u;
    // 0x246444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A928u, 0x246440u, 0x246448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246448u;
label_246448:
    // 0x246448: 0xc60c0374  lwc1        $f12, 0x374($s0)
    ctx->pc = 0x246448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24644c:
    // 0x24644c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246450:
    // 0x246450: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x246450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_246454:
    // 0x246454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246458:
    // 0x246458: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x246458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_24645c:
    // 0x24645c: 0x40f809  jalr        $v0
label_246460:
    if (ctx->pc == 0x246460u) {
        ctx->pc = 0x246460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24645Cu;
        // 0x246460: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246464u;
        goto label_246464;
    }
    ctx->pc = 0x24645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246464u);
        ctx->pc = 0x246460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24645Cu;
        // 0x246460: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24645Cu, 0x246464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246464u;
label_246464:
    // 0x246464: 0xc08e61a  jal         func_239868
label_246468:
    if (ctx->pc == 0x246468u) {
        ctx->pc = 0x246468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246464u;
        // 0x246468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24646Cu;
        goto label_24646c;
    }
    ctx->pc = 0x246464u;
    SET_GPR_U32(ctx, 31, 0x24646Cu);
    ctx->pc = 0x246468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246464u;
    // 0x246468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239868u, 0x246464u, 0x24646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24646Cu;
label_24646c:
    // 0x24646c: 0xc60104a0  lwc1        $f1, 0x4A0($s0)
    ctx->pc = 0x24646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246470:
    // 0x246470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246474:
    // 0x246474: 0xc60004ac  lwc1        $f0, 0x4AC($s0)
    ctx->pc = 0x246474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246478:
    // 0x246478: 0xe60104a4  swc1        $f1, 0x4A4($s0)
    ctx->pc = 0x246478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1188), bits); }
label_24647c:
    // 0x24647c: 0xc091d94  jal         func_247650
label_246480:
    if (ctx->pc == 0x246480u) {
        ctx->pc = 0x246480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24647Cu;
        // 0x246480: 0xe60004b0  swc1        $f0, 0x4B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x246484u;
        goto label_246484;
    }
    ctx->pc = 0x24647Cu;
    SET_GPR_U32(ctx, 31, 0x246484u);
    ctx->pc = 0x246480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24647Cu;
    // 0x246480: 0xe60004b0  swc1        $f0, 0x4B0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x247650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247650u, 0x24647Cu, 0x246484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246484u;
label_246484:
    // 0x246484: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x246484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_246488:
    // 0x246488: 0xc069b78  jal         func_1A6DE0
label_24648c:
    if (ctx->pc == 0x24648Cu) {
        ctx->pc = 0x24648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246488u;
        // 0x24648c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246490u;
        goto label_246490;
    }
    ctx->pc = 0x246488u;
    SET_GPR_U32(ctx, 31, 0x246490u);
    ctx->pc = 0x24648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246488u;
    // 0x24648c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DE0u, 0x246488u, 0x246490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246490u;
label_246490:
    // 0x246490: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x246490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_246494:
    // 0x246494: 0xc06a05e  jal         func_1A8178
label_246498:
    if (ctx->pc == 0x246498u) {
        ctx->pc = 0x246498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246494u;
        // 0x246498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24649Cu;
        goto label_24649c;
    }
    ctx->pc = 0x246494u;
    SET_GPR_U32(ctx, 31, 0x24649Cu);
    ctx->pc = 0x246498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246494u;
    // 0x246498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x246494u, 0x24649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24649Cu;
label_24649c:
    // 0x24649c: 0xc06a328  jal         func_1A8CA0
label_2464a0:
    if (ctx->pc == 0x2464A0u) {
        ctx->pc = 0x2464A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24649Cu;
        // 0x2464a0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464A4u;
        goto label_2464a4;
    }
    ctx->pc = 0x24649Cu;
    SET_GPR_U32(ctx, 31, 0x2464A4u);
    ctx->pc = 0x2464A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24649Cu;
    // 0x2464a0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x24649Cu, 0x2464A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464A4u;
label_2464a4:
    // 0x2464a4: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2464a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2464a8:
    // 0x2464a8: 0xc0757d2  jal         func_1D5F48
label_2464ac:
    if (ctx->pc == 0x2464ACu) {
        ctx->pc = 0x2464ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464A8u;
        // 0x2464ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464B0u;
        goto label_2464b0;
    }
    ctx->pc = 0x2464A8u;
    SET_GPR_U32(ctx, 31, 0x2464B0u);
    ctx->pc = 0x2464ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464A8u;
    // 0x2464ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x2464A8u, 0x2464B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464B0u;
label_2464b0:
    // 0x2464b0: 0x5640001d  bnel        $s2, $zero, . + 4 + (0x1D << 2)
label_2464b4:
    if (ctx->pc == 0x2464B4u) {
        ctx->pc = 0x2464B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464B0u;
        // 0x2464b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464B8u;
        goto label_2464b8;
    }
    ctx->pc = 0x2464B0u;
    {
        const bool branch_taken_0x2464b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2464b0) {
            ctx->pc = 0x2464B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2464B0u;
            // 0x2464b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246528u;
            goto label_246528;
        }
    }
    ctx->pc = 0x2464B8u;
label_2464b8:
    // 0x2464b8: 0x2622fa69  addiu       $v0, $s1, -0x597
    ctx->pc = 0x2464b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965865));
label_2464bc:
    // 0x2464bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2464bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2464c0:
    // 0x2464c0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_2464c4:
    if (ctx->pc == 0x2464C4u) {
        ctx->pc = 0x2464C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464C0u;
        // 0x2464c4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464C8u;
        goto label_2464c8;
    }
    ctx->pc = 0x2464C0u;
    {
        const bool branch_taken_0x2464c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2464c0) {
            ctx->pc = 0x2464C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2464C0u;
            // 0x2464c4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246528u;
            goto label_246528;
        }
    }
    ctx->pc = 0x2464C8u;
label_2464c8:
    // 0x2464c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2464c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2464cc:
    // 0x2464cc: 0xc08bbf4  jal         func_22EFD0
label_2464d0:
    if (ctx->pc == 0x2464D0u) {
        ctx->pc = 0x2464D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464CCu;
        // 0x2464d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464D4u;
        goto label_2464d4;
    }
    ctx->pc = 0x2464CCu;
    SET_GPR_U32(ctx, 31, 0x2464D4u);
    ctx->pc = 0x2464D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464CCu;
    // 0x2464d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x2464CCu, 0x2464D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464D4u;
label_2464d4:
    // 0x2464d4: 0xc08e61a  jal         func_239868
label_2464d8:
    if (ctx->pc == 0x2464D8u) {
        ctx->pc = 0x2464D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464D4u;
        // 0x2464d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464DCu;
        goto label_2464dc;
    }
    ctx->pc = 0x2464D4u;
    SET_GPR_U32(ctx, 31, 0x2464DCu);
    ctx->pc = 0x2464D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464D4u;
    // 0x2464d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239868u, 0x2464D4u, 0x2464DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464DCu;
label_2464dc:
    // 0x2464dc: 0xc60104a0  lwc1        $f1, 0x4A0($s0)
    ctx->pc = 0x2464dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2464e0:
    // 0x2464e0: 0x2405080d  addiu       $a1, $zero, 0x80D
    ctx->pc = 0x2464e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_2464e4:
    // 0x2464e4: 0xc60004ac  lwc1        $f0, 0x4AC($s0)
    ctx->pc = 0x2464e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2464e8:
    // 0x2464e8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2464e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2464ec:
    // 0x2464ec: 0xe60104a4  swc1        $f1, 0x4A4($s0)
    ctx->pc = 0x2464ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1188), bits); }
label_2464f0:
    // 0x2464f0: 0xc069b56  jal         func_1A6D58
label_2464f4:
    if (ctx->pc == 0x2464F4u) {
        ctx->pc = 0x2464F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464F0u;
        // 0x2464f4: 0xe60004b0  swc1        $f0, 0x4B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464F8u;
        goto label_2464f8;
    }
    ctx->pc = 0x2464F0u;
    SET_GPR_U32(ctx, 31, 0x2464F8u);
    ctx->pc = 0x2464F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464F0u;
    // 0x2464f4: 0xe60004b0  swc1        $f0, 0x4B0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D58u, 0x2464F0u, 0x2464F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464F8u;
label_2464f8:
    // 0x2464f8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2464f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2464fc:
    // 0x2464fc: 0xc06a05e  jal         func_1A8178
label_246500:
    if (ctx->pc == 0x246500u) {
        ctx->pc = 0x246500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464FCu;
        // 0x246500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246504u;
        goto label_246504;
    }
    ctx->pc = 0x2464FCu;
    SET_GPR_U32(ctx, 31, 0x246504u);
    ctx->pc = 0x246500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464FCu;
    // 0x246500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2464FCu, 0x246504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246504u;
label_246504:
    // 0x246504: 0xc06a328  jal         func_1A8CA0
label_246508:
    if (ctx->pc == 0x246508u) {
        ctx->pc = 0x246508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246504u;
        // 0x246508: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24650Cu;
        goto label_24650c;
    }
    ctx->pc = 0x246504u;
    SET_GPR_U32(ctx, 31, 0x24650Cu);
    ctx->pc = 0x246508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246504u;
    // 0x246508: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x246504u, 0x24650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24650Cu;
label_24650c:
    // 0x24650c: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x24650cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_246510:
    // 0x246510: 0xc0757d2  jal         func_1D5F48
label_246514:
    if (ctx->pc == 0x246514u) {
        ctx->pc = 0x246514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246510u;
        // 0x246514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246518u;
        goto label_246518;
    }
    ctx->pc = 0x246510u;
    SET_GPR_U32(ctx, 31, 0x246518u);
    ctx->pc = 0x246514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246510u;
    // 0x246514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x246510u, 0x246518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246518u;
label_246518:
    // 0x246518: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x246518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24651c:
    // 0x24651c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24651cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246520:
    // 0x246520: 0xa06201a5  sb          $v0, 0x1A5($v1)
    ctx->pc = 0x246520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 421), (uint8_t)GPR_U32(ctx, 2));
label_246524:
    // 0x246524: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x246524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_246528:
    // 0x246528: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x246528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24652c:
    // 0x24652c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24652cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_246530:
    // 0x246530: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x246530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_246534:
    // 0x246534: 0x3e00008  jr          $ra
label_246538:
    if (ctx->pc == 0x246538u) {
        ctx->pc = 0x246538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246534u;
        // 0x246538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24653Cu;
        goto label_24653c;
    }
    ctx->pc = 0x246534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246534u;
        // 0x246538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24653Cu;
label_24653c:
    // 0x24653c: 0x0  nop
    ctx->pc = 0x24653cu;
    // NOP
    ctx->pc = 0x246540u;
}
