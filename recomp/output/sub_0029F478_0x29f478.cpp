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

// Function: sub_0029F478
// Address: 0x29f478 - 0x2a0000
void sub_0029F478_0x29f478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F478_0x29f478");
#endif

    switch (ctx->pc) {
        case 0x29f4bcu: goto label_29f4bc;
        case 0x29f4c4u: goto label_29f4c4;
        case 0x29f4ccu: goto label_29f4cc;
        case 0x29f4d4u: goto label_29f4d4;
        case 0x29f4dcu: goto label_29f4dc;
        case 0x29f4e4u: goto label_29f4e4;
        case 0x29f4ecu: goto label_29f4ec;
        case 0x29f52cu: goto label_29f52c;
        case 0x29f540u: goto label_29f540;
        case 0x29f558u: goto label_29f558;
        case 0x29f574u: goto label_29f574;
        case 0x29f57cu: goto label_29f57c;
        case 0x29f594u: goto label_29f594;
        case 0x29f5a8u: goto label_29f5a8;
        case 0x29f5b0u: goto label_29f5b0;
        case 0x29f5c8u: goto label_29f5c8;
        case 0x29f5e8u: goto label_29f5e8;
        case 0x29f608u: goto label_29f608;
        case 0x29f63cu: goto label_29f63c;
        case 0x29f654u: goto label_29f654;
        case 0x29f66cu: goto label_29f66c;
        case 0x29f678u: goto label_29f678;
        case 0x29f680u: goto label_29f680;
        case 0x29f688u: goto label_29f688;
        case 0x29f69cu: goto label_29f69c;
        case 0x29f6b4u: goto label_29f6b4;
        case 0x29f6c0u: goto label_29f6c0;
        case 0x29f6c8u: goto label_29f6c8;
        case 0x29f6d0u: goto label_29f6d0;
        case 0x29f6e4u: goto label_29f6e4;
        case 0x29f6fcu: goto label_29f6fc;
        case 0x29f708u: goto label_29f708;
        case 0x29f710u: goto label_29f710;
        case 0x29f718u: goto label_29f718;
        case 0x29f72cu: goto label_29f72c;
        case 0x29f740u: goto label_29f740;
        case 0x29f748u: goto label_29f748;
        case 0x29f760u: goto label_29f760;
        case 0x29f774u: goto label_29f774;
        case 0x29f77cu: goto label_29f77c;
        case 0x29f794u: goto label_29f794;
        case 0x29f7bcu: goto label_29f7bc;
        case 0x29f7d4u: goto label_29f7d4;
        case 0x29f7f0u: goto label_29f7f0;
        case 0x29f808u: goto label_29f808;
        case 0x29f824u: goto label_29f824;
        case 0x29f82cu: goto label_29f82c;
        case 0x29f838u: goto label_29f838;
        case 0x29f850u: goto label_29f850;
        case 0x29f864u: goto label_29f864;
        case 0x29f87cu: goto label_29f87c;
        case 0x29f894u: goto label_29f894;
        case 0x29f8a4u: goto label_29f8a4;
        case 0x29f8bcu: goto label_29f8bc;
        case 0x29f8dcu: goto label_29f8dc;
        case 0x29f8ecu: goto label_29f8ec;
        case 0x29f904u: goto label_29f904;
        case 0x29f920u: goto label_29f920;
        case 0x29f930u: goto label_29f930;
        case 0x29f938u: goto label_29f938;
        case 0x29f950u: goto label_29f950;
        case 0x29f968u: goto label_29f968;
        case 0x29f984u: goto label_29f984;
        case 0x29f994u: goto label_29f994;
        case 0x29f9acu: goto label_29f9ac;
        case 0x29f9c4u: goto label_29f9c4;
        case 0x29f9dcu: goto label_29f9dc;
        case 0x29f9f4u: goto label_29f9f4;
        case 0x29fa10u: goto label_29fa10;
        case 0x29fa20u: goto label_29fa20;
        case 0x29fa38u: goto label_29fa38;
        case 0x29fa4cu: goto label_29fa4c;
        case 0x29fa70u: goto label_29fa70;
        case 0x29fa84u: goto label_29fa84;
        case 0x29fa9cu: goto label_29fa9c;
        case 0x29fac0u: goto label_29fac0;
        case 0x29fad4u: goto label_29fad4;
        case 0x29faecu: goto label_29faec;
        case 0x29fb10u: goto label_29fb10;
        case 0x29fb24u: goto label_29fb24;
        case 0x29fb3cu: goto label_29fb3c;
        case 0x29fb60u: goto label_29fb60;
        case 0x29fb74u: goto label_29fb74;
        case 0x29fb8cu: goto label_29fb8c;
        case 0x29fbb8u: goto label_29fbb8;
        case 0x29fbc4u: goto label_29fbc4;
        case 0x29fbe0u: goto label_29fbe0;
        case 0x29fc1cu: goto label_29fc1c;
        case 0x29fc3cu: goto label_29fc3c;
        case 0x29fc50u: goto label_29fc50;
        case 0x29fc78u: goto label_29fc78;
        case 0x29fc84u: goto label_29fc84;
        case 0x29fca8u: goto label_29fca8;
        case 0x29fce8u: goto label_29fce8;
        case 0x29fcf4u: goto label_29fcf4;
        case 0x29fd10u: goto label_29fd10;
        case 0x29fd58u: goto label_29fd58;
        case 0x29fd78u: goto label_29fd78;
        case 0x29fd90u: goto label_29fd90;
        case 0x29fdc0u: goto label_29fdc0;
        case 0x29fdccu: goto label_29fdcc;
        case 0x29fdf0u: goto label_29fdf0;
        case 0x29fe18u: goto label_29fe18;
        case 0x29fe48u: goto label_29fe48;
        case 0x29fe60u: goto label_29fe60;
        case 0x29feb0u: goto label_29feb0;
        case 0x29fef8u: goto label_29fef8;
        case 0x29ff10u: goto label_29ff10;
        case 0x29ff34u: goto label_29ff34;
        case 0x29ff44u: goto label_29ff44;
        case 0x29ff5cu: goto label_29ff5c;
        case 0x29ff80u: goto label_29ff80;
        case 0x29ff90u: goto label_29ff90;
        case 0x29ffa8u: goto label_29ffa8;
        case 0x29ffe0u: goto label_29ffe0;
        case 0x29fff4u: goto label_29fff4;
        default: break;
    }

    ctx->pc = 0x29f478u;

    // 0x29f478: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x29f478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x29f47c: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x29f47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
    // 0x29f480: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x29f480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x29f484: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29f484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f488: 0xffb60260  sd          $s6, 0x260($sp)
    ctx->pc = 0x29f488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 22));
    // 0x29f48c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29f48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f490: 0xffb40250  sd          $s4, 0x250($sp)
    ctx->pc = 0x29f490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
    // 0x29f494: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29f494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f498: 0xffb10238  sd          $s1, 0x238($sp)
    ctx->pc = 0x29f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 17));
    // 0x29f49c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x29f49cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f4a0: 0xffb30248  sd          $s3, 0x248($sp)
    ctx->pc = 0x29f4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 19));
    // 0x29f4a4: 0xffb50258  sd          $s5, 0x258($sp)
    ctx->pc = 0x29f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 21));
    // 0x29f4a8: 0xffb70268  sd          $s7, 0x268($sp)
    ctx->pc = 0x29f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 23));
    // 0x29f4ac: 0xffbe0270  sd          $fp, 0x270($sp)
    ctx->pc = 0x29f4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 30));
    // 0x29f4b0: 0xffbf0278  sd          $ra, 0x278($sp)
    ctx->pc = 0x29f4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
    // 0x29f4b4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F4B4u;
    SET_GPR_U32(ctx, 31, 0x29F4BCu);
    ctx->pc = 0x29F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4B4u;
    // 0x29f4b8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F4B4u, 0x29F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4BCu;
label_29f4bc:
    // 0x29f4bc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F4BCu;
    SET_GPR_U32(ctx, 31, 0x29F4C4u);
    ctx->pc = 0x29F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4BCu;
    // 0x29f4c0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F4BCu, 0x29F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4C4u;
label_29f4c4:
    // 0x29f4c4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F4C4u;
    SET_GPR_U32(ctx, 31, 0x29F4CCu);
    ctx->pc = 0x29F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4C4u;
    // 0x29f4c8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F4C4u, 0x29F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4CCu;
label_29f4cc:
    // 0x29f4cc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F4CCu;
    SET_GPR_U32(ctx, 31, 0x29F4D4u);
    ctx->pc = 0x29F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4CCu;
    // 0x29f4d0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F4CCu, 0x29F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4D4u;
label_29f4d4:
    // 0x29f4d4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F4D4u;
    SET_GPR_U32(ctx, 31, 0x29F4DCu);
    ctx->pc = 0x29F4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4D4u;
    // 0x29f4d8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F4D4u, 0x29F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4DCu;
label_29f4dc:
    // 0x29f4dc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F4DCu;
    SET_GPR_U32(ctx, 31, 0x29F4E4u);
    ctx->pc = 0x29F4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4DCu;
    // 0x29f4e0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F4DCu, 0x29F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4E4u;
label_29f4e4:
    // 0x29f4e4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F4E4u;
    SET_GPR_U32(ctx, 31, 0x29F4ECu);
    ctx->pc = 0x29F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4E4u;
    // 0x29f4e8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F4E4u, 0x29F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4ECu;
label_29f4ec:
    // 0x29f4ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f4f0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x29f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x29f4f4: 0x24a5c580  addiu       $a1, $a1, -0x3A80
    ctx->pc = 0x29f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952320));
    // 0x29f4f8: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x29f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x29f4fc: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x29f4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x29f500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f504: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x29f504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x29f508: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x29f508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x29f50c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x29f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x29f510: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x29f510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x29f514: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x29f514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x29f518: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x29f518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x29f51c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x29f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x29f520: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x29f520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x29f524: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F524u;
    SET_GPR_U32(ctx, 31, 0x29F52Cu);
    ctx->pc = 0x29F528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F524u;
    // 0x29f528: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F524u, 0x29F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F52Cu;
label_29f52c:
    // 0x29f52c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f530: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F530u;
    {
        const bool branch_taken_0x29f530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F530u;
        // 0x29f534: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f530) {
            ctx->pc = 0x29F548u;
            goto label_29f548;
        }
    }
    ctx->pc = 0x29F538u;
    // 0x29f538: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x29F538u;
    SET_GPR_U32(ctx, 31, 0x29F540u);
    ctx->pc = 0x29F53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F538u;
    // 0x29f53c: 0x26450238  addiu       $a1, $s2, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x29F538u, 0x29F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F540u;
label_29f540:
    // 0x29f540: 0x10000369  b           . + 4 + (0x369 << 2)
    ctx->pc = 0x29F540u;
    {
        const bool branch_taken_0x29f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F540u;
        // 0x29f544: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f540) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29F548u;
label_29f548:
    // 0x29f548: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f550: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F550u;
    SET_GPR_U32(ctx, 31, 0x29F558u);
    ctx->pc = 0x29F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F550u;
    // 0x29f554: 0x24a5c590  addiu       $a1, $a1, -0x3A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F550u, 0x29F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F558u;
label_29f558:
    // 0x29f558: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f55c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29F55Cu;
    {
        const bool branch_taken_0x29f55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F55Cu;
        // 0x29f560: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f55c) {
            ctx->pc = 0x29F584u;
            goto label_29f584;
        }
    }
    ctx->pc = 0x29F564u;
    // 0x29f564: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29f564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29f568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f56c: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x29F56Cu;
    SET_GPR_U32(ctx, 31, 0x29F574u);
    ctx->pc = 0x29F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F56Cu;
    // 0x29f570: 0x27a60084  addiu       $a2, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x29F56Cu, 0x29F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F574u;
label_29f574:
    // 0x29f574: 0xc0a57b2  jal         func_295EC8
    ctx->pc = 0x29F574u;
    SET_GPR_U32(ctx, 31, 0x29F57Cu);
    ctx->pc = 0x29F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F574u;
    // 0x29f578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EC8u, 0x29F574u, 0x29F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F57Cu;
label_29f57c:
    // 0x29f57c: 0x1000035a  b           . + 4 + (0x35A << 2)
    ctx->pc = 0x29F57Cu;
    {
        const bool branch_taken_0x29f57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F57Cu;
        // 0x29f580: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f57c) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29F584u;
label_29f584:
    // 0x29f584: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f58c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F58Cu;
    SET_GPR_U32(ctx, 31, 0x29F594u);
    ctx->pc = 0x29F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F58Cu;
    // 0x29f590: 0x24a5c5a8  addiu       $a1, $a1, -0x3A58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F58Cu, 0x29F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F594u;
label_29f594:
    // 0x29f594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f598: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F598u;
    {
        const bool branch_taken_0x29f598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F598u;
        // 0x29f59c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f598) {
            ctx->pc = 0x29F5B8u;
            goto label_29f5b8;
        }
    }
    ctx->pc = 0x29F5A0u;
    // 0x29f5a0: 0xc09e056  jal         func_278158
    ctx->pc = 0x29F5A0u;
    SET_GPR_U32(ctx, 31, 0x29F5A8u);
    ctx->pc = 0x29F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F5A0u;
    // 0x29f5a4: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x29F5A0u, 0x29F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5A8u;
label_29f5a8:
    // 0x29f5a8: 0xc0a57be  jal         func_295EF8
    ctx->pc = 0x29F5A8u;
    SET_GPR_U32(ctx, 31, 0x29F5B0u);
    ctx->pc = 0x29F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F5A8u;
    // 0x29f5ac: 0x8fa40200  lw          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EF8u, 0x29F5A8u, 0x29F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5B0u;
label_29f5b0:
    // 0x29f5b0: 0x1000034d  b           . + 4 + (0x34D << 2)
    ctx->pc = 0x29F5B0u;
    {
        const bool branch_taken_0x29f5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5B0u;
        // 0x29f5b4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f5b0) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29F5B8u;
label_29f5b8:
    // 0x29f5b8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F5C0u;
    SET_GPR_U32(ctx, 31, 0x29F5C8u);
    ctx->pc = 0x29F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F5C0u;
    // 0x29f5c4: 0x24a5c5c0  addiu       $a1, $a1, -0x3A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F5C0u, 0x29F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5C8u;
label_29f5c8:
    // 0x29f5c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f5cc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x29F5CCu;
    {
        const bool branch_taken_0x29f5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5CCu;
        // 0x29f5d0: 0x27a60208  addiu       $a2, $sp, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f5cc) {
            ctx->pc = 0x29F644u;
            goto label_29f644;
        }
    }
    ctx->pc = 0x29F5D4u;
    // 0x29f5d4: 0x27a50204  addiu       $a1, $sp, 0x204
    ctx->pc = 0x29f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x29f5d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5dc: 0x27a7020c  addiu       $a3, $sp, 0x20C
    ctx->pc = 0x29f5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
    // 0x29f5e0: 0xc09dfa0  jal         func_277E80
    ctx->pc = 0x29F5E0u;
    SET_GPR_U32(ctx, 31, 0x29F5E8u);
    ctx->pc = 0x29F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F5E0u;
    // 0x29f5e4: 0x27a80210  addiu       $t0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277E80u, 0x29F5E0u, 0x29F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5E8u;
label_29f5e8:
    // 0x29f5e8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29f5ec: 0x8fb20204  lw          $s2, 0x204($sp)
    ctx->pc = 0x29f5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x29f5f0: 0x8fb30208  lw          $s3, 0x208($sp)
    ctx->pc = 0x29f5f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x29f5f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5f8: 0x8fb1020c  lw          $s1, 0x20C($sp)
    ctx->pc = 0x29f5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x29f5fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x29f5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29f600: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x29F600u;
    SET_GPR_U32(ctx, 31, 0x29F608u);
    ctx->pc = 0x29F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F600u;
    // 0x29f604: 0x8fb00210  lw          $s0, 0x210($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x29F600u, 0x29F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F608u;
label_29f608:
    // 0x29f608: 0xa3b200e0  sb          $s2, 0xE0($sp)
    ctx->pc = 0x29f608u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 18));
    // 0x29f60c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f610: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29f610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29f614: 0xa3b300e1  sb          $s3, 0xE1($sp)
    ctx->pc = 0x29f614u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 225), (uint8_t)GPR_U32(ctx, 19));
    // 0x29f618: 0xa3b100e2  sb          $s1, 0xE2($sp)
    ctx->pc = 0x29f618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 226), (uint8_t)GPR_U32(ctx, 17));
    // 0x29f61c: 0xa3b000e3  sb          $s0, 0xE3($sp)
    ctx->pc = 0x29f61cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 227), (uint8_t)GPR_U32(ctx, 16));
    // 0x29f620: 0x8ba300e3  lwl         $v1, 0xE3($sp)
    ctx->pc = 0x29f620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 227); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x29f624: 0x9ba300e0  lwr         $v1, 0xE0($sp)
    ctx->pc = 0x29f624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x29f628: 0xaba300f3  swl         $v1, 0xF3($sp)
    ctx->pc = 0x29f628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 243); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29f62c: 0xbba300f0  swr         $v1, 0xF0($sp)
    ctx->pc = 0x29f62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29f630: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x29f630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29f634: 0xc0a57d2  jal         func_295F48
    ctx->pc = 0x29F634u;
    SET_GPR_U32(ctx, 31, 0x29F63Cu);
    ctx->pc = 0x29F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F634u;
    // 0x29f638: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F48u, 0x29F634u, 0x29F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F63Cu;
label_29f63c:
    // 0x29f63c: 0x1000032a  b           . + 4 + (0x32A << 2)
    ctx->pc = 0x29F63Cu;
    {
        const bool branch_taken_0x29f63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F63Cu;
        // 0x29f640: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f63c) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29F644u;
label_29f644:
    // 0x29f644: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f64c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F64Cu;
    SET_GPR_U32(ctx, 31, 0x29F654u);
    ctx->pc = 0x29F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F64Cu;
    // 0x29f650: 0x24a5c5d0  addiu       $a1, $a1, -0x3A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F64Cu, 0x29F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F654u;
label_29f654:
    // 0x29f654: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f658: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29F658u;
    {
        const bool branch_taken_0x29f658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F658u;
        // 0x29f65c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f658) {
            ctx->pc = 0x29F690u;
            goto label_29f690;
        }
    }
    ctx->pc = 0x29F660u;
    // 0x29f660: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x29f660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29f664: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F664u;
    SET_GPR_U32(ctx, 31, 0x29F66Cu);
    ctx->pc = 0x29F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F664u;
    // 0x29f668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F664u, 0x29F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F66Cu;
label_29f66c:
    // 0x29f66c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f670: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x29F670u;
    SET_GPR_U32(ctx, 31, 0x29F678u);
    ctx->pc = 0x29F674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F670u;
    // 0x29f674: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x29F670u, 0x29F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F678u;
label_29f678:
    // 0x29f678: 0xc0a5824  jal         func_296090
    ctx->pc = 0x29F678u;
    SET_GPR_U32(ctx, 31, 0x29F680u);
    ctx->pc = 0x29F67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F678u;
    // 0x29f67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296090u, 0x29F678u, 0x29F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F680u;
label_29f680:
    // 0x29f680: 0xc0a587e  jal         func_2961F8
    ctx->pc = 0x29F680u;
    SET_GPR_U32(ctx, 31, 0x29F688u);
    ctx->pc = 0x29F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F680u;
    // 0x29f684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961F8u, 0x29F680u, 0x29F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F688u;
label_29f688:
    // 0x29f688: 0x100002f9  b           . + 4 + (0x2F9 << 2)
    ctx->pc = 0x29F688u;
    {
        const bool branch_taken_0x29f688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F688u;
        // 0x29f68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f688) {
            ctx->pc = 0x2A0270u;
            return;
        }
    }
    ctx->pc = 0x29F690u;
label_29f690:
    // 0x29f690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f694: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F694u;
    SET_GPR_U32(ctx, 31, 0x29F69Cu);
    ctx->pc = 0x29F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F694u;
    // 0x29f698: 0x24a5c5e0  addiu       $a1, $a1, -0x3A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F694u, 0x29F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F69Cu;
label_29f69c:
    // 0x29f69c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f6a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29F6A0u;
    {
        const bool branch_taken_0x29f6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F6A0u;
        // 0x29f6a4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f6a0) {
            ctx->pc = 0x29F6D8u;
            goto label_29f6d8;
        }
    }
    ctx->pc = 0x29F6A8u;
    // 0x29f6a8: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x29f6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29f6ac: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F6ACu;
    SET_GPR_U32(ctx, 31, 0x29F6B4u);
    ctx->pc = 0x29F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6ACu;
    // 0x29f6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F6ACu, 0x29F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6B4u;
label_29f6b4:
    // 0x29f6b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6b8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x29F6B8u;
    SET_GPR_U32(ctx, 31, 0x29F6C0u);
    ctx->pc = 0x29F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6B8u;
    // 0x29f6bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x29F6B8u, 0x29F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6C0u;
label_29f6c0:
    // 0x29f6c0: 0xc0a5808  jal         func_296020
    ctx->pc = 0x29F6C0u;
    SET_GPR_U32(ctx, 31, 0x29F6C8u);
    ctx->pc = 0x29F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6C0u;
    // 0x29f6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296020u, 0x29F6C0u, 0x29F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6C8u;
label_29f6c8:
    // 0x29f6c8: 0xc0a5892  jal         func_296248
    ctx->pc = 0x29F6C8u;
    SET_GPR_U32(ctx, 31, 0x29F6D0u);
    ctx->pc = 0x29F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6C8u;
    // 0x29f6cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296248u, 0x29F6C8u, 0x29F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6D0u;
label_29f6d0:
    // 0x29f6d0: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x29F6D0u;
    {
        const bool branch_taken_0x29f6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F6D0u;
        // 0x29f6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f6d0) {
            ctx->pc = 0x2A0270u;
            return;
        }
    }
    ctx->pc = 0x29F6D8u;
label_29f6d8:
    // 0x29f6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F6DCu;
    SET_GPR_U32(ctx, 31, 0x29F6E4u);
    ctx->pc = 0x29F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6DCu;
    // 0x29f6e0: 0x24a5c5f0  addiu       $a1, $a1, -0x3A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F6DCu, 0x29F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6E4u;
label_29f6e4:
    // 0x29f6e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f6e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29F6E8u;
    {
        const bool branch_taken_0x29f6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F6E8u;
        // 0x29f6ec: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f6e8) {
            ctx->pc = 0x29F720u;
            goto label_29f720;
        }
    }
    ctx->pc = 0x29F6F0u;
    // 0x29f6f0: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x29f6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29f6f4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F6F4u;
    SET_GPR_U32(ctx, 31, 0x29F6FCu);
    ctx->pc = 0x29F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6F4u;
    // 0x29f6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F6F4u, 0x29F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6FCu;
label_29f6fc:
    // 0x29f6fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f700: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x29F700u;
    SET_GPR_U32(ctx, 31, 0x29F708u);
    ctx->pc = 0x29F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F700u;
    // 0x29f704: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x29F700u, 0x29F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F708u;
label_29f708:
    // 0x29f708: 0xc0a5840  jal         func_296100
    ctx->pc = 0x29F708u;
    SET_GPR_U32(ctx, 31, 0x29F710u);
    ctx->pc = 0x29F70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F708u;
    // 0x29f70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296100u, 0x29F708u, 0x29F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F710u;
label_29f710:
    // 0x29f710: 0xc0a589c  jal         func_296270
    ctx->pc = 0x29F710u;
    SET_GPR_U32(ctx, 31, 0x29F718u);
    ctx->pc = 0x29F714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F710u;
    // 0x29f714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296270u, 0x29F710u, 0x29F718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F718u;
label_29f718:
    // 0x29f718: 0x100002d5  b           . + 4 + (0x2D5 << 2)
    ctx->pc = 0x29F718u;
    {
        const bool branch_taken_0x29f718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F718u;
        // 0x29f71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f718) {
            ctx->pc = 0x2A0270u;
            return;
        }
    }
    ctx->pc = 0x29F720u;
label_29f720:
    // 0x29f720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f724: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F724u;
    SET_GPR_U32(ctx, 31, 0x29F72Cu);
    ctx->pc = 0x29F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F724u;
    // 0x29f728: 0x24a5c608  addiu       $a1, $a1, -0x39F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F724u, 0x29F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F72Cu;
label_29f72c:
    // 0x29f72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f730: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F730u;
    {
        const bool branch_taken_0x29f730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F730u;
        // 0x29f734: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f730) {
            ctx->pc = 0x29F750u;
            goto label_29f750;
        }
    }
    ctx->pc = 0x29F738u;
    // 0x29f738: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x29F738u;
    SET_GPR_U32(ctx, 31, 0x29F740u);
    ctx->pc = 0x29F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F738u;
    // 0x29f73c: 0x27a50214  addiu       $a1, $sp, 0x214 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x29F738u, 0x29F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F740u;
label_29f740:
    // 0x29f740: 0xc0a58b0  jal         func_2962C0
    ctx->pc = 0x29F740u;
    SET_GPR_U32(ctx, 31, 0x29F748u);
    ctx->pc = 0x29F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F740u;
    // 0x29f744: 0xc7ac0214  lwc1        $f12, 0x214($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962C0u, 0x29F740u, 0x29F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F748u;
label_29f748:
    // 0x29f748: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x29F748u;
    {
        const bool branch_taken_0x29f748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F748u;
        // 0x29f74c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f748) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29F750u;
label_29f750:
    // 0x29f750: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f758: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F758u;
    SET_GPR_U32(ctx, 31, 0x29F760u);
    ctx->pc = 0x29F75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F758u;
    // 0x29f75c: 0x24a5c628  addiu       $a1, $a1, -0x39D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F758u, 0x29F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F760u;
label_29f760:
    // 0x29f760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f764: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F764u;
    {
        const bool branch_taken_0x29f764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F764u;
        // 0x29f768: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f764) {
            ctx->pc = 0x29F784u;
            goto label_29f784;
        }
    }
    ctx->pc = 0x29F76Cu;
    // 0x29f76c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x29F76Cu;
    SET_GPR_U32(ctx, 31, 0x29F774u);
    ctx->pc = 0x29F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F76Cu;
    // 0x29f770: 0x27a50218  addiu       $a1, $sp, 0x218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x29F76Cu, 0x29F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F774u;
label_29f774:
    // 0x29f774: 0xc0a58c4  jal         func_296310
    ctx->pc = 0x29F774u;
    SET_GPR_U32(ctx, 31, 0x29F77Cu);
    ctx->pc = 0x29F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F774u;
    // 0x29f778: 0xc7ac0218  lwc1        $f12, 0x218($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296310u, 0x29F774u, 0x29F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F77Cu;
label_29f77c:
    // 0x29f77c: 0x100002da  b           . + 4 + (0x2DA << 2)
    ctx->pc = 0x29F77Cu;
    {
        const bool branch_taken_0x29f77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F77Cu;
        // 0x29f780: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f77c) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29F784u;
label_29f784:
    // 0x29f784: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f78c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F78Cu;
    SET_GPR_U32(ctx, 31, 0x29F794u);
    ctx->pc = 0x29F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F78Cu;
    // 0x29f790: 0x24a5c648  addiu       $a1, $a1, -0x39B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F78Cu, 0x29F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F794u;
label_29f794:
    // 0x29f794: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f798: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29F798u;
    {
        const bool branch_taken_0x29f798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F798u;
        // 0x29f79c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f798) {
            ctx->pc = 0x29F7C4u;
            goto label_29f7c4;
        }
    }
    ctx->pc = 0x29F7A0u;
    // 0x29f7a0: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x29f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x29f7a4: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x29f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29f7a8: 0x24a50240  addiu       $a1, $a1, 0x240
    ctx->pc = 0x29f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
    // 0x29f7ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29f7b0: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x29f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x29f7b4: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x29F7B4u;
    SET_GPR_U32(ctx, 31, 0x29F7BCu);
    ctx->pc = 0x29F7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F7B4u;
    // 0x29f7b8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x29F7B4u, 0x29F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F7BCu;
label_29f7bc:
    // 0x29f7bc: 0x100002ca  b           . + 4 + (0x2CA << 2)
    ctx->pc = 0x29F7BCu;
    {
        const bool branch_taken_0x29f7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7BCu;
        // 0x29f7c0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7bc) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29F7C4u;
label_29f7c4:
    // 0x29f7c4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f7cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F7CCu;
    SET_GPR_U32(ctx, 31, 0x29F7D4u);
    ctx->pc = 0x29F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F7CCu;
    // 0x29f7d0: 0x24a5c658  addiu       $a1, $a1, -0x39A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F7CCu, 0x29F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F7D4u;
label_29f7d4:
    // 0x29f7d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f7d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F7D8u;
    {
        const bool branch_taken_0x29f7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7D8u;
        // 0x29f7dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7d8) {
            ctx->pc = 0x29F7F8u;
            goto label_29f7f8;
        }
    }
    ctx->pc = 0x29F7E0u;
    // 0x29f7e0: 0x26470228  addiu       $a3, $s2, 0x228
    ctx->pc = 0x29f7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
    // 0x29f7e4: 0x26450214  addiu       $a1, $s2, 0x214
    ctx->pc = 0x29f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 532));
    // 0x29f7e8: 0xc09e45a  jal         func_279168
    ctx->pc = 0x29F7E8u;
    SET_GPR_U32(ctx, 31, 0x29F7F0u);
    ctx->pc = 0x29F7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F7E8u;
    // 0x29f7ec: 0x26460220  addiu       $a2, $s2, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279168u, 0x29F7E8u, 0x29F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F7F0u;
label_29f7f0:
    // 0x29f7f0: 0x100002bd  b           . + 4 + (0x2BD << 2)
    ctx->pc = 0x29F7F0u;
    {
        const bool branch_taken_0x29f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7F0u;
        // 0x29f7f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7f0) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29F7F8u;
label_29f7f8:
    // 0x29f7f8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f800: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F800u;
    SET_GPR_U32(ctx, 31, 0x29F808u);
    ctx->pc = 0x29F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F800u;
    // 0x29f804: 0x24a5c668  addiu       $a1, $a1, -0x3998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F800u, 0x29F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F808u;
label_29f808:
    // 0x29f808: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f80c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29F80Cu;
    {
        const bool branch_taken_0x29f80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F80Cu;
        // 0x29f810: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f80c) {
            ctx->pc = 0x29F840u;
            goto label_29f840;
        }
    }
    ctx->pc = 0x29F814u;
    // 0x29f814: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29f814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f818: 0x26460220  addiu       $a2, $s2, 0x220
    ctx->pc = 0x29f818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x29f81c: 0xc09e45a  jal         func_279168
    ctx->pc = 0x29F81Cu;
    SET_GPR_U32(ctx, 31, 0x29F824u);
    ctx->pc = 0x29F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F81Cu;
    // 0x29f820: 0x26470228  addiu       $a3, $s2, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279168u, 0x29F81Cu, 0x29F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F824u;
label_29f824:
    // 0x29f824: 0xc0a3c8a  jal         func_28F228
    ctx->pc = 0x29F824u;
    SET_GPR_U32(ctx, 31, 0x29F82Cu);
    ctx->pc = 0x28F228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F228u, 0x29F824u, 0x29F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F82Cu;
label_29f82c:
    // 0x29f82c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f830: 0xc0a3cbc  jal         func_28F2F0
    ctx->pc = 0x29F830u;
    SET_GPR_U32(ctx, 31, 0x29F838u);
    ctx->pc = 0x29F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F830u;
    // 0x29f834: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2F0u, 0x29F830u, 0x29F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F838u;
label_29f838:
    // 0x29f838: 0x100002aa  b           . + 4 + (0x2AA << 2)
    ctx->pc = 0x29F838u;
    {
        const bool branch_taken_0x29f838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F838u;
        // 0x29f83c: 0xae42021c  sw          $v0, 0x21C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f838) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29F840u;
label_29f840:
    // 0x29f840: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f848: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F848u;
    SET_GPR_U32(ctx, 31, 0x29F850u);
    ctx->pc = 0x29F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F848u;
    // 0x29f84c: 0x24a5c670  addiu       $a1, $a1, -0x3990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F848u, 0x29F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F850u;
label_29f850:
    // 0x29f850: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f854: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F854u;
    {
        const bool branch_taken_0x29f854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F854u;
        // 0x29f858: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f854) {
            ctx->pc = 0x29F86Cu;
            goto label_29f86c;
        }
    }
    ctx->pc = 0x29F85Cu;
    // 0x29f85c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x29F85Cu;
    SET_GPR_U32(ctx, 31, 0x29F864u);
    ctx->pc = 0x29F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F85Cu;
    // 0x29f860: 0x26450230  addiu       $a1, $s2, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x29F85Cu, 0x29F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F864u;
label_29f864:
    // 0x29f864: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x29F864u;
    {
        const bool branch_taken_0x29f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F864u;
        // 0x29f868: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f864) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29F86Cu;
label_29f86c:
    // 0x29f86c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f874: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F874u;
    SET_GPR_U32(ctx, 31, 0x29F87Cu);
    ctx->pc = 0x29F878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F874u;
    // 0x29f878: 0x24a5c678  addiu       $a1, $a1, -0x3988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F874u, 0x29F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F87Cu;
label_29f87c:
    // 0x29f87c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f880: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29F880u;
    {
        const bool branch_taken_0x29f880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F880u;
        // 0x29f884: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f880) {
            ctx->pc = 0x29F8B0u;
            goto label_29f8b0;
        }
    }
    ctx->pc = 0x29F888u;
    // 0x29f888: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29f888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f88c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x29F88Cu;
    SET_GPR_U32(ctx, 31, 0x29F894u);
    ctx->pc = 0x29F890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F88Cu;
    // 0x29f890: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x29F88Cu, 0x29F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F894u;
label_29f894:
    // 0x29f894: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f898: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29f898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f89c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F89Cu;
    SET_GPR_U32(ctx, 31, 0x29F8A4u);
    ctx->pc = 0x29F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F89Cu;
    // 0x29f8a0: 0x24a5c688  addiu       $a1, $a1, -0x3978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F89Cu, 0x29F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F8A4u;
label_29f8a4:
    // 0x29f8a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29f8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29f8a8: 0x1000028e  b           . + 4 + (0x28E << 2)
    ctx->pc = 0x29F8A8u;
    {
        const bool branch_taken_0x29f8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8A8u;
        // 0x29f8ac: 0xa2420011  sb          $v0, 0x11($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f8a8) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29F8B0u;
label_29f8b0:
    // 0x29f8b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f8b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F8B4u;
    SET_GPR_U32(ctx, 31, 0x29F8BCu);
    ctx->pc = 0x29F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F8B4u;
    // 0x29f8b8: 0x24a5c698  addiu       $a1, $a1, -0x3968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F8B4u, 0x29F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F8BCu;
label_29f8bc:
    // 0x29f8bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f8c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29F8C0u;
    {
        const bool branch_taken_0x29f8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8C0u;
        // 0x29f8c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f8c0) {
            ctx->pc = 0x29F8F4u;
            goto label_29f8f4;
        }
    }
    ctx->pc = 0x29F8C8u;
    // 0x29f8c8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29f8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29f8cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29f8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f8d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29f8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f8d4: 0xc09e32a  jal         func_278CA8
    ctx->pc = 0x29F8D4u;
    SET_GPR_U32(ctx, 31, 0x29F8DCu);
    ctx->pc = 0x29F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F8D4u;
    // 0x29f8d8: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278CA8u, 0x29F8D4u, 0x29F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F8DCu;
label_29f8dc:
    // 0x29f8dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29f8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f8e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f8e4: 0xc0a5a92  jal         func_296A48
    ctx->pc = 0x29F8E4u;
    SET_GPR_U32(ctx, 31, 0x29F8ECu);
    ctx->pc = 0x29F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F8E4u;
    // 0x29f8e8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296A48u, 0x29F8E4u, 0x29F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F8ECu;
label_29f8ec:
    // 0x29f8ec: 0x1000027d  b           . + 4 + (0x27D << 2)
    ctx->pc = 0x29F8ECu;
    {
        const bool branch_taken_0x29f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8ECu;
        // 0x29f8f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f8ec) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29F8F4u;
label_29f8f4:
    // 0x29f8f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f8fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F8FCu;
    SET_GPR_U32(ctx, 31, 0x29F904u);
    ctx->pc = 0x29F900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F8FCu;
    // 0x29f900: 0x24a5c6a0  addiu       $a1, $a1, -0x3960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F8FCu, 0x29F904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F904u;
label_29f904:
    // 0x29f904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f908: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29F908u;
    {
        const bool branch_taken_0x29f908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F908u;
        // 0x29f90c: 0x27b10100  addiu       $s1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f908) {
            ctx->pc = 0x29F940u;
            goto label_29f940;
        }
    }
    ctx->pc = 0x29F910u;
    // 0x29f910: 0x26460274  addiu       $a2, $s2, 0x274
    ctx->pc = 0x29f910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 628));
    // 0x29f914: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f918: 0xc09e1b0  jal         func_2786C0
    ctx->pc = 0x29F918u;
    SET_GPR_U32(ctx, 31, 0x29F920u);
    ctx->pc = 0x29F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F918u;
    // 0x29f91c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2786C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2786C0u, 0x29F918u, 0x29F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F920u;
label_29f920:
    // 0x29f920: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29f924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29f924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f928: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29F928u;
    SET_GPR_U32(ctx, 31, 0x29F930u);
    ctx->pc = 0x29F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F928u;
    // 0x29f92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29F928u, 0x29F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F930u;
label_29f930:
    // 0x29f930: 0xc0a5ac2  jal         func_296B08
    ctx->pc = 0x29F930u;
    SET_GPR_U32(ctx, 31, 0x29F938u);
    ctx->pc = 0x29F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F930u;
    // 0x29f934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B08u, 0x29F930u, 0x29F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F938u;
label_29f938:
    // 0x29f938: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x29F938u;
    {
        const bool branch_taken_0x29f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F938u;
        // 0x29f93c: 0xae420270  sw          $v0, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f938) {
            ctx->pc = 0x2A026Cu;
            return;
        }
    }
    ctx->pc = 0x29F940u;
label_29f940:
    // 0x29f940: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f948: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F948u;
    SET_GPR_U32(ctx, 31, 0x29F950u);
    ctx->pc = 0x29F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F948u;
    // 0x29f94c: 0x24a5c6b0  addiu       $a1, $a1, -0x3950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F948u, 0x29F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F950u;
label_29f950:
    // 0x29f950: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f954: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x29F954u;
    {
        const bool branch_taken_0x29f954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f954) {
            ctx->pc = 0x29F958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F954u;
            // 0x29f958: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F9D0u;
            goto label_29f9d0;
        }
    }
    ctx->pc = 0x29F95Cu;
    // 0x29f95c: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x29f95cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29f960: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F960u;
    SET_GPR_U32(ctx, 31, 0x29F968u);
    ctx->pc = 0x29F964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F960u;
    // 0x29f964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F960u, 0x29F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F968u;
label_29f968:
    // 0x29f968: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x29f968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29f96c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f970: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29f970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f974: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29f974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f978: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29f978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f97c: 0xc09e380  jal         func_278E00
    ctx->pc = 0x29F97Cu;
    SET_GPR_U32(ctx, 31, 0x29F984u);
    ctx->pc = 0x29F980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F97Cu;
    // 0x29f980: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278E00u, 0x29F97Cu, 0x29F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F984u;
label_29f984:
    // 0x29f984: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f98c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F98Cu;
    SET_GPR_U32(ctx, 31, 0x29F994u);
    ctx->pc = 0x29F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F98Cu;
    // 0x29f990: 0x24a5c6c0  addiu       $a1, $a1, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F98Cu, 0x29F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F994u;
label_29f994:
    // 0x29f994: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29F994u;
    {
        const bool branch_taken_0x29f994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F994u;
        // 0x29f998: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f994) {
            ctx->pc = 0x29F9C8u;
            goto label_29f9c8;
        }
    }
    ctx->pc = 0x29F99Cu;
    // 0x29f99c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f9a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29f9a4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F9A4u;
    SET_GPR_U32(ctx, 31, 0x29F9ACu);
    ctx->pc = 0x29F9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F9A4u;
    // 0x29f9a8: 0x24a5c688  addiu       $a1, $a1, -0x3978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F9A4u, 0x29F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9ACu;
label_29f9ac:
    // 0x29f9ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29f9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29f9b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29f9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9b4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x29f9b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f9b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f9bc: 0xc0a63ae  jal         func_298EB8
    ctx->pc = 0x29F9BCu;
    SET_GPR_U32(ctx, 31, 0x29F9C4u);
    ctx->pc = 0x29F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F9BCu;
    // 0x29f9c0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EB8u, 0x29F9BCu, 0x29F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9C4u;
label_29f9c4:
    // 0x29f9c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29f9c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f9c8:
    // 0x29f9c8: 0x10000229  b           . + 4 + (0x229 << 2)
    ctx->pc = 0x29F9C8u;
    {
        const bool branch_taken_0x29f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9C8u;
        // 0x29f9cc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9c8) {
            ctx->pc = 0x2A0270u;
            return;
        }
    }
    ctx->pc = 0x29F9D0u;
label_29f9d0:
    // 0x29f9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9d4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F9D4u;
    SET_GPR_U32(ctx, 31, 0x29F9DCu);
    ctx->pc = 0x29F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F9D4u;
    // 0x29f9d8: 0x24a5c6d0  addiu       $a1, $a1, -0x3930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F9D4u, 0x29F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9DCu;
label_29f9dc:
    // 0x29f9dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f9e0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x29F9E0u;
    {
        const bool branch_taken_0x29f9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9E0u;
        // 0x29f9e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9e0) {
            ctx->pc = 0x29FA40u;
            goto label_29fa40;
        }
    }
    ctx->pc = 0x29F9E8u;
    // 0x29f9e8: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x29f9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29f9ec: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29F9ECu;
    SET_GPR_U32(ctx, 31, 0x29F9F4u);
    ctx->pc = 0x29F9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F9ECu;
    // 0x29f9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29F9ECu, 0x29F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9F4u;
label_29f9f4:
    // 0x29f9f4: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x29f9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29f9f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f9fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29f9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29fa00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa04: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x29fa04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fa08: 0xc09e380  jal         func_278E00
    ctx->pc = 0x29FA08u;
    SET_GPR_U32(ctx, 31, 0x29FA10u);
    ctx->pc = 0x29FA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA08u;
    // 0x29fa0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278E00u, 0x29FA08u, 0x29FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA10u;
label_29fa10:
    // 0x29fa10: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29fa14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fa18: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FA18u;
    SET_GPR_U32(ctx, 31, 0x29FA20u);
    ctx->pc = 0x29FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA18u;
    // 0x29fa1c: 0x24a5c688  addiu       $a1, $a1, -0x3978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FA18u, 0x29FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA20u;
label_29fa20:
    // 0x29fa20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29fa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29fa24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fa28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29fa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29fa2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa30: 0xc0a642e  jal         func_2990B8
    ctx->pc = 0x29FA30u;
    SET_GPR_U32(ctx, 31, 0x29FA38u);
    ctx->pc = 0x29FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA30u;
    // 0x29fa34: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2990B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2990B8u, 0x29FA30u, 0x29FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA38u;
label_29fa38:
    // 0x29fa38: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x29FA38u;
    {
        const bool branch_taken_0x29fa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA38u;
        // 0x29fa3c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa38) {
            ctx->pc = 0x2A026Cu;
            return;
        }
    }
    ctx->pc = 0x29FA40u;
label_29fa40:
    // 0x29fa40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa44: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FA44u;
    SET_GPR_U32(ctx, 31, 0x29FA4Cu);
    ctx->pc = 0x29FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA44u;
    // 0x29fa48: 0x24a5c6e0  addiu       $a1, $a1, -0x3920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FA44u, 0x29FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA4Cu;
label_29fa4c:
    // 0x29fa4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fa50: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29FA50u;
    {
        const bool branch_taken_0x29fa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA50u;
        // 0x29fa54: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa50) {
            ctx->pc = 0x29FA8Cu;
            goto label_29fa8c;
        }
    }
    ctx->pc = 0x29FA58u;
    // 0x29fa58: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29fa58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fa5c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fa60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29fa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29fa64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa68: 0xc09e4d0  jal         func_279340
    ctx->pc = 0x29FA68u;
    SET_GPR_U32(ctx, 31, 0x29FA70u);
    ctx->pc = 0x29FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA68u;
    // 0x29fa6c: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279340u, 0x29FA68u, 0x29FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA70u;
label_29fa70:
    // 0x29fa70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29fa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fa78: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29fa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fa7c: 0xc0a5d6a  jal         func_2975A8
    ctx->pc = 0x29FA7Cu;
    SET_GPR_U32(ctx, 31, 0x29FA84u);
    ctx->pc = 0x29FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA7Cu;
    // 0x29fa80: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975A8u, 0x29FA7Cu, 0x29FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA84u;
label_29fa84:
    // 0x29fa84: 0x10000217  b           . + 4 + (0x217 << 2)
    ctx->pc = 0x29FA84u;
    {
        const bool branch_taken_0x29fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA84u;
        // 0x29fa88: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa84) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29FA8Cu;
label_29fa8c:
    // 0x29fa8c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29fa90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa94: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FA94u;
    SET_GPR_U32(ctx, 31, 0x29FA9Cu);
    ctx->pc = 0x29FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA94u;
    // 0x29fa98: 0x24a5c6e8  addiu       $a1, $a1, -0x3918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FA94u, 0x29FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA9Cu;
label_29fa9c:
    // 0x29fa9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fa9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29faa0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29FAA0u;
    {
        const bool branch_taken_0x29faa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAA0u;
        // 0x29faa4: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29faa0) {
            ctx->pc = 0x29FADCu;
            goto label_29fadc;
        }
    }
    ctx->pc = 0x29FAA8u;
    // 0x29faa8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29faa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29faac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fab0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fab4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29fab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fab8: 0xc09e4d0  jal         func_279340
    ctx->pc = 0x29FAB8u;
    SET_GPR_U32(ctx, 31, 0x29FAC0u);
    ctx->pc = 0x29FABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FAB8u;
    // 0x29fabc: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279340u, 0x29FAB8u, 0x29FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAC0u;
label_29fac0:
    // 0x29fac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29fac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fac4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fac8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29fac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29facc: 0xc0a6092  jal         func_298248
    ctx->pc = 0x29FACCu;
    SET_GPR_U32(ctx, 31, 0x29FAD4u);
    ctx->pc = 0x29FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FACCu;
    // 0x29fad0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298248u, 0x29FACCu, 0x29FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAD4u;
label_29fad4:
    // 0x29fad4: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x29FAD4u;
    {
        const bool branch_taken_0x29fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAD4u;
        // 0x29fad8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fad4) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29FADCu;
label_29fadc:
    // 0x29fadc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29fadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29fae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fae4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FAE4u;
    SET_GPR_U32(ctx, 31, 0x29FAECu);
    ctx->pc = 0x29FAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FAE4u;
    // 0x29fae8: 0x24a5c6f8  addiu       $a1, $a1, -0x3908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FAE4u, 0x29FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAECu;
label_29faec:
    // 0x29faec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29faecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29faf0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29FAF0u;
    {
        const bool branch_taken_0x29faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAF0u;
        // 0x29faf4: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29faf0) {
            ctx->pc = 0x29FB2Cu;
            goto label_29fb2c;
        }
    }
    ctx->pc = 0x29FAF8u;
    // 0x29faf8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29faf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fafc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fb00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29fb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29fb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb08: 0xc09e4d0  jal         func_279340
    ctx->pc = 0x29FB08u;
    SET_GPR_U32(ctx, 31, 0x29FB10u);
    ctx->pc = 0x29FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FB08u;
    // 0x29fb0c: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279340u, 0x29FB08u, 0x29FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB10u;
label_29fb10:
    // 0x29fb10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29fb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fb18: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29fb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fb1c: 0xc0a615a  jal         func_298568
    ctx->pc = 0x29FB1Cu;
    SET_GPR_U32(ctx, 31, 0x29FB24u);
    ctx->pc = 0x29FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FB1Cu;
    // 0x29fb20: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298568u, 0x29FB1Cu, 0x29FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB24u;
label_29fb24:
    // 0x29fb24: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x29FB24u;
    {
        const bool branch_taken_0x29fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB24u;
        // 0x29fb28: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb24) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29FB2Cu;
label_29fb2c:
    // 0x29fb2c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29fb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb34: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FB34u;
    SET_GPR_U32(ctx, 31, 0x29FB3Cu);
    ctx->pc = 0x29FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FB34u;
    // 0x29fb38: 0x24a5c700  addiu       $a1, $a1, -0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FB34u, 0x29FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB3Cu;
label_29fb3c:
    // 0x29fb3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fb40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29FB40u;
    {
        const bool branch_taken_0x29fb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB40u;
        // 0x29fb44: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb40) {
            ctx->pc = 0x29FB7Cu;
            goto label_29fb7c;
        }
    }
    ctx->pc = 0x29FB48u;
    // 0x29fb48: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29fb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fb4c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fb50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29fb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29fb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb58: 0xc09e4d0  jal         func_279340
    ctx->pc = 0x29FB58u;
    SET_GPR_U32(ctx, 31, 0x29FB60u);
    ctx->pc = 0x29FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FB58u;
    // 0x29fb5c: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279340u, 0x29FB58u, 0x29FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB60u;
label_29fb60:
    // 0x29fb60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29fb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fb68: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fb6c: 0xc0a4646  jal         func_291918
    ctx->pc = 0x29FB6Cu;
    SET_GPR_U32(ctx, 31, 0x29FB74u);
    ctx->pc = 0x29FB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FB6Cu;
    // 0x29fb70: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291918u, 0x29FB6Cu, 0x29FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB74u;
label_29fb74:
    // 0x29fb74: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x29FB74u;
    {
        const bool branch_taken_0x29fb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB74u;
        // 0x29fb78: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb74) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29FB7Cu;
label_29fb7c:
    // 0x29fb7c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29fb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FB84u;
    SET_GPR_U32(ctx, 31, 0x29FB8Cu);
    ctx->pc = 0x29FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FB84u;
    // 0x29fb88: 0x24a5c710  addiu       $a1, $a1, -0x38F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FB84u, 0x29FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB8Cu;
label_29fb8c:
    // 0x29fb8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fb90: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x29FB90u;
    {
        const bool branch_taken_0x29fb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB90u;
        // 0x29fb94: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb90) {
            ctx->pc = 0x29FC98u;
            goto label_29fc98;
        }
    }
    ctx->pc = 0x29FB98u;
    // 0x29fb98: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x29fb98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29fb9c: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x29fb9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fba0: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x29fba0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29fba4: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x29fba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29fba8: 0x27be00f8  addiu       $fp, $sp, 0xF8
    ctx->pc = 0x29fba8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x29fbac: 0x27b500e8  addiu       $s5, $sp, 0xE8
    ctx->pc = 0x29fbacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x29fbb0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x29fbb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29fbb4: 0x0  nop
    ctx->pc = 0x29fbb4u;
    // NOP
label_29fbb8:
    // 0x29fbb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbbc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29FBBCu;
    SET_GPR_U32(ctx, 31, 0x29FBC4u);
    ctx->pc = 0x29FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBBCu;
    // 0x29fbc0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29FBBCu, 0x29FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBC4u;
label_29fbc4:
    // 0x29fbc4: 0x0  nop
    ctx->pc = 0x29fbc4u;
    // NOP
    // 0x29fbc8: 0x1634fffb  bne         $s1, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29FBC8u;
    {
        const bool branch_taken_0x29fbc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x29FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FBC8u;
        // 0x29fbcc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbc8) {
            ctx->pc = 0x29FBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fbb8;
        }
    }
    ctx->pc = 0x29FBD0u;
    // 0x29fbd0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29fbd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fbd8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29fbdc: 0x0  nop
    ctx->pc = 0x29fbdcu;
    // NOP
label_29fbe0:
    // 0x29fbe0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fbe4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29fbe8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29fbec: 0x0  nop
    ctx->pc = 0x29fbecu;
    // NOP
    // 0x29fbf0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29FBF0u;
    {
        const bool branch_taken_0x29fbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FBF0u;
        // 0x29fbf4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbf0) {
            ctx->pc = 0x29FBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fbe0;
        }
    }
    ctx->pc = 0x29FBF8u;
    // 0x29fbf8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29fbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fbfc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x29fbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fc00: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x29fc00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29fc04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29fc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc08: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x29fc08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc0c: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x29fc0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc10: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x29fc10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc14: 0xc09e5a8  jal         func_2796A0
    ctx->pc = 0x29FC14u;
    SET_GPR_U32(ctx, 31, 0x29FC1Cu);
    ctx->pc = 0x29FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FC14u;
    // 0x29fc18: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2796A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796A0u, 0x29FC14u, 0x29FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC1Cu;
label_29fc1c:
    // 0x29fc1c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x29fc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fc24: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x29fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fc28: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x29fc28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29fc2c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x29fc2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc30: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x29fc30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29fc34: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x29FC34u;
    SET_GPR_U32(ctx, 31, 0x29FC3Cu);
    ctx->pc = 0x29FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FC34u;
    // 0x29fc38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x29FC34u, 0x29FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC3Cu;
label_29fc3c:
    // 0x29fc3c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29fc3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc40: 0x12530009  beq         $s2, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x29FC40u;
    {
        const bool branch_taken_0x29fc40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x29FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC40u;
        // 0x29fc44: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc40) {
            ctx->pc = 0x29FC68u;
            goto label_29fc68;
        }
    }
    ctx->pc = 0x29FC48u;
    // 0x29fc48: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x29fc48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc4c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x29fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_29fc50:
    // 0x29fc50: 0x0  nop
    ctx->pc = 0x29fc50u;
    // NOP
    // 0x29fc54: 0x0  nop
    ctx->pc = 0x29fc54u;
    // NOP
    // 0x29fc58: 0x0  nop
    ctx->pc = 0x29fc58u;
    // NOP
    // 0x29fc5c: 0x0  nop
    ctx->pc = 0x29fc5cu;
    // NOP
    // 0x29fc60: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29FC60u;
    {
        const bool branch_taken_0x29fc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC60u;
        // 0x29fc64: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc60) {
            ctx->pc = 0x29FC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fc50;
        }
    }
    ctx->pc = 0x29FC68u;
label_29fc68:
    // 0x29fc68: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x29fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29fc6c: 0x1052019d  beq         $v0, $s2, . + 4 + (0x19D << 2)
    ctx->pc = 0x29FC6Cu;
    {
        const bool branch_taken_0x29fc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x29FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC6Cu;
        // 0x29fc70: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc6c) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29FC74u;
    // 0x29fc74: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x29fc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_29fc78:
    // 0x29fc78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29fc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc7c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29FC7Cu;
    SET_GPR_U32(ctx, 31, 0x29FC84u);
    ctx->pc = 0x29FC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FC7Cu;
    // 0x29fc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29FC7Cu, 0x29FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC84u;
label_29fc84:
    // 0x29fc84: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x29fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29fc88: 0x1470fffb  bne         $v1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29FC88u;
    {
        const bool branch_taken_0x29fc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x29FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC88u;
        // 0x29fc8c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc88) {
            ctx->pc = 0x29FC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fc78;
        }
    }
    ctx->pc = 0x29FC90u;
    // 0x29fc90: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x29FC90u;
    {
        const bool branch_taken_0x29fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC90u;
        // 0x29fc94: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc90) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29FC98u;
label_29fc98:
    // 0x29fc98: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29fc98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29fc9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fca0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FCA0u;
    SET_GPR_U32(ctx, 31, 0x29FCA8u);
    ctx->pc = 0x29FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FCA0u;
    // 0x29fca4: 0x24a5c718  addiu       $a1, $a1, -0x38E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FCA0u, 0x29FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FCA8u;
label_29fca8:
    // 0x29fca8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fcac: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x29FCACu;
    {
        const bool branch_taken_0x29fcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCACu;
        // 0x29fcb0: 0x27a40108  addiu       $a0, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fcac) {
            ctx->pc = 0x29FDE0u;
            goto label_29fde0;
        }
    }
    ctx->pc = 0x29FCB4u;
    // 0x29fcb4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29fcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29fcb8: 0x27a60118  addiu       $a2, $sp, 0x118
    ctx->pc = 0x29fcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x29fcbc: 0xafa40220  sw          $a0, 0x220($sp)
    ctx->pc = 0x29fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 4));
    // 0x29fcc0: 0xafa50224  sw          $a1, 0x224($sp)
    ctx->pc = 0x29fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 5));
    // 0x29fcc4: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x29fcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29fcc8: 0xafa60228  sw          $a2, 0x228($sp)
    ctx->pc = 0x29fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 6));
    // 0x29fccc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x29fcccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29fcd0: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x29fcd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fcd4: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x29fcd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29fcd8: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x29fcd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29fcdc: 0x27be00f8  addiu       $fp, $sp, 0xF8
    ctx->pc = 0x29fcdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x29fce0: 0x27b500e8  addiu       $s5, $sp, 0xE8
    ctx->pc = 0x29fce0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x29fce4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x29fce4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29fce8:
    // 0x29fce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fcec: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29FCECu;
    SET_GPR_U32(ctx, 31, 0x29FCF4u);
    ctx->pc = 0x29FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FCECu;
    // 0x29fcf0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29FCECu, 0x29FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FCF4u;
label_29fcf4:
    // 0x29fcf4: 0x0  nop
    ctx->pc = 0x29fcf4u;
    // NOP
    // 0x29fcf8: 0x1634fffb  bne         $s1, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29FCF8u;
    {
        const bool branch_taken_0x29fcf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x29FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCF8u;
        // 0x29fcfc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fcf8) {
            ctx->pc = 0x29FCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fce8;
        }
    }
    ctx->pc = 0x29FD00u;
    // 0x29fd00: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29fd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29fd08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29fd0c: 0x0  nop
    ctx->pc = 0x29fd0cu;
    // NOP
label_29fd10:
    // 0x29fd10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29fd14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29fd18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29fd1c: 0x0  nop
    ctx->pc = 0x29fd1cu;
    // NOP
    // 0x29fd20: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29FD20u;
    {
        const bool branch_taken_0x29fd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD20u;
        // 0x29fd24: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd20) {
            ctx->pc = 0x29FD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fd10;
        }
    }
    ctx->pc = 0x29FD28u;
    // 0x29fd28: 0x8fa20224  lw          $v0, 0x224($sp)
    ctx->pc = 0x29fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x29fd2c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29fd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fd30: 0x8faa0220  lw          $t2, 0x220($sp)
    ctx->pc = 0x29fd30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x29fd34: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x29fd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fd38: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x29fd38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29fd3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29fd40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd44: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x29fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x29fd48: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x29fd48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd4c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x29fd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd50: 0xc09e5ea  jal         func_2797A8
    ctx->pc = 0x29FD50u;
    SET_GPR_U32(ctx, 31, 0x29FD58u);
    ctx->pc = 0x29FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FD50u;
    // 0x29fd54: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2797A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2797A8u, 0x29FD50u, 0x29FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD58u;
label_29fd58:
    // 0x29fd58: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x29fd58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fd60: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x29fd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fd64: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x29fd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29fd68: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x29fd68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd6c: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x29fd6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29fd70: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x29FD70u;
    SET_GPR_U32(ctx, 31, 0x29FD78u);
    ctx->pc = 0x29FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FD70u;
    // 0x29fd74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x29FD70u, 0x29FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD78u;
label_29fd78:
    // 0x29fd78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29fd78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd7c: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x29fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x29fd80: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29FD80u;
    {
        const bool branch_taken_0x29fd80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x29FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD80u;
        // 0x29fd84: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd80) {
            ctx->pc = 0x29FDA8u;
            goto label_29fda8;
        }
    }
    ctx->pc = 0x29FD88u;
    // 0x29fd88: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x29fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x29fd8c: 0x0  nop
    ctx->pc = 0x29fd8cu;
    // NOP
label_29fd90:
    // 0x29fd90: 0x0  nop
    ctx->pc = 0x29fd90u;
    // NOP
    // 0x29fd94: 0x0  nop
    ctx->pc = 0x29fd94u;
    // NOP
    // 0x29fd98: 0x0  nop
    ctx->pc = 0x29fd98u;
    // NOP
    // 0x29fd9c: 0x0  nop
    ctx->pc = 0x29fd9cu;
    // NOP
    // 0x29fda0: 0x1502fffb  bne         $t0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29FDA0u;
    {
        const bool branch_taken_0x29fda0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x29FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDA0u;
        // 0x29fda4: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fda0) {
            ctx->pc = 0x29FD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fd90;
        }
    }
    ctx->pc = 0x29FDA8u;
label_29fda8:
    // 0x29fda8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x29fda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fdac: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x29fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29fdb0: 0x1070014d  beq         $v1, $s0, . + 4 + (0x14D << 2)
    ctx->pc = 0x29FDB0u;
    {
        const bool branch_taken_0x29fdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x29FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDB0u;
        // 0x29fdb4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdb0) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29FDB8u;
    // 0x29fdb8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x29fdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x29fdbc: 0x0  nop
    ctx->pc = 0x29fdbcu;
    // NOP
label_29fdc0:
    // 0x29fdc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29fdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fdc4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29FDC4u;
    SET_GPR_U32(ctx, 31, 0x29FDCCu);
    ctx->pc = 0x29FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FDC4u;
    // 0x29fdc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29FDC4u, 0x29FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDCCu;
label_29fdcc:
    // 0x29fdcc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29fdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29fdd0: 0x1490fffb  bne         $a0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29FDD0u;
    {
        const bool branch_taken_0x29fdd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x29FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDD0u;
        // 0x29fdd4: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdd0) {
            ctx->pc = 0x29FDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fdc0;
        }
    }
    ctx->pc = 0x29FDD8u;
    // 0x29fdd8: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x29FDD8u;
    {
        const bool branch_taken_0x29fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDD8u;
        // 0x29fddc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdd8) {
            ctx->pc = 0x2A02E8u;
            return;
        }
    }
    ctx->pc = 0x29FDE0u;
label_29fde0:
    // 0x29fde0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29fde4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fde8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FDE8u;
    SET_GPR_U32(ctx, 31, 0x29FDF0u);
    ctx->pc = 0x29FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FDE8u;
    // 0x29fdec: 0x24a5c720  addiu       $a1, $a1, -0x38E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FDE8u, 0x29FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDF0u;
label_29fdf0:
    // 0x29fdf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fdf4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29FDF4u;
    {
        const bool branch_taken_0x29fdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDF4u;
        // 0x29fdf8: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdf4) {
            ctx->pc = 0x29FE50u;
            goto label_29fe50;
        }
    }
    ctx->pc = 0x29FDFCu;
    // 0x29fdfc: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29fdfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fe00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fe04: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x29fe04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fe08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29fe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29fe0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe10: 0xc09e53a  jal         func_2794E8
    ctx->pc = 0x29FE10u;
    SET_GPR_U32(ctx, 31, 0x29FE18u);
    ctx->pc = 0x29FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FE10u;
    // 0x29fe14: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794E8u, 0x29FE10u, 0x29FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE18u;
label_29fe18:
    // 0x29fe18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29fe18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29fe1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29fe1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29fe20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29fe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe24: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x29fe24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x29fe28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29fe28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x29fe2c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x29fe2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29fe30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29fe30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29fe34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29fe38: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x29fe38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x29fe3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fe40: 0xc0a659c  jal         func_299670
    ctx->pc = 0x29FE40u;
    SET_GPR_U32(ctx, 31, 0x29FE48u);
    ctx->pc = 0x29FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FE40u;
    // 0x29fe44: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299670u, 0x29FE40u, 0x29FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE48u;
label_29fe48:
    // 0x29fe48: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x29FE48u;
    {
        const bool branch_taken_0x29fe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE48u;
        // 0x29fe4c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe48) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29FE50u;
label_29fe50:
    // 0x29fe50: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29fe50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29fe54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe58: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FE58u;
    SET_GPR_U32(ctx, 31, 0x29FE60u);
    ctx->pc = 0x29FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FE58u;
    // 0x29fe5c: 0x24a5c728  addiu       $a1, $a1, -0x38D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FE58u, 0x29FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE60u;
label_29fe60:
    // 0x29fe60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fe64: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x29FE64u;
    {
        const bool branch_taken_0x29fe64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE64u;
        // 0x29fe68: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe64) {
            ctx->pc = 0x29FF00u;
            goto label_29ff00;
        }
    }
    ctx->pc = 0x29FE6Cu;
    // 0x29fe6c: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x29fe6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29fe70: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29fe70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fe74: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x29fe74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29fe78: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x29fe78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29fe7c: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x29fe7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29fe80: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x29fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29fe84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fe88: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x29fe88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fe8c: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x29fe8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe94: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x29fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x29fe98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29fe98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe9c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x29fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x29fea0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29fea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fea4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x29fea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fea8: 0xc09e6ec  jal         func_279BB0
    ctx->pc = 0x29FEA8u;
    SET_GPR_U32(ctx, 31, 0x29FEB0u);
    ctx->pc = 0x29FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FEA8u;
    // 0x29feac: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279BB0u, 0x29FEA8u, 0x29FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FEB0u;
label_29feb0:
    // 0x29feb0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x29feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29feb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29feb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29feb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29feb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29febc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x29febcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x29fec0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29fec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x29fec4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x29fec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29fec8: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x29fec8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fecc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29feccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29fed0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x29fed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x29fed4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29fed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fed8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29fed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fedc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x29fedcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fee0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x29fee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fee4: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x29fee4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fee8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x29fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x29feec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29feecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fef0: 0xc0a66b0  jal         func_299AC0
    ctx->pc = 0x29FEF0u;
    SET_GPR_U32(ctx, 31, 0x29FEF8u);
    ctx->pc = 0x29FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FEF0u;
    // 0x29fef4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299AC0u, 0x29FEF0u, 0x29FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FEF8u;
label_29fef8:
    // 0x29fef8: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x29FEF8u;
    {
        const bool branch_taken_0x29fef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FEF8u;
        // 0x29fefc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fef8) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29FF00u;
label_29ff00:
    // 0x29ff00: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29ff04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ff04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff08: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FF08u;
    SET_GPR_U32(ctx, 31, 0x29FF10u);
    ctx->pc = 0x29FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FF08u;
    // 0x29ff0c: 0x24a5c738  addiu       $a1, $a1, -0x38C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FF08u, 0x29FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF10u;
label_29ff10:
    // 0x29ff10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ff10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ff14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29FF14u;
    {
        const bool branch_taken_0x29ff14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF14u;
        // 0x29ff18: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff14) {
            ctx->pc = 0x29FF4Cu;
            goto label_29ff4c;
        }
    }
    ctx->pc = 0x29FF1Cu;
    // 0x29ff1c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29ff1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ff20: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29ff24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ff24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29ff28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff2c: 0xc09e45a  jal         func_279168
    ctx->pc = 0x29FF2Cu;
    SET_GPR_U32(ctx, 31, 0x29FF34u);
    ctx->pc = 0x29FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FF2Cu;
    // 0x29ff30: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279168u, 0x29FF2Cu, 0x29FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF34u;
label_29ff34:
    // 0x29ff34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29ff34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29ff38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff3c: 0xc0a5b3e  jal         func_296CF8
    ctx->pc = 0x29FF3Cu;
    SET_GPR_U32(ctx, 31, 0x29FF44u);
    ctx->pc = 0x29FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FF3Cu;
    // 0x29ff40: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CF8u, 0x29FF3Cu, 0x29FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF44u;
label_29ff44:
    // 0x29ff44: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x29FF44u;
    {
        const bool branch_taken_0x29ff44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF44u;
        // 0x29ff48: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff44) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29FF4Cu;
label_29ff4c:
    // 0x29ff4c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29ff50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FF54u;
    SET_GPR_U32(ctx, 31, 0x29FF5Cu);
    ctx->pc = 0x29FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FF54u;
    // 0x29ff58: 0x24a5c740  addiu       $a1, $a1, -0x38C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FF54u, 0x29FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF5Cu;
label_29ff5c:
    // 0x29ff5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ff5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ff60: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29FF60u;
    {
        const bool branch_taken_0x29ff60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF60u;
        // 0x29ff64: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff60) {
            ctx->pc = 0x29FF98u;
            goto label_29ff98;
        }
    }
    ctx->pc = 0x29FF68u;
    // 0x29ff68: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29ff68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ff6c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29ff70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ff70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29ff74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff78: 0xc09e45a  jal         func_279168
    ctx->pc = 0x29FF78u;
    SET_GPR_U32(ctx, 31, 0x29FF80u);
    ctx->pc = 0x29FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FF78u;
    // 0x29ff7c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279168u, 0x29FF78u, 0x29FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF80u;
label_29ff80:
    // 0x29ff80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29ff80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29ff84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff88: 0xc0a5ca2  jal         func_297288
    ctx->pc = 0x29FF88u;
    SET_GPR_U32(ctx, 31, 0x29FF90u);
    ctx->pc = 0x29FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FF88u;
    // 0x29ff8c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297288u, 0x29FF88u, 0x29FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF90u;
label_29ff90:
    // 0x29ff90: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x29FF90u;
    {
        const bool branch_taken_0x29ff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF90u;
        // 0x29ff94: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff90) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29FF98u;
label_29ff98:
    // 0x29ff98: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29ff9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffa0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29FFA0u;
    SET_GPR_U32(ctx, 31, 0x29FFA8u);
    ctx->pc = 0x29FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FFA0u;
    // 0x29ffa4: 0x24a5c748  addiu       $a1, $a1, -0x38B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29FFA0u, 0x29FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FFA8u;
label_29ffa8:
    // 0x29ffa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ffa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ffac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29FFACu;
    {
        const bool branch_taken_0x29ffac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFACu;
        // 0x29ffb0: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffac) {
            ctx->pc = 0x29FFFCu;
            goto label_29fffc;
        }
    }
    ctx->pc = 0x29FFB4u;
    // 0x29ffb4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x29ffb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x29ffb8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29ffb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x29ffbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ffbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ffc0: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x29ffc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ffc4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29ffc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ffc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffcc: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x29ffccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x29ffd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29ffd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29ffd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffd8: 0xc09e4aa  jal         func_2792A8
    ctx->pc = 0x29FFD8u;
    SET_GPR_U32(ctx, 31, 0x29FFE0u);
    ctx->pc = 0x29FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FFD8u;
    // 0x29ffdc: 0x27a8021c  addiu       $t0, $sp, 0x21C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2792A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2792A8u, 0x29FFD8u, 0x29FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FFE0u;
label_29ffe0:
    // 0x29ffe0: 0xc7ac021c  lwc1        $f12, 0x21C($sp)
    ctx->pc = 0x29ffe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29ffe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29ffe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29ffe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffec: 0xc0a5c44  jal         func_297110
    ctx->pc = 0x29FFECu;
    SET_GPR_U32(ctx, 31, 0x29FFF4u);
    ctx->pc = 0x29FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FFECu;
    // 0x29fff0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297110u, 0x29FFECu, 0x29FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FFF4u;
label_29fff4:
    // 0x29fff4: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x29FFF4u;
    {
        const bool branch_taken_0x29fff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFF4u;
        // 0x29fff8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fff4) {
            ctx->pc = 0x2A02E4u;
            return;
        }
    }
    ctx->pc = 0x29FFFCu;
label_29fffc:
    // 0x29fffc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29fffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    ctx->pc = 0x2a0000u;
}
